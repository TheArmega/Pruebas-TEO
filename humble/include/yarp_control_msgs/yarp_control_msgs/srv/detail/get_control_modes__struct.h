// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yarp_control_msgs:srv/GetControlModes.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__SRV__DETAIL__GET_CONTROL_MODES__STRUCT_H_
#define YARP_CONTROL_MSGS__SRV__DETAIL__GET_CONTROL_MODES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetControlModes in the package yarp_control_msgs.
typedef struct yarp_control_msgs__srv__GetControlModes_Request
{
  rosidl_runtime_c__String__Sequence names;
} yarp_control_msgs__srv__GetControlModes_Request;

// Struct for a sequence of yarp_control_msgs__srv__GetControlModes_Request.
typedef struct yarp_control_msgs__srv__GetControlModes_Request__Sequence
{
  yarp_control_msgs__srv__GetControlModes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yarp_control_msgs__srv__GetControlModes_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'modes'
// Member 'response'
// Member 'opt_descr'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetControlModes in the package yarp_control_msgs.
typedef struct yarp_control_msgs__srv__GetControlModes_Response
{
  rosidl_runtime_c__String__Sequence modes;
  rosidl_runtime_c__String response;
  rosidl_runtime_c__String opt_descr;
} yarp_control_msgs__srv__GetControlModes_Response;

// Struct for a sequence of yarp_control_msgs__srv__GetControlModes_Response.
typedef struct yarp_control_msgs__srv__GetControlModes_Response__Sequence
{
  yarp_control_msgs__srv__GetControlModes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yarp_control_msgs__srv__GetControlModes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YARP_CONTROL_MSGS__SRV__DETAIL__GET_CONTROL_MODES__STRUCT_H_
