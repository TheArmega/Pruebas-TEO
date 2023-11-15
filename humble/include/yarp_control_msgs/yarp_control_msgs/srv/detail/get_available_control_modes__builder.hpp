// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yarp_control_msgs:srv/GetAvailableControlModes.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__SRV__DETAIL__GET_AVAILABLE_CONTROL_MODES__BUILDER_HPP_
#define YARP_CONTROL_MSGS__SRV__DETAIL__GET_AVAILABLE_CONTROL_MODES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yarp_control_msgs/srv/detail/get_available_control_modes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yarp_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAvailableControlModes_Request_only_implemented
{
public:
  Init_GetAvailableControlModes_Request_only_implemented()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yarp_control_msgs::srv::GetAvailableControlModes_Request only_implemented(::yarp_control_msgs::srv::GetAvailableControlModes_Request::_only_implemented_type arg)
  {
    msg_.only_implemented = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetAvailableControlModes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yarp_control_msgs::srv::GetAvailableControlModes_Request>()
{
  return yarp_control_msgs::srv::builder::Init_GetAvailableControlModes_Request_only_implemented();
}

}  // namespace yarp_control_msgs


namespace yarp_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAvailableControlModes_Response_opt_descr
{
public:
  explicit Init_GetAvailableControlModes_Response_opt_descr(::yarp_control_msgs::srv::GetAvailableControlModes_Response & msg)
  : msg_(msg)
  {}
  ::yarp_control_msgs::srv::GetAvailableControlModes_Response opt_descr(::yarp_control_msgs::srv::GetAvailableControlModes_Response::_opt_descr_type arg)
  {
    msg_.opt_descr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetAvailableControlModes_Response msg_;
};

class Init_GetAvailableControlModes_Response_response
{
public:
  explicit Init_GetAvailableControlModes_Response_response(::yarp_control_msgs::srv::GetAvailableControlModes_Response & msg)
  : msg_(msg)
  {}
  Init_GetAvailableControlModes_Response_opt_descr response(::yarp_control_msgs::srv::GetAvailableControlModes_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_GetAvailableControlModes_Response_opt_descr(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetAvailableControlModes_Response msg_;
};

class Init_GetAvailableControlModes_Response_modes
{
public:
  Init_GetAvailableControlModes_Response_modes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAvailableControlModes_Response_response modes(::yarp_control_msgs::srv::GetAvailableControlModes_Response::_modes_type arg)
  {
    msg_.modes = std::move(arg);
    return Init_GetAvailableControlModes_Response_response(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetAvailableControlModes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yarp_control_msgs::srv::GetAvailableControlModes_Response>()
{
  return yarp_control_msgs::srv::builder::Init_GetAvailableControlModes_Response_modes();
}

}  // namespace yarp_control_msgs

#endif  // YARP_CONTROL_MSGS__SRV__DETAIL__GET_AVAILABLE_CONTROL_MODES__BUILDER_HPP_
