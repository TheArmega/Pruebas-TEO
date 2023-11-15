// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yarp_control_msgs:msg/PositionDirect.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yarp_control_msgs/msg/detail/position_direct__rosidl_typesupport_introspection_c.h"
#include "yarp_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yarp_control_msgs/msg/detail/position_direct__functions.h"
#include "yarp_control_msgs/msg/detail/position_direct__struct.h"


// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__PositionDirect_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yarp_control_msgs__msg__PositionDirect__init(message_memory);
}

void yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__PositionDirect_fini_function(void * message_memory)
{
  yarp_control_msgs__msg__PositionDirect__fini(message_memory);
}

size_t yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__size_function__PositionDirect__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__get_const_function__PositionDirect__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__get_function__PositionDirect__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__fetch_function__PositionDirect__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__get_const_function__PositionDirect__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__assign_function__PositionDirect__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__get_function__PositionDirect__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__resize_function__PositionDirect__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__size_function__PositionDirect__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__get_const_function__PositionDirect__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__get_function__PositionDirect__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__fetch_function__PositionDirect__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__get_const_function__PositionDirect__positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__assign_function__PositionDirect__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__get_function__PositionDirect__positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__resize_function__PositionDirect__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__PositionDirect_message_member_array[2] = {
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yarp_control_msgs__msg__PositionDirect, names),  // bytes offset in struct
    NULL,  // default value
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__size_function__PositionDirect__names,  // size() function pointer
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__get_const_function__PositionDirect__names,  // get_const(index) function pointer
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__get_function__PositionDirect__names,  // get(index) function pointer
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__fetch_function__PositionDirect__names,  // fetch(index, &value) function pointer
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__assign_function__PositionDirect__names,  // assign(index, value) function pointer
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__resize_function__PositionDirect__names  // resize(index) function pointer
  },
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yarp_control_msgs__msg__PositionDirect, positions),  // bytes offset in struct
    NULL,  // default value
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__size_function__PositionDirect__positions,  // size() function pointer
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__get_const_function__PositionDirect__positions,  // get_const(index) function pointer
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__get_function__PositionDirect__positions,  // get(index) function pointer
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__fetch_function__PositionDirect__positions,  // fetch(index, &value) function pointer
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__assign_function__PositionDirect__positions,  // assign(index, value) function pointer
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__resize_function__PositionDirect__positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__PositionDirect_message_members = {
  "yarp_control_msgs__msg",  // message namespace
  "PositionDirect",  // message name
  2,  // number of fields
  sizeof(yarp_control_msgs__msg__PositionDirect),
  yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__PositionDirect_message_member_array,  // message members
  yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__PositionDirect_init_function,  // function to initialize message memory (memory has to be allocated)
  yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__PositionDirect_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__PositionDirect_message_type_support_handle = {
  0,
  &yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__PositionDirect_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yarp_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yarp_control_msgs, msg, PositionDirect)() {
  if (!yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__PositionDirect_message_type_support_handle.typesupport_identifier) {
    yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__PositionDirect_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yarp_control_msgs__msg__PositionDirect__rosidl_typesupport_introspection_c__PositionDirect_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
