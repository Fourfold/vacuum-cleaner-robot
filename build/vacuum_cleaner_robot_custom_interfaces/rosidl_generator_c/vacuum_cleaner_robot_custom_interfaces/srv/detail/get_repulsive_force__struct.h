// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vacuum_cleaner_robot_custom_interfaces:srv/GetRepulsiveForce.idl
// generated code does not contain a copyright notice

#ifndef VACUUM_CLEANER_ROBOT_CUSTOM_INTERFACES__SRV__DETAIL__GET_REPULSIVE_FORCE__STRUCT_H_
#define VACUUM_CLEANER_ROBOT_CUSTOM_INTERFACES__SRV__DETAIL__GET_REPULSIVE_FORCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetRepulsiveForce in the package vacuum_cleaner_robot_custom_interfaces.
typedef struct vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request
{
  uint8_t structure_needs_at_least_one_member;
} vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request;

// Struct for a sequence of vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request.
typedef struct vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence
{
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'repulsive_force'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in srv/GetRepulsiveForce in the package vacuum_cleaner_robot_custom_interfaces.
typedef struct vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response
{
  geometry_msgs__msg__Vector3 repulsive_force;
} vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response;

// Struct for a sequence of vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response.
typedef struct vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence
{
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VACUUM_CLEANER_ROBOT_CUSTOM_INTERFACES__SRV__DETAIL__GET_REPULSIVE_FORCE__STRUCT_H_
