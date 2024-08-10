#include "vacuum_cleaner_robot/navigator.h"

using namespace std::chrono_literals;

Navigator::Navigator()
: Node("navigator_node")
{
    cmd_vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
    repulsive_sub_ = this->create_subscription<geometry_msgs::msg::Vector3>(
        "/repulsive_force", 10, std::bind(&Navigator::repulsive_callback, this, std::placeholders::_1));

    // Initialize cmd_vel message
    cmd_vel_msg_.linear.x = 0.5;
    cmd_vel_msg_.angular.z = 0.0;
}

void Navigator::calculate_forces()
{
    resultant_force_.x = 0;
    resultant_force_.y = 0;
    resultant_force_.z = 0;

    // Get repulsive force
    resultant_force_.x += repulsive_force_.x;
    resultant_force_.y += repulsive_force_.y;

    // Calculate attractive force
    attractive_force_ = calculate_attractive_force();
    resultant_force_.x += attractive_force_.x;
    resultant_force_.y += attractive_force_.y;

    // Modify cmd_vel_msg_ based on resultant force
    cmd_vel_msg_.linear.x = resultant_force_.x;
    cmd_vel_msg_.angular.z = std::atan2(resultant_force_.y, resultant_force_.x);
}

geometry_msgs::msg::Vector3 Navigator::calculate_attractive_force()
{
    geometry_msgs::msg::Vector3 force;
    force.x = 0.5; // Attractive force towards the goal in the positive x direction
    force.y = 0.0;
    force.z = 0.0;
    return force;
}

void Navigator::repulsive_callback(const geometry_msgs::msg::Vector3::SharedPtr msg) {
    repulsive_force_.x = msg.get()->x;
    repulsive_force_.y = msg.get()->y;
    repulsive_force_.z = msg.get()->z;
    calculate_forces();

    publish_cmd_vel();
}

void Navigator::publish_cmd_vel()
{
    cmd_vel_pub_->publish(cmd_vel_msg_);
}

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Navigator>());
    rclcpp::shutdown();
    return 0;
}