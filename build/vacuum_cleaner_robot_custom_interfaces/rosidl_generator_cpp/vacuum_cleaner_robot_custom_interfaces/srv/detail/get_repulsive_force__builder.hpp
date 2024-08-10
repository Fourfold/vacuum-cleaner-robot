// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vacuum_cleaner_robot_custom_interfaces:srv/GetRepulsiveForce.idl
// generated code does not contain a copyright notice

#ifndef VACUUM_CLEANER_ROBOT_CUSTOM_INTERFACES__SRV__DETAIL__GET_REPULSIVE_FORCE__BUILDER_HPP_
#define VACUUM_CLEANER_ROBOT_CUSTOM_INTERFACES__SRV__DETAIL__GET_REPULSIVE_FORCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vacuum_cleaner_robot_custom_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request>()
{
  return ::vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace vacuum_cleaner_robot_custom_interfaces


namespace vacuum_cleaner_robot_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetRepulsiveForce_Response_repulsive_force
{
public:
  Init_GetRepulsiveForce_Response_repulsive_force()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response repulsive_force(::vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response::_repulsive_force_type arg)
  {
    msg_.repulsive_force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response>()
{
  return vacuum_cleaner_robot_custom_interfaces::srv::builder::Init_GetRepulsiveForce_Response_repulsive_force();
}

}  // namespace vacuum_cleaner_robot_custom_interfaces

#endif  // VACUUM_CLEANER_ROBOT_CUSTOM_INTERFACES__SRV__DETAIL__GET_REPULSIVE_FORCE__BUILDER_HPP_
