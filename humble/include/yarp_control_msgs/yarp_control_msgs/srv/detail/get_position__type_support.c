// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yarp_control_msgs:srv/GetPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yarp_control_msgs/srv/detail/get_position__rosidl_typesupport_introspection_c.h"
#include "yarp_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yarp_control_msgs/srv/detail/get_position__functions.h"
#include "yarp_control_msgs/srv/detail/get_position__struct.h"


// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yarp_control_msgs__srv__GetPosition_Request__init(message_memory);
}

void yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_fini_function(void * message_memory)
{
  yarp_control_msgs__srv__GetPosition_Request__fini(message_memory);
}

size_t yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__size_function__GetPosition_Request__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__get_const_function__GetPosition_Request__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__get_function__GetPosition_Request__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__fetch_function__GetPosition_Request__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__get_const_function__GetPosition_Request__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__assign_function__GetPosition_Request__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__get_function__GetPosition_Request__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__resize_function__GetPosition_Request__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_member_array[1] = {
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yarp_control_msgs__srv__GetPosition_Request, names),  // bytes offset in struct
    NULL,  // default value
    yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__size_function__GetPosition_Request__names,  // size() function pointer
    yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__get_const_function__GetPosition_Request__names,  // get_const(index) function pointer
    yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__get_function__GetPosition_Request__names,  // get(index) function pointer
    yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__fetch_function__GetPosition_Request__names,  // fetch(index, &value) function pointer
    yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__assign_function__GetPosition_Request__names,  // assign(index, value) function pointer
    yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__resize_function__GetPosition_Request__names  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_members = {
  "yarp_control_msgs__srv",  // message namespace
  "GetPosition_Request",  // message name
  1,  // number of fields
  sizeof(yarp_control_msgs__srv__GetPosition_Request),
  yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_member_array,  // message members
  yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle = {
  0,
  &yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yarp_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yarp_control_msgs, srv, GetPosition_Request)() {
  if (!yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle.typesupport_identifier) {
    yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yarp_control_msgs__srv__GetPosition_Request__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "yarp_control_msgs/srv/detail/get_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "yarp_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "yarp_control_msgs/srv/detail/get_position__functions.h"
// already included above
// #include "yarp_control_msgs/srv/detail/get_position__struct.h"


// Include directives for member types
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `response`
// Member `opt_descr`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yarp_control_msgs__srv__GetPosition_Response__init(message_memory);
}

void yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_fini_function(void * message_memory)
{
  yarp_control_msgs__srv__GetPosition_Response__fini(message_memory);
}

size_t yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__size_function__GetPosition_Response__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__get_const_function__GetPosition_Response__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__get_function__GetPosition_Response__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__fetch_function__GetPosition_Response__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__get_const_function__GetPosition_Response__positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__assign_function__GetPosition_Response__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__get_function__GetPosition_Response__positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__resize_function__GetPosition_Response__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_member_array[3] = {
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yarp_control_msgs__srv__GetPosition_Response, positions),  // bytes offset in struct
    NULL,  // default value
    yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__size_function__GetPosition_Response__positions,  // size() function pointer
    yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__get_const_function__GetPosition_Response__positions,  // get_const(index) function pointer
    yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__get_function__GetPosition_Response__positions,  // get(index) function pointer
    yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__fetch_function__GetPosition_Response__positions,  // fetch(index, &value) function pointer
    yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__assign_function__GetPosition_Response__positions,  // assign(index, value) function pointer
    yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__resize_function__GetPosition_Response__positions  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yarp_control_msgs__srv__GetPosition_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "opt_descr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yarp_control_msgs__srv__GetPosition_Response, opt_descr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_members = {
  "yarp_control_msgs__srv",  // message namespace
  "GetPosition_Response",  // message name
  3,  // number of fields
  sizeof(yarp_control_msgs__srv__GetPosition_Response),
  yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_member_array,  // message members
  yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle = {
  0,
  &yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yarp_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yarp_control_msgs, srv, GetPosition_Response)() {
  if (!yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle.typesupport_identifier) {
    yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yarp_control_msgs__srv__GetPosition_Response__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "yarp_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "yarp_control_msgs/srv/detail/get_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers yarp_control_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_members = {
  "yarp_control_msgs__srv",  // service namespace
  "GetPosition",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // yarp_control_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_Request_message_type_support_handle,
  NULL  // response message
  // yarp_control_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_Response_message_type_support_handle
};

static rosidl_service_type_support_t yarp_control_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle = {
  0,
  &yarp_control_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yarp_control_msgs, srv, GetPosition_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yarp_control_msgs, srv, GetPosition_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yarp_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yarp_control_msgs, srv, GetPosition)() {
  if (!yarp_control_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle.typesupport_identifier) {
    yarp_control_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)yarp_control_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yarp_control_msgs, srv, GetPosition_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yarp_control_msgs, srv, GetPosition_Response)()->data;
  }

  return &yarp_control_msgs__srv__detail__get_position__rosidl_typesupport_introspection_c__GetPosition_service_type_support_handle;
}
