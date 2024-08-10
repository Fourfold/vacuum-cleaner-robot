// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from vacuum_cleaner_robot_custom_interfaces:srv/GetRepulsiveForce.idl
// generated code does not contain a copyright notice
#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__rosidl_typesupport_fastrtps_cpp.hpp"
#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace vacuum_cleaner_robot_custom_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vacuum_cleaner_robot_custom_interfaces
cdr_serialize(
  const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vacuum_cleaner_robot_custom_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vacuum_cleaner_robot_custom_interfaces
get_serialized_size(
  const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vacuum_cleaner_robot_custom_interfaces
max_serialized_size_GetRepulsiveForce_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetRepulsiveForce_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetRepulsiveForce_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetRepulsiveForce_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetRepulsiveForce_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetRepulsiveForce_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetRepulsiveForce_Request__callbacks = {
  "vacuum_cleaner_robot_custom_interfaces::srv",
  "GetRepulsiveForce_Request",
  _GetRepulsiveForce_Request__cdr_serialize,
  _GetRepulsiveForce_Request__cdr_deserialize,
  _GetRepulsiveForce_Request__get_serialized_size,
  _GetRepulsiveForce_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetRepulsiveForce_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetRepulsiveForce_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace vacuum_cleaner_robot_custom_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_vacuum_cleaner_robot_custom_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Request>()
{
  return &vacuum_cleaner_robot_custom_interfaces::srv::typesupport_fastrtps_cpp::_GetRepulsiveForce_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Request)() {
  return &vacuum_cleaner_robot_custom_interfaces::srv::typesupport_fastrtps_cpp::_GetRepulsiveForce_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace vacuum_cleaner_robot_custom_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vacuum_cleaner_robot_custom_interfaces
cdr_serialize(
  const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: repulsive_force
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.repulsive_force,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vacuum_cleaner_robot_custom_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response & ros_message)
{
  // Member: repulsive_force
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.repulsive_force);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vacuum_cleaner_robot_custom_interfaces
get_serialized_size(
  const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: repulsive_force

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.repulsive_force, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vacuum_cleaner_robot_custom_interfaces
max_serialized_size_GetRepulsiveForce_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: repulsive_force
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response;
    is_plain =
      (
      offsetof(DataType, repulsive_force) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetRepulsiveForce_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetRepulsiveForce_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetRepulsiveForce_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetRepulsiveForce_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetRepulsiveForce_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetRepulsiveForce_Response__callbacks = {
  "vacuum_cleaner_robot_custom_interfaces::srv",
  "GetRepulsiveForce_Response",
  _GetRepulsiveForce_Response__cdr_serialize,
  _GetRepulsiveForce_Response__cdr_deserialize,
  _GetRepulsiveForce_Response__get_serialized_size,
  _GetRepulsiveForce_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetRepulsiveForce_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetRepulsiveForce_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace vacuum_cleaner_robot_custom_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_vacuum_cleaner_robot_custom_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce_Response>()
{
  return &vacuum_cleaner_robot_custom_interfaces::srv::typesupport_fastrtps_cpp::_GetRepulsiveForce_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Response)() {
  return &vacuum_cleaner_robot_custom_interfaces::srv::typesupport_fastrtps_cpp::_GetRepulsiveForce_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace vacuum_cleaner_robot_custom_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetRepulsiveForce__callbacks = {
  "vacuum_cleaner_robot_custom_interfaces::srv",
  "GetRepulsiveForce",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Response)(),
};

static rosidl_service_type_support_t _GetRepulsiveForce__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetRepulsiveForce__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace vacuum_cleaner_robot_custom_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_vacuum_cleaner_robot_custom_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<vacuum_cleaner_robot_custom_interfaces::srv::GetRepulsiveForce>()
{
  return &vacuum_cleaner_robot_custom_interfaces::srv::typesupport_fastrtps_cpp::_GetRepulsiveForce__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce)() {
  return &vacuum_cleaner_robot_custom_interfaces::srv::typesupport_fastrtps_cpp::_GetRepulsiveForce__handle;
}

#ifdef __cplusplus
}
#endif
