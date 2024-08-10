#ifndef NAVIGATOR_HPP_
#define NAVIGATOR_HPP_

#include <chrono>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <vacuum_cleaner_robot_custom_interfaces/srv/get_repulsive_force.hpp>

class Navigator : public rclcpp::Node
{
public:
    Navigator();

private:
    void publish_cmd_vel();
    void repulsive_callback(const geometry_msgs::msg::Vector3::SharedPtr msg);
    
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
    rclcpp::Subscription<geometry_msgs::msg::Vector3>::SharedPtr repulsive_sub_;

    geometry_msgs::msg::Twist cmd_vel_msg_;
    geometry_msgs::msg::Vector3 repulsive_force_;
    geometry_msgs::msg::Vector3 attractive_force_;
    geometry_msgs::msg::Vector3 resultant_force_;

    void calculate_forces();
    void get_repulsive_force();
    geometry_msgs::msg::Vector3 calculate_attractive_force();
};

#endif  // NAVIGATOR_HPP_