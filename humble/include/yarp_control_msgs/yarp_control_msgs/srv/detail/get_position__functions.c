// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yarp_control_msgs:srv/GetPosition.idl
// generated code does not contain a copyright notice
#include "yarp_control_msgs/srv/detail/get_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"

bool
yarp_control_msgs__srv__GetPosition_Request__init(yarp_control_msgs__srv__GetPosition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->names, 0)) {
    yarp_control_msgs__srv__GetPosition_Request__fini(msg);
    return false;
  }
  return true;
}

void
yarp_control_msgs__srv__GetPosition_Request__fini(yarp_control_msgs__srv__GetPosition_Request * msg)
{
  if (!msg) {
    return;
  }
  // names
  rosidl_runtime_c__String__Sequence__fini(&msg->names);
}

bool
yarp_control_msgs__srv__GetPosition_Request__are_equal(const yarp_control_msgs__srv__GetPosition_Request * lhs, const yarp_control_msgs__srv__GetPosition_Request * rhs)
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
  return true;
}

bool
yarp_control_msgs__srv__GetPosition_Request__copy(
  const yarp_control_msgs__srv__GetPosition_Request * input,
  yarp_control_msgs__srv__GetPosition_Request * output)
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
  return true;
}

yarp_control_msgs__srv__GetPosition_Request *
yarp_control_msgs__srv__GetPosition_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yarp_control_msgs__srv__GetPosition_Request * msg = (yarp_control_msgs__srv__GetPosition_Request *)allocator.allocate(sizeof(yarp_control_msgs__srv__GetPosition_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yarp_control_msgs__srv__GetPosition_Request));
  bool success = yarp_control_msgs__srv__GetPosition_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yarp_control_msgs__srv__GetPosition_Request__destroy(yarp_control_msgs__srv__GetPosition_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yarp_control_msgs__srv__GetPosition_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yarp_control_msgs__srv__GetPosition_Request__Sequence__init(yarp_control_msgs__srv__GetPosition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yarp_control_msgs__srv__GetPosition_Request * data = NULL;

  if (size) {
    data = (yarp_control_msgs__srv__GetPosition_Request *)allocator.zero_allocate(size, sizeof(yarp_control_msgs__srv__GetPosition_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yarp_control_msgs__srv__GetPosition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yarp_control_msgs__srv__GetPosition_Request__fini(&data[i - 1]);
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
yarp_control_msgs__srv__GetPosition_Request__Sequence__fini(yarp_control_msgs__srv__GetPosition_Request__Sequence * array)
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
      yarp_control_msgs__srv__GetPosition_Request__fini(&array->data[i]);
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

yarp_control_msgs__srv__GetPosition_Request__Sequence *
yarp_control_msgs__srv__GetPosition_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yarp_control_msgs__srv__GetPosition_Request__Sequence * array = (yarp_control_msgs__srv__GetPosition_Request__Sequence *)allocator.allocate(sizeof(yarp_control_msgs__srv__GetPosition_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yarp_control_msgs__srv__GetPosition_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yarp_control_msgs__srv__GetPosition_Request__Sequence__destroy(yarp_control_msgs__srv__GetPosition_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yarp_control_msgs__srv__GetPosition_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yarp_control_msgs__srv__GetPosition_Request__Sequence__are_equal(const yarp_control_msgs__srv__GetPosition_Request__Sequence * lhs, const yarp_control_msgs__srv__GetPosition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yarp_control_msgs__srv__GetPosition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yarp_control_msgs__srv__GetPosition_Request__Sequence__copy(
  const yarp_control_msgs__srv__GetPosition_Request__Sequence * input,
  yarp_control_msgs__srv__GetPosition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yarp_control_msgs__srv__GetPosition_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yarp_control_msgs__srv__GetPosition_Request * data =
      (yarp_control_msgs__srv__GetPosition_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yarp_control_msgs__srv__GetPosition_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yarp_control_msgs__srv__GetPosition_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yarp_control_msgs__srv__GetPosition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `response`
// Member `opt_descr`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
yarp_control_msgs__srv__GetPosition_Response__init(yarp_control_msgs__srv__GetPosition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->positions, 0)) {
    yarp_control_msgs__srv__GetPosition_Response__fini(msg);
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__init(&msg->response)) {
    yarp_control_msgs__srv__GetPosition_Response__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->response, "NOT_SPECIFIED");
    if (!success) {
      goto abort_init_0;
    }
  }
  // opt_descr
  if (!rosidl_runtime_c__String__init(&msg->opt_descr)) {
    yarp_control_msgs__srv__GetPosition_Response__fini(msg);
    return false;
  }
  return true;
abort_init_0:
  return false;
}

void
yarp_control_msgs__srv__GetPosition_Response__fini(yarp_control_msgs__srv__GetPosition_Response * msg)
{
  if (!msg) {
    return;
  }
  // positions
  rosidl_runtime_c__double__Sequence__fini(&msg->positions);
  // response
  rosidl_runtime_c__String__fini(&msg->response);
  // opt_descr
  rosidl_runtime_c__String__fini(&msg->opt_descr);
}

bool
yarp_control_msgs__srv__GetPosition_Response__are_equal(const yarp_control_msgs__srv__GetPosition_Response * lhs, const yarp_control_msgs__srv__GetPosition_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  // opt_descr
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->opt_descr), &(rhs->opt_descr)))
  {
    return false;
  }
  return true;
}

bool
yarp_control_msgs__srv__GetPosition_Response__copy(
  const yarp_control_msgs__srv__GetPosition_Response * input,
  yarp_control_msgs__srv__GetPosition_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  // opt_descr
  if (!rosidl_runtime_c__String__copy(
      &(input->opt_descr), &(output->opt_descr)))
  {
    return false;
  }
  return true;
}

yarp_control_msgs__srv__GetPosition_Response *
yarp_control_msgs__srv__GetPosition_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yarp_control_msgs__srv__GetPosition_Response * msg = (yarp_control_msgs__srv__GetPosition_Response *)allocator.allocate(sizeof(yarp_control_msgs__srv__GetPosition_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yarp_control_msgs__srv__GetPosition_Response));
  bool success = yarp_control_msgs__srv__GetPosition_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yarp_control_msgs__srv__GetPosition_Response__destroy(yarp_control_msgs__srv__GetPosition_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yarp_control_msgs__srv__GetPosition_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yarp_control_msgs__srv__GetPosition_Response__Sequence__init(yarp_control_msgs__srv__GetPosition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yarp_control_msgs__srv__GetPosition_Response * data = NULL;

  if (size) {
    data = (yarp_control_msgs__srv__GetPosition_Response *)allocator.zero_allocate(size, sizeof(yarp_control_msgs__srv__GetPosition_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yarp_control_msgs__srv__GetPosition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yarp_control_msgs__srv__GetPosition_Response__fini(&data[i - 1]);
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
yarp_control_msgs__srv__GetPosition_Response__Sequence__fini(yarp_control_msgs__srv__GetPosition_Response__Sequence * array)
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
      yarp_control_msgs__srv__GetPosition_Response__fini(&array->data[i]);
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

yarp_control_msgs__srv__GetPosition_Response__Sequence *
yarp_control_msgs__srv__GetPosition_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yarp_control_msgs__srv__GetPosition_Response__Sequence * array = (yarp_control_msgs__srv__GetPosition_Response__Sequence *)allocator.allocate(sizeof(yarp_control_msgs__srv__GetPosition_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yarp_control_msgs__srv__GetPosition_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yarp_control_msgs__srv__GetPosition_Response__Sequence__destroy(yarp_control_msgs__srv__GetPosition_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yarp_control_msgs__srv__GetPosition_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yarp_control_msgs__srv__GetPosition_Response__Sequence__are_equal(const yarp_control_msgs__srv__GetPosition_Response__Sequence * lhs, const yarp_control_msgs__srv__GetPosition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yarp_control_msgs__srv__GetPosition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yarp_control_msgs__srv__GetPosition_Response__Sequence__copy(
  const yarp_control_msgs__srv__GetPosition_Response__Sequence * input,
  yarp_control_msgs__srv__GetPosition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yarp_control_msgs__srv__GetPosition_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yarp_control_msgs__srv__GetPosition_Response * data =
      (yarp_control_msgs__srv__GetPosition_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yarp_control_msgs__srv__GetPosition_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yarp_control_msgs__srv__GetPosition_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yarp_control_msgs__srv__GetPosition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
