// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yarp_control_msgs:msg/PositionDirect.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__MSG__DETAIL__POSITION_DIRECT__STRUCT_H_
#define YARP_CONTROL_MSGS__MSG__DETAIL__POSITION_DIRECT__STRUCT_H_

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
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PositionDirect in the package yarp_control_msgs.
/**
  * Message used to send position direct commands to one or multiple joints
  * names: it can contain the names of the joints to send the position command to. If left empty, a position value for all the joints available must be provided
  * positions: it must contain a position value for each name listed in the names vector or for every joint if the names vector is left empty
 */
typedef struct yarp_control_msgs__msg__PositionDirect
{
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__double__Sequence positions;
} yarp_control_msgs__msg__PositionDirect;

// Struct for a sequence of yarp_control_msgs__msg__PositionDirect.
typedef struct yarp_control_msgs__msg__PositionDirect__Sequence
{
  yarp_control_msgs__msg__PositionDirect * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yarp_control_msgs__msg__PositionDirect__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YARP_CONTROL_MSGS__MSG__DETAIL__POSITION_DIRECT__STRUCT_H_
