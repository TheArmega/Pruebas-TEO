// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from yarp_control_msgs:srv/GetControlModes.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__SRV__DETAIL__GET_CONTROL_MODES__FUNCTIONS_H_
#define YARP_CONTROL_MSGS__SRV__DETAIL__GET_CONTROL_MODES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "yarp_control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "yarp_control_msgs/srv/detail/get_control_modes__struct.h"

/// Initialize srv/GetControlModes message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * yarp_control_msgs__srv__GetControlModes_Request
 * )) before or use
 * yarp_control_msgs__srv__GetControlModes_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__srv__GetControlModes_Request__init(yarp_control_msgs__srv__GetControlModes_Request * msg);

/// Finalize srv/GetControlModes message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
void
yarp_control_msgs__srv__GetControlModes_Request__fini(yarp_control_msgs__srv__GetControlModes_Request * msg);

/// Create srv/GetControlModes message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * yarp_control_msgs__srv__GetControlModes_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
yarp_control_msgs__srv__GetControlModes_Request *
yarp_control_msgs__srv__GetControlModes_Request__create();

/// Destroy srv/GetControlModes message.
/**
 * It calls
 * yarp_control_msgs__srv__GetControlModes_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
void
yarp_control_msgs__srv__GetControlModes_Request__destroy(yarp_control_msgs__srv__GetControlModes_Request * msg);

/// Check for srv/GetControlModes message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__srv__GetControlModes_Request__are_equal(const yarp_control_msgs__srv__GetControlModes_Request * lhs, const yarp_control_msgs__srv__GetControlModes_Request * rhs);

/// Copy a srv/GetControlModes message.
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
yarp_control_msgs__srv__GetControlModes_Request__copy(
  const yarp_control_msgs__srv__GetControlModes_Request * input,
  yarp_control_msgs__srv__GetControlModes_Request * output);

/// Initialize array of srv/GetControlModes messages.
/**
 * It allocates the memory for the number of elements and calls
 * yarp_control_msgs__srv__GetControlModes_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__srv__GetControlModes_Request__Sequence__init(yarp_control_msgs__srv__GetControlModes_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetControlModes messages.
/**
 * It calls
 * yarp_control_msgs__srv__GetControlModes_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
void
yarp_control_msgs__srv__GetControlModes_Request__Sequence__fini(yarp_control_msgs__srv__GetControlModes_Request__Sequence * array);

/// Create array of srv/GetControlModes messages.
/**
 * It allocates the memory for the array and calls
 * yarp_control_msgs__srv__GetControlModes_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
yarp_control_msgs__srv__GetControlModes_Request__Sequence *
yarp_control_msgs__srv__GetControlModes_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetControlModes messages.
/**
 * It calls
 * yarp_control_msgs__srv__GetControlModes_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
void
yarp_control_msgs__srv__GetControlModes_Request__Sequence__destroy(yarp_control_msgs__srv__GetControlModes_Request__Sequence * array);

/// Check for srv/GetControlModes message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__srv__GetControlModes_Request__Sequence__are_equal(const yarp_control_msgs__srv__GetControlModes_Request__Sequence * lhs, const yarp_control_msgs__srv__GetControlModes_Request__Sequence * rhs);

/// Copy an array of srv/GetControlModes messages.
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
yarp_control_msgs__srv__GetControlModes_Request__Sequence__copy(
  const yarp_control_msgs__srv__GetControlModes_Request__Sequence * input,
  yarp_control_msgs__srv__GetControlModes_Request__Sequence * output);

/// Initialize srv/GetControlModes message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * yarp_control_msgs__srv__GetControlModes_Response
 * )) before or use
 * yarp_control_msgs__srv__GetControlModes_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__srv__GetControlModes_Response__init(yarp_control_msgs__srv__GetControlModes_Response * msg);

/// Finalize srv/GetControlModes message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
void
yarp_control_msgs__srv__GetControlModes_Response__fini(yarp_control_msgs__srv__GetControlModes_Response * msg);

/// Create srv/GetControlModes message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * yarp_control_msgs__srv__GetControlModes_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
yarp_control_msgs__srv__GetControlModes_Response *
yarp_control_msgs__srv__GetControlModes_Response__create();

/// Destroy srv/GetControlModes message.
/**
 * It calls
 * yarp_control_msgs__srv__GetControlModes_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
void
yarp_control_msgs__srv__GetControlModes_Response__destroy(yarp_control_msgs__srv__GetControlModes_Response * msg);

/// Check for srv/GetControlModes message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__srv__GetControlModes_Response__are_equal(const yarp_control_msgs__srv__GetControlModes_Response * lhs, const yarp_control_msgs__srv__GetControlModes_Response * rhs);

/// Copy a srv/GetControlModes message.
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
yarp_control_msgs__srv__GetControlModes_Response__copy(
  const yarp_control_msgs__srv__GetControlModes_Response * input,
  yarp_control_msgs__srv__GetControlModes_Response * output);

/// Initialize array of srv/GetControlModes messages.
/**
 * It allocates the memory for the number of elements and calls
 * yarp_control_msgs__srv__GetControlModes_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__srv__GetControlModes_Response__Sequence__init(yarp_control_msgs__srv__GetControlModes_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetControlModes messages.
/**
 * It calls
 * yarp_control_msgs__srv__GetControlModes_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
void
yarp_control_msgs__srv__GetControlModes_Response__Sequence__fini(yarp_control_msgs__srv__GetControlModes_Response__Sequence * array);

/// Create array of srv/GetControlModes messages.
/**
 * It allocates the memory for the array and calls
 * yarp_control_msgs__srv__GetControlModes_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
yarp_control_msgs__srv__GetControlModes_Response__Sequence *
yarp_control_msgs__srv__GetControlModes_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetControlModes messages.
/**
 * It calls
 * yarp_control_msgs__srv__GetControlModes_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
void
yarp_control_msgs__srv__GetControlModes_Response__Sequence__destroy(yarp_control_msgs__srv__GetControlModes_Response__Sequence * array);

/// Check for srv/GetControlModes message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_yarp_control_msgs
bool
yarp_control_msgs__srv__GetControlModes_Response__Sequence__are_equal(const yarp_control_msgs__srv__GetControlModes_Response__Sequence * lhs, const yarp_control_msgs__srv__GetControlModes_Response__Sequence * rhs);

/// Copy an array of srv/GetControlModes messages.
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
yarp_control_msgs__srv__GetControlModes_Response__Sequence__copy(
  const yarp_control_msgs__srv__GetControlModes_Response__Sequence * input,
  yarp_control_msgs__srv__GetControlModes_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // YARP_CONTROL_MSGS__SRV__DETAIL__GET_CONTROL_MODES__FUNCTIONS_H_
