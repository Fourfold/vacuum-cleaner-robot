// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vacuum_cleaner_robot_custom_interfaces:srv/GetRepulsiveForce.idl
// generated code does not contain a copyright notice
#include "vacuum_cleaner_robot_custom_interfaces/srv/detail/get_repulsive_force__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__init(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__fini(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__are_equal(const vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request * lhs, const vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__copy(
  const vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request * input,
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request *
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request * msg = (vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request *)allocator.allocate(sizeof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request));
  bool success = vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__destroy(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence__init(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request * data = NULL;

  if (size) {
    data = (vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request *)allocator.zero_allocate(size, sizeof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence__fini(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence *
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence * array = (vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence *)allocator.allocate(sizeof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence__destroy(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence__are_equal(const vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence * lhs, const vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence__copy(
  const vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence * input,
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request * data =
      (vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `repulsive_force`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__init(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response * msg)
{
  if (!msg) {
    return false;
  }
  // repulsive_force
  if (!geometry_msgs__msg__Vector3__init(&msg->repulsive_force)) {
    vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__fini(msg);
    return false;
  }
  return true;
}

void
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__fini(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response * msg)
{
  if (!msg) {
    return;
  }
  // repulsive_force
  geometry_msgs__msg__Vector3__fini(&msg->repulsive_force);
}

bool
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__are_equal(const vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response * lhs, const vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // repulsive_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->repulsive_force), &(rhs->repulsive_force)))
  {
    return false;
  }
  return true;
}

bool
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__copy(
  const vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response * input,
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // repulsive_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->repulsive_force), &(output->repulsive_force)))
  {
    return false;
  }
  return true;
}

vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response *
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response * msg = (vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response *)allocator.allocate(sizeof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response));
  bool success = vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__destroy(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence__init(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response * data = NULL;

  if (size) {
    data = (vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response *)allocator.zero_allocate(size, sizeof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence__fini(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence *
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence * array = (vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence *)allocator.allocate(sizeof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence__destroy(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence__are_equal(const vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence * lhs, const vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence__copy(
  const vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence * input,
  vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response * data =
      (vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vacuum_cleaner_robot_custom_interfaces__srv__GetRepulsiveForce_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
