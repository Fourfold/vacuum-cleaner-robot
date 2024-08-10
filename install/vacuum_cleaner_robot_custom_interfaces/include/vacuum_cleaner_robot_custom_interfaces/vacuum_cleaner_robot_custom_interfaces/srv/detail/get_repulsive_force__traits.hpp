// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vacuum_cleaner_robot_custom_interfaces:srv/GetRepulsiveForce.idl
// generated code does not contain a copyright notice

#ifndef VACUUM_CLEANER_ROBOT_CUSTOM_INTERFACES__SRV__DETAIL__GET_REPULSIVE_FORCE__TRAITS_HPP_
#define VACUUM_CLEANER_ROBOT_CUSTOM_INTERFACES__SRV__DETAIL__GET_REPULSIVE_FORCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vacuum_cleaner_robot_custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRepulsiveForce_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRepulsiveForce_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRepulsiveForce_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vacuum_cleaner_robot_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use vacuum_cleaner_robot_custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  vacuum_cleaner_robot_custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vacuum_cleaner_robot_custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request & msg)
{
  return vacuum_cleaner_robot_custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request>()
{
  return "vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request";
}

template<>
inline const char * name<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request>()
{
  return "vacuum_cleaner_robot_custom_interfaces/srv/GetRepulsiveForce_Request";
}

template<>
struct has_fixed_size<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'repulsive_force'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace vacuum_cleaner_robot_custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetRepulsiveForce_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: repulsive_force
  {
    out << "repulsive_force: ";
    to_flow_style_yaml(msg.repulsive_force, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRepulsiveForce_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: repulsive_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "repulsive_force:\n";
    to_block_style_yaml(msg.repulsive_force, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRepulsiveForce_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vacuum_cleaner_robot_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use vacuum_cleaner_robot_custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  vacuum_cleaner_robot_custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vacuum_cleaner_robot_custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response & msg)
{
  return vacuum_cleaner_robot_custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response>()
{
  return "vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response";
}

template<>
inline const char * name<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response>()
{
  return "vacuum_cleaner_robot_custom_interfaces/srv/GetRepulsiveForce_Response";
}

template<>
struct has_fixed_size<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce>()
{
  return "vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce";
}

template<>
inline const char * name<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce>()
{
  return "vacuum_cleaner_robot_custom_interfaces/srv/GetRepulsiveForce";
}

template<>
struct has_fixed_size<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce>
  : std::integral_constant<
    bool,
    has_fixed_size<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request>::value &&
    has_fixed_size<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response>::value
  >
{
};

template<>
struct has_bounded_size<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce>
  : std::integral_constant<
    bool,
    has_bounded_size<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request>::value &&
    has_bounded_size<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response>::value
  >
{
};

template<>
struct is_service<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce>
  : std::true_type
{
};

template<>
struct is_service_request<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VACUUM_CLEANER_ROBOT_CUSTOM_INTERFACES__SRV__DETAIL__GET_REPULSIVE_FORCE__TRAITS_HPP_
