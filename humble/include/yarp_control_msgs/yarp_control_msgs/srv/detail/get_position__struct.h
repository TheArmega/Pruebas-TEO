// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yarp_control_msgs:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__SRV__DETAIL__GET_POSITION__STRUCT_H_
#define YARP_CONTROL_MSGS__SRV__DETAIL__GET_POSITION__STRUCT_H_

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

/// Struct defined in srv/GetPosition in the package yarp_control_msgs.
typedef struct yarp_control_msgs__srv__GetPosition_Request
{
  rosidl_runtime_c__String__Sequence names;
} yarp_control_msgs__srv__GetPosition_Request;

// Struct for a sequence of yarp_control_msgs__srv__GetPosition_Request.
typedef struct yarp_control_msgs__srv__GetPosition_Request__Sequence
{
  yarp_control_msgs__srv__GetPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yarp_control_msgs__srv__GetPosition_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'response'
// Member 'opt_descr'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetPosition in the package yarp_control_msgs.
typedef struct yarp_control_msgs__srv__GetPosition_Response
{
  rosidl_runtime_c__double__Sequence positions;
  rosidl_runtime_c__String response;
  rosidl_runtime_c__String opt_descr;
} yarp_control_msgs__srv__GetPosition_Response;

// Struct for a sequence of yarp_control_msgs__srv__GetPosition_Response.
typedef struct yarp_control_msgs__srv__GetPosition_Response__Sequence
{
  yarp_control_msgs__srv__GetPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yarp_control_msgs__srv__GetPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YARP_CONTROL_MSGS__SRV__DETAIL__GET_POSITION__STRUCT_H_
