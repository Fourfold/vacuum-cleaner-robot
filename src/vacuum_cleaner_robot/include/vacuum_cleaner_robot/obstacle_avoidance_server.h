#ifndef AVOIDANCE_HPP_
#define AVOIDANCE_HPP_

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <geometry_msgs/msg/vector3.hpp>
#include <vacuum_cleaner_robot_custom_interfaces/srv/get_repulsive_force.hpp>

class ObstacleAvoidanceServer : public rclcpp::Node
{
public:
    ObstacleAvoidanceServer();

private:
    void laser_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg);
    
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr laser_sub_;
    rclcpp::Publisher<geometry_msgs::msg::Vector3>::SharedPtr repulsive_pub_;

    sensor_msgs::msg::LaserScan::SharedPtr laser_scan_;
    std::vector<geometry_msgs::msg::Vector3> repulsive_forces_;
    geometry_msgs::msg::Vector3 repulsive_force_;

    geometry_msgs::msg::Vector3 calculate_single_repulsive_force(float range, float angle);
    void calculate_total_repulsive_force();
};

#endif  // AVOIDANCE_HPP_