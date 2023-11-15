// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from yarp_control_msgs:msg/PositionDirect.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__MSG__DETAIL__POSITION_DIRECT__FUNCTIONS_H_
#define YARP_CONTROL_MSGS__MSG__DETAIL__POSITION_DIRECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "yarp_control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "yarp_control_msgs/msg/detail/position_direct__struct.h"

/// Initialize msg/PositionDirect message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * yarp_control_msgs__msg__PositionDirect
 * )) before or use
 * yarp_control_msgs__msg__PositionDirect__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__msg__PositionDirect__init(yarp_control_msgs__msg__PositionDirect * msg);

/// Finalize msg/PositionDirect message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
void
yarp_control_msgs__msg__PositionDirect__fini(yarp_control_msgs__msg__PositionDirect * msg);

/// Create msg/PositionDirect message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * yarp_control_msgs__msg__PositionDirect__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
yarp_control_msgs__msg__PositionDirect *
yarp_control_msgs__msg__PositionDirect__create();

/// Destroy msg/PositionDirect message.
/**
 * It calls
 * yarp_control_msgs__msg__PositionDirect__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
void
yarp_control_msgs__msg__PositionDirect__destroy(yarp_control_msgs__msg__PositionDirect * msg);

/// Check for msg/PositionDirect message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__msg__PositionDirect__are_equal(const yarp_control_msgs__msg__PositionDirect * lhs, const yarp_control_msgs__msg__PositionDirect * rhs);

/// Copy a msg/PositionDirect message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__msg__PositionDirect__copy(
  const yarp_control_msgs__msg__PositionDirect * input,
  yarp_control_msgs__msg__PositionDirect * output);

/// Initialize array of msg/PositionDirect messages.
/**
 * It allocates the memory for the number of elements and calls
 * yarp_control_msgs__msg__PositionDirect__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__msg__PositionDirect__Sequence__init(yarp_control_msgs__msg__PositionDirect__Sequence * array, size_t size);

/// Finalize array of msg/PositionDirect messages.
/**
 * It calls
 * yarp_control_msgs__msg__PositionDirect__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
void
yarp_control_msgs__msg__PositionDirect__Sequence__fini(yarp_control_msgs__msg__PositionDirect__Sequence * array);

/// Create array of msg/PositionDirect messages.
/**
 * It allocates the memory for the array and calls
 * yarp_control_msgs__msg__PositionDirect__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
yarp_control_msgs__msg__PositionDirect__Sequence *
yarp_control_msgs__msg__PositionDirect__Sequence__create(size_t size);

/// Destroy array of msg/PositionDirect messages.
/**
 * It calls
 * yarp_control_msgs__msg__PositionDirect__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
void
yarp_control_msgs__msg__PositionDirect__Sequence__destroy(yarp_control_msgs__msg__PositionDirect__Sequence * array);

/// Check for msg/PositionDirect message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__msg__PositionDirect__Sequence__are_equal(const yarp_control_msgs__msg__PositionDirect__Sequence * lhs, const yarp_control_msgs__msg__PositionDirect__Sequence * rhs);

/// Copy an array of msg/PositionDirect messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__msg__PositionDirect__Sequence__copy(
  const yarp_control_msgs__msg__PositionDirect__Sequence * input,
  yarp_control_msgs__msg__PositionDirect__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // YARP_CONTROL_MSGS__MSG__DETAIL__POSITION_DIRECT__FUNCTIONS_H_
