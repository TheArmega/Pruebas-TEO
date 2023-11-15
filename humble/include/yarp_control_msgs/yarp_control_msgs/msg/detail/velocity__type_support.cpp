// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from yarp_control_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "yarp_control_msgs/msg/detail/velocity__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace yarp_control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Velocity_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) yarp_control_msgs::msg::Velocity(_init);
}

void Velocity_fini_function(void * message_memory)
{
  auto typed_message = static_cast<yarp_control_msgs::msg::Velocity *>(message_memory);
  typed_message->~Velocity();
}

size_t size_function__Velocity__names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Velocity__names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Velocity__names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Velocity__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Velocity__names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Velocity__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Velocity__names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Velocity__names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Velocity__velocities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Velocity__velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Velocity__velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Velocity__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Velocity__velocities(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Velocity__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Velocity__velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Velocity__velocities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Velocity__ref_accelerations(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Velocity__ref_accelerations(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Velocity__ref_accelerations(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Velocity__ref_accelerations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Velocity__ref_accelerations(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Velocity__ref_accelerations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Velocity__ref_accelerations(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Velocity__ref_accelerations(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Velocity_message_member_array[3] = {
  {
    "names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yarp_control_msgs::msg::Velocity, names),  // bytes offset in struct
    nullptr,  // default value
    size_function__Velocity__names,  // size() function pointer
    get_const_function__Velocity__names,  // get_const(index) function pointer
    get_function__Velocity__names,  // get(index) function pointer
    fetch_function__Velocity__names,  // fetch(index, &value) function pointer
    assign_function__Velocity__names,  // assign(index, value) function pointer
    resize_function__Velocity__names  // resize(index) function pointer
  },
  {
    "velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yarp_control_msgs::msg::Velocity, velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__Velocity__velocities,  // size() function pointer
    get_const_function__Velocity__velocities,  // get_const(index) function pointer
    get_function__Velocity__velocities,  // get(index) function pointer
    fetch_function__Velocity__velocities,  // fetch(index, &value) function pointer
    assign_function__Velocity__velocities,  // assign(index, value) function pointer
    resize_function__Velocity__velocities  // resize(index) function pointer
  },
  {
    "ref_accelerations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yarp_control_msgs::msg::Velocity, ref_accelerations),  // bytes offset in struct
    nullptr,  // default value
    size_function__Velocity__ref_accelerations,  // size() function pointer
    get_const_function__Velocity__ref_accelerations,  // get_const(index) function pointer
    get_function__Velocity__ref_accelerations,  // get(index) function pointer
    fetch_function__Velocity__ref_accelerations,  // fetch(index, &value) function pointer
    assign_function__Velocity__ref_accelerations,  // assign(index, value) function pointer
    resize_function__Velocity__ref_accelerations  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Velocity_message_members = {
  "yarp_control_msgs::msg",  // message namespace
  "Velocity",  // message name
  3,  // number of fields
  sizeof(yarp_control_msgs::msg::Velocity),
  Velocity_message_member_array,  // message members
  Velocity_init_function,  // function to initialize message memory (memory has to be allocated)
  Velocity_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Velocity_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Velocity_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace yarp_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<yarp_control_msgs::msg::Velocity>()
{
  return &::yarp_control_msgs::msg::rosidl_typesupport_introspection_cpp::Velocity_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yarp_control_msgs, msg, Velocity)() {
  return &::yarp_control_msgs::msg::rosidl_typesupport_introspection_cpp::Velocity_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
