// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yarp_control_msgs:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
#define YARP_CONTROL_MSGS__SRV__DETAIL__GET_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yarp_control_msgs/srv/detail/get_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yarp_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Request_names
{
public:
  Init_GetPosition_Request_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yarp_control_msgs::srv::GetPosition_Request names(::yarp_control_msgs::srv::GetPosition_Request::_names_type arg)
  {
    msg_.names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yarp_control_msgs::srv::GetPosition_Request>()
{
  return yarp_control_msgs::srv::builder::Init_GetPosition_Request_names();
}

}  // namespace yarp_control_msgs


namespace yarp_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPosition_Response_opt_descr
{
public:
  explicit Init_GetPosition_Response_opt_descr(::yarp_control_msgs::srv::GetPosition_Response & msg)
  : msg_(msg)
  {}
  ::yarp_control_msgs::srv::GetPosition_Response opt_descr(::yarp_control_msgs::srv::GetPosition_Response::_opt_descr_type arg)
  {
    msg_.opt_descr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetPosition_Response msg_;
};

class Init_GetPosition_Response_response
{
public:
  explicit Init_GetPosition_Response_response(::yarp_control_msgs::srv::GetPosition_Response & msg)
  : msg_(msg)
  {}
  Init_GetPosition_Response_opt_descr response(::yarp_control_msgs::srv::GetPosition_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_GetPosition_Response_opt_descr(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetPosition_Response msg_;
};

class Init_GetPosition_Response_positions
{
public:
  Init_GetPosition_Response_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPosition_Response_response positions(::yarp_control_msgs::srv::GetPosition_Response::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_GetPosition_Response_response(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yarp_control_msgs::srv::GetPosition_Response>()
{
  return yarp_control_msgs::srv::builder::Init_GetPosition_Response_positions();
}

}  // namespace yarp_control_msgs

#endif  // YARP_CONTROL_MSGS__SRV__DETAIL__GET_POSITION__BUILDER_HPP_
