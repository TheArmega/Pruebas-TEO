// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yarp_control_msgs:msg/PositionDirect.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__MSG__DETAIL__POSITION_DIRECT__BUILDER_HPP_
#define YARP_CONTROL_MSGS__MSG__DETAIL__POSITION_DIRECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yarp_control_msgs/msg/detail/position_direct__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yarp_control_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionDirect_positions
{
public:
  explicit Init_PositionDirect_positions(::yarp_control_msgs::msg::PositionDirect & msg)
  : msg_(msg)
  {}
  ::yarp_control_msgs::msg::PositionDirect positions(::yarp_control_msgs::msg::PositionDirect::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yarp_control_msgs::msg::PositionDirect msg_;
};

class Init_PositionDirect_names
{
public:
  Init_PositionDirect_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionDirect_positions names(::yarp_control_msgs::msg::PositionDirect::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_PositionDirect_positions(msg_);
  }

private:
  ::yarp_control_msgs::msg::PositionDirect msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yarp_control_msgs::msg::PositionDirect>()
{
  return yarp_control_msgs::msg::builder::Init_PositionDirect_names();
}

}  // namespace yarp_control_msgs

#endif  // YARP_CONTROL_MSGS__MSG__DETAIL__POSITION_DIRECT__BUILDER_HPP_
