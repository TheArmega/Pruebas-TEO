// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yarp_control_msgs:srv/GetControlModes.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__SRV__DETAIL__GET_CONTROL_MODES__BUILDER_HPP_
#define YARP_CONTROL_MSGS__SRV__DETAIL__GET_CONTROL_MODES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yarp_control_msgs/srv/detail/get_control_modes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yarp_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GetControlModes_Request_names
{
public:
  Init_GetControlModes_Request_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yarp_control_msgs::srv::GetControlModes_Request names(::yarp_control_msgs::srv::GetControlModes_Request::_names_type arg)
  {
    msg_.names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetControlModes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yarp_control_msgs::srv::GetControlModes_Request>()
{
  return yarp_control_msgs::srv::builder::Init_GetControlModes_Request_names();
}

}  // namespace yarp_control_msgs


namespace yarp_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GetControlModes_Response_opt_descr
{
public:
  explicit Init_GetControlModes_Response_opt_descr(::yarp_control_msgs::srv::GetControlModes_Response & msg)
  : msg_(msg)
  {}
  ::yarp_control_msgs::srv::GetControlModes_Response opt_descr(::yarp_control_msgs::srv::GetControlModes_Response::_opt_descr_type arg)
  {
    msg_.opt_descr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetControlModes_Response msg_;
};

class Init_GetControlModes_Response_response
{
public:
  explicit Init_GetControlModes_Response_response(::yarp_control_msgs::srv::GetControlModes_Response & msg)
  : msg_(msg)
  {}
  Init_GetControlModes_Response_opt_descr response(::yarp_control_msgs::srv::GetControlModes_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_GetControlModes_Response_opt_descr(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetControlModes_Response msg_;
};

class Init_GetControlModes_Response_modes
{
public:
  Init_GetControlModes_Response_modes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetControlModes_Response_response modes(::yarp_control_msgs::srv::GetControlModes_Response::_modes_type arg)
  {
    msg_.modes = std::move(arg);
    return Init_GetControlModes_Response_response(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetControlModes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yarp_control_msgs::srv::GetControlModes_Response>()
{
  return yarp_control_msgs::srv::builder::Init_GetControlModes_Response_modes();
}

}  // namespace yarp_control_msgs

#endif  // YARP_CONTROL_MSGS__SRV__DETAIL__GET_CONTROL_MODES__BUILDER_HPP_
