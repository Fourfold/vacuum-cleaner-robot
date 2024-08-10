#include "vacuum_cleaner_robot/obstacle_avoidance_server.h"

ObstacleAvoidanceServer::ObstacleAvoidanceServer()
: Node("avoidance_server")
{
    laser_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
        "/scan", 10, std::bind(&ObstacleAvoidanceServer::laser_callback, this, std::placeholders::_1));
    repulsive_pub_ = this->create_publisher<geometry_msgs::msg::Vector3>("/repulsive_force", 10);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Server ready.");
}

void ObstacleAvoidanceServer::laser_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg)
{
    // Store the laser scan data for processing in the timer callback
    laser_scan_ = msg;
    calculate_total_repulsive_force();
    repulsive_pub_->publish(repulsive_force_);
}

geometry_msgs::msg::Vector3 ObstacleAvoidanceServer::calculate_single_repulsive_force(float range, float angle)
{
    geometry_msgs::msg::Vector3 force;
    float strength = 0.002 / (range * range); // Repulsive force strength decreases with distance
    force.x = -strength * std::cos(angle);
    force.y = -strength * std::sin(angle);
    force.z = 0.0;
    return force;
}

void ObstacleAvoidanceServer::calculate_total_repulsive_force()
{
    if (!laser_scan_) {
        return;
    }
    repulsive_forces_.clear();
    repulsive_force_.x = 0;
    repulsive_force_.y = 0;
    repulsive_force_.z = 0;

    // Calculate repulsive forces
    for (size_t i = 0; i < laser_scan_->ranges.size()/8; ++i) {
        if (laser_scan_->ranges[i] < 0.7) {
            float angle = laser_scan_->angle_min + i * laser_scan_->angle_increment;
            geometry_msgs::msg::Vector3 force = calculate_single_repulsive_force(laser_scan_->ranges[i], angle);
            repulsive_forces_.push_back(force);
            repulsive_force_.x += force.x;
            repulsive_force_.y += force.y;
        }
    }
    for (size_t i = 7*laser_scan_->ranges.size()/8; i < laser_scan_->ranges.size(); ++i) {
        if (laser_scan_->ranges[i] < 0.7) {
            float angle = laser_scan_->angle_min + i * laser_scan_->angle_increment;
            geometry_msgs::msg::Vector3 force = calculate_single_repulsive_force(laser_scan_->ranges[i], angle);
            repulsive_forces_.push_back(force);
            repulsive_force_.x += force.x;
            repulsive_force_.y += force.y;
        }
    }
}

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ObstacleAvoidanceServer>());
    rclcpp::shutdown();
    return 0;
}