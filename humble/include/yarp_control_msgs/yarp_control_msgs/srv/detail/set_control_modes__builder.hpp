// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yarp_control_msgs:srv/SetControlModes.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__SRV__DETAIL__SET_CONTROL_MODES__BUILDER_HPP_
#define YARP_CONTROL_MSGS__SRV__DETAIL__SET_CONTROL_MODES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yarp_control_msgs/srv/detail/set_control_modes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yarp_control_msgs
{

namespace srv
{

namespace builder
{

class Init_SetControlModes_Request_modes
{
public:
  explicit Init_SetControlModes_Request_modes(::yarp_control_msgs::srv::SetControlModes_Request & msg)
  : msg_(msg)
  {}
  ::yarp_control_msgs::srv::SetControlModes_Request modes(::yarp_control_msgs::srv::SetControlModes_Request::_modes_type arg)
  {
    msg_.modes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yarp_control_msgs::srv::SetControlModes_Request msg_;
};

class Init_SetControlModes_Request_names
{
public:
  Init_SetControlModes_Request_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetControlModes_Request_modes names(::yarp_control_msgs::srv::SetControlModes_Request::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_SetControlModes_Request_modes(msg_);
  }

private:
  ::yarp_control_msgs::srv::SetControlModes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yarp_control_msgs::srv::SetControlModes_Request>()
{
  return yarp_control_msgs::srv::builder::Init_SetControlModes_Request_names();
}

}  // namespace yarp_control_msgs


namespace yarp_control_msgs
{

namespace srv
{

namespace builder
{

class Init_SetControlModes_Response_opt_descr
{
public:
  explicit Init_SetControlModes_Response_opt_descr(::yarp_control_msgs::srv::SetControlModes_Response & msg)
  : msg_(msg)
  {}
  ::yarp_control_msgs::srv::SetControlModes_Response opt_descr(::yarp_control_msgs::srv::SetControlModes_Response::_opt_descr_type arg)
  {
    msg_.opt_descr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yarp_control_msgs::srv::SetControlModes_Response msg_;
};

class Init_SetControlModes_Response_response
{
public:
  Init_SetControlModes_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetControlModes_Response_opt_descr response(::yarp_control_msgs::srv::SetControlModes_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_SetControlModes_Response_opt_descr(msg_);
  }

private:
  ::yarp_control_msgs::srv::SetControlModes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yarp_control_msgs::srv::SetControlModes_Response>()
{
  return yarp_control_msgs::srv::builder::Init_SetControlModes_Response_response();
}

}  // namespace yarp_control_msgs

#endif  // YARP_CONTROL_MSGS__SRV__DETAIL__SET_CONTROL_MODES__BUILDER_HPP_
