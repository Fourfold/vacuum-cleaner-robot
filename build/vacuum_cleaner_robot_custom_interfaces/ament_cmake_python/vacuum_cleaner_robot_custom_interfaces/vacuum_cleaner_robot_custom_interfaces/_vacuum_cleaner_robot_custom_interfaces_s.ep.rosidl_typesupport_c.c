// generated from rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
// generated code does not contain a copyright notice
#include <Python.h>

static PyMethodDef vacuum_cleaner_robot_custom_interfaces__methods[] = {
  {NULL, NULL, 0, NULL}  /* sentinel */
};

static struct PyModuleDef vacuum_cleaner_robot_custom_interfaces__module = {
  PyModuleDef_HEAD_INIT,
  "_vacuum_cleaner_robot_custom_interfaces_support",
  "_vacuum_cleaner_robot_custom_interfaces_doc",
  -1,  /* -1 means that the module keeps state in global variables */
  vacuum_cleaner_robot_custom_interfaces__methods,
  NULL,
  NULL,
  NULL,
  NULL,
};

#include <stdbool.h>
#include <stdint.h>
#include "rosidl_runtime_c/visibility_control.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__type_support.h"
#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__struct.h"
#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__functions.h"

static void * vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__request__create_ros_message(void)
{
  return vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__create();
}

static void vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__request__destroy_ros_message(void * raw_ros_message)
{
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request * ros_message = (vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request *)raw_ros_message;
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__request__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__request__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Request);

int8_t
_register_msg_type__srv__get_repulsive_force__request(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__request__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__get_repulsive_force__request",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__request__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__get_repulsive_force__request",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__request__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__get_repulsive_force__request",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__request__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__get_repulsive_force__request",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Request),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__get_repulsive_force__request",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
// already included above
// #include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__type_support.h"
// already included above
// #include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__struct.h"
// already included above
// #include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__functions.h"

static void * vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__response__create_ros_message(void)
{
  return vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__create();
}

static void vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__response__destroy_ros_message(void * raw_ros_message)
{
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response * ros_message = (vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response *)raw_ros_message;
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__response__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__response__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Response);

int8_t
_register_msg_type__srv__get_repulsive_force__response(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__response__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__srv__get_repulsive_force__response",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__response__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__srv__get_repulsive_force__response",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__response__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__srv__get_repulsive_force__response",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&vacuum_cleaner_robot_custom_interfaces__srv__get_repulsive_force__response__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__srv__get_repulsive_force__response",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce_Response),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__srv__get_repulsive_force__response",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

ROSIDL_GENERATOR_C_IMPORT
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce)();

int8_t
_register_srv_type__srv__get_repulsive_force(PyObject * pymodule)
{
  int8_t err;
  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, vacuum_cleaner_robot_custom_interfaces, srv, GetRepulsiveForce)(),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_srv__srv__get_repulsive_force",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

PyMODINIT_FUNC
PyInit_vacuum_cleaner_robot_custom_interfaces_s__rosidl_typesupport_c(void)
{
  PyObject * pymodule = NULL;
  pymodule = PyModule_Create(&vacuum_cleaner_robot_custom_interfaces__module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;

  err = _register_msg_type__srv__get_repulsive_force__request(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__srv__get_repulsive_force__response(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_srv_type__srv__get_repulsive_force(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}
