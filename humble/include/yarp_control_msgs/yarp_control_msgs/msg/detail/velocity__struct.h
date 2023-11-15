// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yarp_control_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__MSG__DETAIL__VELOCITY__STRUCT_H_
#define YARP_CONTROL_MSGS__MSG__DETAIL__VELOCITY__STRUCT_H_

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
// Member 'velocities'
// Member 'ref_accelerations'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Velocity in the package yarp_control_msgs.
/**
  * Message used to send velocity commands to one or multiple joints
  * names: it can contain the names of the joints to send the velocity command to. If left empty, a velocity value for all the joints available must be provided
  * velocities: it must contain a velocity value for each name listed in the names vector or for every joint if the names vector is left empty
  * ref_accelerations: it can contain the acceleration value for each velocities vector entry. It must contain the same number of elements as the velocity array or be empty. If empty the already set acceleration values will to be used
 */
typedef struct yarp_control_msgs__msg__Velocity
{
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__double__Sequence velocities;
  rosidl_runtime_c__double__Sequence ref_accelerations;
} yarp_control_msgs__msg__Velocity;

// Struct for a sequence of yarp_control_msgs__msg__Velocity.
typedef struct yarp_control_msgs__msg__Velocity__Sequence
{
  yarp_control_msgs__msg__Velocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yarp_control_msgs__msg__Velocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YARP_CONTROL_MSGS__MSG__DETAIL__VELOCITY__STRUCT_H_
