// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vacuum_cleaner_robot_custom_interfaces:srv/GetRepulsiveForce.idl
// generated code does not contain a copyright notice
#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vacuum_cleaner_robot_custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__struct.h"
#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetRepulsiveForce_Request__ros_msg_type = vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request;

static bool _GetRepulsiveForce_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetRepulsiveForce_Request__ros_msg_type * ros_message = static_cast<const _GetRepulsiveForce_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetRepulsiveForce_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetRepulsiveForce_Request__ros_msg_type * ros_message = static_cast<_GetRepulsiveForce_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vacuum_cleaner_robot_custom_interfaces
size_t get_serialized_size_vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRepulsiveForce_Request__ros_msg_type * ros_message = static_cast<const _GetRepulsiveForce_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetRepulsiveForce_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vacuum_cleaner_robot_custom_interfaces
size_t max_serialized_size_vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request(
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

  // member: structure_needs_at_least_one_member
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
    using DataType = vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetRepulsiveForce_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetRepulsiveForce_Request = {
  "vacuum_cleaner_robot_custom_interfaces::srv",
  "GetRepulsiveForce_Request",
  _GetRepulsiveForce_Request__cdr_serialize,
  _GetRepulsiveForce_Request__cdr_deserialize,
  _GetRepulsiveForce_Request__get_serialized_size,
  _GetRepulsiveForce_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetRepulsiveForce_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetRepulsiveForce_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Request)() {
  return &_GetRepulsiveForce_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "vacuum_cleaner_robot_custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__struct.h"
// already included above
// #include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/vector3__functions.h"  // repulsive_force

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vacuum_cleaner_robot_custom_interfaces
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vacuum_cleaner_robot_custom_interfaces
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vacuum_cleaner_robot_custom_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();


using _GetRepulsiveForce_Response__ros_msg_type = vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response;

static bool _GetRepulsiveForce_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetRepulsiveForce_Response__ros_msg_type * ros_message = static_cast<const _GetRepulsiveForce_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: repulsive_force
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->repulsive_force, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetRepulsiveForce_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetRepulsiveForce_Response__ros_msg_type * ros_message = static_cast<_GetRepulsiveForce_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: repulsive_force
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->repulsive_force))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vacuum_cleaner_robot_custom_interfaces
size_t get_serialized_size_vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRepulsiveForce_Response__ros_msg_type * ros_message = static_cast<const _GetRepulsiveForce_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name repulsive_force

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->repulsive_force), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetRepulsiveForce_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vacuum_cleaner_robot_custom_interfaces
size_t max_serialized_size_vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response(
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

  // member: repulsive_force
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
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
    using DataType = vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response;
    is_plain =
      (
      offsetof(DataType, repulsive_force) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetRepulsiveForce_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetRepulsiveForce_Response = {
  "vacuum_cleaner_robot_custom_interfaces::srv",
  "GetRepulsiveForce_Response",
  _GetRepulsiveForce_Response__cdr_serialize,
  _GetRepulsiveForce_Response__cdr_deserialize,
  _GetRepulsiveForce_Response__get_serialized_size,
  _GetRepulsiveForce_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetRepulsiveForce_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetRepulsiveForce_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Response)() {
  return &_GetRepulsiveForce_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "vacuum_cleaner_robot_custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vacuum_cleaner_robot_custom_interfaces/srv/get_repulsive_force.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetRepulsiveForce__callbacks = {
  "vacuum_cleaner_robot_custom_interfaces::srv",
  "GetRepulsiveForce",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Response)(),
};

static rosidl_service_type_support_t GetRepulsiveForce__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetRepulsiveForce__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce)() {
  return &GetRepulsiveForce__handle;
}

#if defined(__cplusplus)
}
#endif
