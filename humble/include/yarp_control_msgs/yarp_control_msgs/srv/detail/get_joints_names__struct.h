// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yarp_control_msgs:srv/GetJointsNames.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__SRV__DETAIL__GET_JOINTS_NAMES__STRUCT_H_
#define YARP_CONTROL_MSGS__SRV__DETAIL__GET_JOINTS_NAMES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_indexes'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetJointsNames in the package yarp_control_msgs.
typedef struct yarp_control_msgs__srv__GetJointsNames_Request
{
  rosidl_runtime_c__int32__Sequence joint_indexes;
} yarp_control_msgs__srv__GetJointsNames_Request;

// Struct for a sequence of yarp_control_msgs__srv__GetJointsNames_Request.
typedef struct yarp_control_msgs__srv__GetJointsNames_Request__Sequence
{
  yarp_control_msgs__srv__GetJointsNames_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yarp_control_msgs__srv__GetJointsNames_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'names'
// Member 'response'
// Member 'opt_descr'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetJointsNames in the package yarp_control_msgs.
typedef struct yarp_control_msgs__srv__GetJointsNames_Response
{
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__String response;
  rosidl_runtime_c__String opt_descr;
} yarp_control_msgs__srv__GetJointsNames_Response;

// Struct for a sequence of yarp_control_msgs__srv__GetJointsNames_Response.
typedef struct yarp_control_msgs__srv__GetJointsNames_Response__Sequence
{
  yarp_control_msgs__srv__GetJointsNames_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yarp_control_msgs__srv__GetJointsNames_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YARP_CONTROL_MSGS__SRV__DETAIL__GET_JOINTS_NAMES__STRUCT_H_
