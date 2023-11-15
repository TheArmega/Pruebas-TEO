// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yarp_control_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__MSG__DETAIL__POSITION__STRUCT_H_
#define YARP_CONTROL_MSGS__MSG__DETAIL__POSITION__STRUCT_H_

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
// Member 'ref_velocities'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Position in the package yarp_control_msgs.
/**
  * Message used to send position commands to one or multiple joints
  * names: it can contain the names of the joints to send the position command to. If left empty, a position value for all the joints available must be provided
  * positions: it must contain a position value for each name listed in the names vector or for every joint if the names vector is left empty
  * ref_velocities: it can contain the velocity value for a specific position command. It must contain the same number of entries as the positions array or be empty. If empty the already set speed values will to be used
 */
typedef struct yarp_control_msgs__msg__Position
{
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__double__Sequence positions;
  rosidl_runtime_c__double__Sequence ref_velocities;
} yarp_control_msgs__msg__Position;

// Struct for a sequence of yarp_control_msgs__msg__Position.
typedef struct yarp_control_msgs__msg__Position__Sequence
{
  yarp_control_msgs__msg__Position * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yarp_control_msgs__msg__Position__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YARP_CONTROL_MSGS__MSG__DETAIL__POSITION__STRUCT_H_
