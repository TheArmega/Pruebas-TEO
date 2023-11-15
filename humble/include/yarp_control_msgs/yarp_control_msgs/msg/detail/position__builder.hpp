// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yarp_control_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_
#define YARP_CONTROL_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yarp_control_msgs/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yarp_control_msgs
{

namespace msg
{

namespace builder
{

class Init_Position_ref_velocities
{
public:
  explicit Init_Position_ref_velocities(::yarp_control_msgs::msg::Position & msg)
  : msg_(msg)
  {}
  ::yarp_control_msgs::msg::Position ref_velocities(::yarp_control_msgs::msg::Position::_ref_velocities_type arg)
  {
    msg_.ref_velocities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yarp_control_msgs::msg::Position msg_;
};

class Init_Position_positions
{
public:
  explicit Init_Position_positions(::yarp_control_msgs::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_ref_velocities positions(::yarp_control_msgs::msg::Position::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_Position_ref_velocities(msg_);
  }

private:
  ::yarp_control_msgs::msg::Position msg_;
};

class Init_Position_names
{
public:
  Init_Position_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_positions names(::yarp_control_msgs::msg::Position::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_Position_positions(msg_);
  }

private:
  ::yarp_control_msgs::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yarp_control_msgs::msg::Position>()
{
  return yarp_control_msgs::msg::builder::Init_Position_names();
}

}  // namespace yarp_control_msgs

#endif  // YARP_CONTROL_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_
