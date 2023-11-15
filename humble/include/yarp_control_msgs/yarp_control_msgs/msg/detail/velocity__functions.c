// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yarp_control_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice
#include "yarp_control_msgs/msg/detail/velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `velocities`
// Member `ref_accelerations`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
yarp_control_msgs__msg__Velocity__init(yarp_control_msgs__msg__Velocity * msg)
{
  if (!msg) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->names, 0)) {
    yarp_control_msgs__msg__Velocity__fini(msg);
    return false;
  }
  // velocities
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocities, 0)) {
    yarp_control_msgs__msg__Velocity__fini(msg);
    return false;
  }
  // ref_accelerations
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ref_accelerations, 0)) {
    yarp_control_msgs__msg__Velocity__fini(msg);
    return false;
  }
  return true;
}

void
yarp_control_msgs__msg__Velocity__fini(yarp_control_msgs__msg__Velocity * msg)
{
  if (!msg) {
    return;
  }
  // names
  rosidl_runtime_c__String__Sequence__fini(&msg->names);
  // velocities
  rosidl_runtime_c__double__Sequence__fini(&msg->velocities);
  // ref_accelerations
  rosidl_runtime_c__double__Sequence__fini(&msg->ref_accelerations);
}

bool
yarp_control_msgs__msg__Velocity__are_equal(const yarp_control_msgs__msg__Velocity * lhs, const yarp_control_msgs__msg__Velocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->names), &(rhs->names)))
  {
    return false;
  }
  // velocities
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->velocities), &(rhs->velocities)))
  {
    return false;
  }
  // ref_accelerations
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ref_accelerations), &(rhs->ref_accelerations)))
  {
    return false;
  }
  return true;
}

bool
yarp_control_msgs__msg__Velocity__copy(
  const yarp_control_msgs__msg__Velocity * input,
  yarp_control_msgs__msg__Velocity * output)
{
  if (!input || !output) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->names), &(output->names)))
  {
    return false;
  }
  // velocities
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->velocities), &(output->velocities)))
  {
    return false;
  }
  // ref_accelerations
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ref_accelerations), &(output->ref_accelerations)))
  {
    return false;
  }
  return true;
}

yarp_control_msgs__msg__Velocity *
yarp_control_msgs__msg__Velocity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yarp_control_msgs__msg__Velocity * msg = (yarp_control_msgs__msg__Velocity *)allocator.allocate(sizeof(yarp_control_msgs__msg__Velocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yarp_control_msgs__msg__Velocity));
  bool success = yarp_control_msgs__msg__Velocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yarp_control_msgs__msg__Velocity__destroy(yarp_control_msgs__msg__Velocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yarp_control_msgs__msg__Velocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yarp_control_msgs__msg__Velocity__Sequence__init(yarp_control_msgs__msg__Velocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yarp_control_msgs__msg__Velocity * data = NULL;

  if (size) {
    data = (yarp_control_msgs__msg__Velocity *)allocator.zero_allocate(size, sizeof(yarp_control_msgs__msg__Velocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yarp_control_msgs__msg__Velocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yarp_control_msgs__msg__Velocity__fini(&data[i - 1]);
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
yarp_control_msgs__msg__Velocity__Sequence__fini(yarp_control_msgs__msg__Velocity__Sequence * array)
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
      yarp_control_msgs__msg__Velocity__fini(&array->data[i]);
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

yarp_control_msgs__msg__Velocity__Sequence *
yarp_control_msgs__msg__Velocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yarp_control_msgs__msg__Velocity__Sequence * array = (yarp_control_msgs__msg__Velocity__Sequence *)allocator.allocate(sizeof(yarp_control_msgs__msg__Velocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yarp_control_msgs__msg__Velocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yarp_control_msgs__msg__Velocity__Sequence__destroy(yarp_control_msgs__msg__Velocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yarp_control_msgs__msg__Velocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yarp_control_msgs__msg__Velocity__Sequence__are_equal(const yarp_control_msgs__msg__Velocity__Sequence * lhs, const yarp_control_msgs__msg__Velocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yarp_control_msgs__msg__Velocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yarp_control_msgs__msg__Velocity__Sequence__copy(
  const yarp_control_msgs__msg__Velocity__Sequence * input,
  yarp_control_msgs__msg__Velocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yarp_control_msgs__msg__Velocity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yarp_control_msgs__msg__Velocity * data =
      (yarp_control_msgs__msg__Velocity *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yarp_control_msgs__msg__Velocity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yarp_control_msgs__msg__Velocity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yarp_control_msgs__msg__Velocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
