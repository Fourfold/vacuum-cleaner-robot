// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vacuum_cleaner_robot_custom_interfaces:srv/GetRepulsiveForce.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__rosidl_typesupport_introspection_c.h"
#include "vacuum_cleaner_robot_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__functions.h"
#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__rosidl_typesupport_introspection_c__GetRepulsiveForce_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__init(message_memory);
}

void vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__rosidl_typesupport_introspection_c__GetRepulsiveForce_Request_fini_function(void * message_memory)
{
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__rosidl_typesupport_introspection_c__GetRepulsiveForce_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__rosidl_typesupport_introspection_c__GetRepulsiveForce_Request_message_members = {
  "vacuum_cleaner_robot_custom_interfaces__srv",  // message namespace
  "GetRepulsiveForce_Request",  // message name
  1,  // number of fields
  sizeof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request),
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__rosidl_typesupport_introspection_c__GetRepulsiveForce_Request_message_member_array,  // message members
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__rosidl_typesupport_introspection_c__GetRepulsiveForce_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__rosidl_typesupport_introspection_c__GetRepulsiveForce_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__rosidl_typesupport_introspection_c__GetRepulsiveForce_Request_message_type_support_handle = {
  0,
  &vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__rosidl_typesupport_introspection_c__GetRepulsiveForce_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vacuum_cleaner_robot_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Request)() {
  if (!vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__rosidl_typesupport_introspection_c__GetRepulsiveForce_Request_message_type_support_handle.typesupport_identifier) {
    vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__rosidl_typesupport_introspection_c__GetRepulsiveForce_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__rosidl_typesupport_introspection_c__GetRepulsiveForce_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__rosidl_typesupport_introspection_c.h"
// already included above
// #include "vacuum_cleaner_robot_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__functions.h"
// already included above
// #include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__struct.h"


// Include directives for member types
// Member `repulsive_force`
#include "geometry_msgs/msg/vector3.h"
// Member `repulsive_force`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__init(message_memory);
}

void vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_fini_function(void * message_memory)
{
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_message_member_array[1] = {
  {
    "repulsive_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response, repulsive_force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_message_members = {
  "vacuum_cleaner_robot_custom_interfaces__srv",  // message namespace
  "GetRepulsiveForce_Response",  // message name
  1,  // number of fields
  sizeof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response),
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_message_member_array,  // message members
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_message_type_support_handle = {
  0,
  &vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vacuum_cleaner_robot_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Response)() {
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_message_type_support_handle.typesupport_identifier) {
    vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "vacuum_cleaner_robot_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers vacuum_cleaner_robot_custom_interfaces__srv__detail__get_repulsive_force__rosidl_typesupport_introspection_c__GetRepulsiveForce_service_members = {
  "vacuum_cleaner_robot_custom_interfaces__srv",  // service namespace
  "GetRepulsiveForce",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // vacuum_cleaner_robot_custom_interfaces__srv__detail__get_repulsive_force__rosidl_typesupport_introspection_c__GetRepulsiveForce_Request_message_type_support_handle,
  NULL  // response message
  // vacuum_cleaner_robot_custom_interfaces__srv__detail__get_repulsive_force__rosidl_typesupport_introspection_c__GetRepulsiveForce_Response_message_type_support_handle
};

static rosidl_service_type_support_t vacuum_cleaner_robot_custom_interfaces__srv__detail__get_repulsive_force__rosidl_typesupport_introspection_c__GetRepulsiveForce_service_type_support_handle = {
  0,
  &vacuum_cleaner_robot_custom_interfaces__srv__detail__get_repulsive_force__rosidl_typesupport_introspection_c__GetRepulsiveForce_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vacuum_cleaner_robot_custom_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce)() {
  if (!vacuum_cleaner_robot_custom_interfaces__srv__detail__get_repulsive_force__rosidl_typesupport_introspection_c__GetRepulsiveForce_service_type_support_handle.typesupport_identifier) {
    vacuum_cleaner_robot_custom_interfaces__srv__detail__get_repulsive_force__rosidl_typesupport_introspection_c__GetRepulsiveForce_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)vacuum_cleaner_robot_custom_interfaces__srv__detail__get_repulsive_force__rosidl_typesupport_introspection_c__GetRepulsiveForce_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Response)()->data;
  }

  return &vacuum_cleaner_robot_custom_interfaces__srv__detail__get_repulsive_force__rosidl_typesupport_introspection_c__GetRepulsiveForce_service_type_support_handle;
}
