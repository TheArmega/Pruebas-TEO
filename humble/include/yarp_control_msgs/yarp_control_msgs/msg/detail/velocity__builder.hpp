// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yarp_control_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__MSG__DETAIL__VELOCITY__BUILDER_HPP_
#define YARP_CONTROL_MSGS__MSG__DETAIL__VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yarp_control_msgs/msg/detail/velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yarp_control_msgs
{

namespace msg
{

namespace builder
{

class Init_Velocity_ref_accelerations
{
public:
  explicit Init_Velocity_ref_accelerations(::yarp_control_msgs::msg::Velocity & msg)
  : msg_(msg)
  {}
  ::yarp_control_msgs::msg::Velocity ref_accelerations(::yarp_control_msgs::msg::Velocity::_ref_accelerations_type arg)
  {
    msg_.ref_accelerations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yarp_control_msgs::msg::Velocity msg_;
};

class Init_Velocity_velocities
{
public:
  explicit Init_Velocity_velocities(::yarp_control_msgs::msg::Velocity & msg)
  : msg_(msg)
  {}
  Init_Velocity_ref_accelerations velocities(::yarp_control_msgs::msg::Velocity::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_Velocity_ref_accelerations(msg_);
  }

private:
  ::yarp_control_msgs::msg::Velocity msg_;
};

class Init_Velocity_names
{
public:
  Init_Velocity_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity_velocities names(::yarp_control_msgs::msg::Velocity::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_Velocity_velocities(msg_);
  }

private:
  ::yarp_control_msgs::msg::Velocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yarp_control_msgs::msg::Velocity>()
{
  return yarp_control_msgs::msg::builder::Init_Velocity_names();
}

}  // namespace yarp_control_msgs

#endif  // YARP_CONTROL_MSGS__MSG__DETAIL__VELOCITY__BUILDER_HPP_
