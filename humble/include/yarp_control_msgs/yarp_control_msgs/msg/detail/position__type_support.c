// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yarp_control_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yarp_control_msgs/msg/detail/position__rosidl_typesupport_introspection_c.h"
#include "yarp_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yarp_control_msgs/msg/detail/position__functions.h"
#include "yarp_control_msgs/msg/detail/position__struct.h"


// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `positions`
// Member `ref_velocities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yarp_control_msgs__msg__Position__init(message_memory);
}

void yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_fini_function(void * message_memory)
{
  yarp_control_msgs__msg__Position__fini(message_memory);
}

size_t yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__size_function__Position__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_const_function__Position__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_function__Position__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__fetch_function__Position__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_const_function__Position__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__assign_function__Position__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_function__Position__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__resize_function__Position__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__size_function__Position__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_const_function__Position__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_function__Position__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__fetch_function__Position__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_const_function__Position__positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__assign_function__Position__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_function__Position__positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__resize_function__Position__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__size_function__Position__ref_velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_const_function__Position__ref_velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_function__Position__ref_velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__fetch_function__Position__ref_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_const_function__Position__ref_velocities(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__assign_function__Position__ref_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_function__Position__ref_velocities(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__resize_function__Position__ref_velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_member_array[3] = {
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yarp_control_msgs__msg__Position, names),  // bytes offset in struct
    NULL,  // default value
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__size_function__Position__names,  // size() function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_const_function__Position__names,  // get_const(index) function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_function__Position__names,  // get(index) function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__fetch_function__Position__names,  // fetch(index, &value) function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__assign_function__Position__names,  // assign(index, value) function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__resize_function__Position__names  // resize(index) function pointer
  },
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yarp_control_msgs__msg__Position, positions),  // bytes offset in struct
    NULL,  // default value
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__size_function__Position__positions,  // size() function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_const_function__Position__positions,  // get_const(index) function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_function__Position__positions,  // get(index) function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__fetch_function__Position__positions,  // fetch(index, &value) function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__assign_function__Position__positions,  // assign(index, value) function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__resize_function__Position__positions  // resize(index) function pointer
  },
  {
    "ref_velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yarp_control_msgs__msg__Position, ref_velocities),  // bytes offset in struct
    NULL,  // default value
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__size_function__Position__ref_velocities,  // size() function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_const_function__Position__ref_velocities,  // get_const(index) function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__get_function__Position__ref_velocities,  // get(index) function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__fetch_function__Position__ref_velocities,  // fetch(index, &value) function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__assign_function__Position__ref_velocities,  // assign(index, value) function pointer
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__resize_function__Position__ref_velocities  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_members = {
  "yarp_control_msgs__msg",  // message namespace
  "Position",  // message name
  3,  // number of fields
  sizeof(yarp_control_msgs__msg__Position),
  yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_member_array,  // message members
  yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_init_function,  // function to initialize message memory (memory has to be allocated)
  yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_type_support_handle = {
  0,
  &yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yarp_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yarp_control_msgs, msg, Position)() {
  if (!yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_type_support_handle.typesupport_identifier) {
    yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yarp_control_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
