// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yarp_control_msgs:srv/GetJointsNames.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__SRV__DETAIL__GET_JOINTS_NAMES__BUILDER_HPP_
#define YARP_CONTROL_MSGS__SRV__DETAIL__GET_JOINTS_NAMES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yarp_control_msgs/srv/detail/get_joints_names__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yarp_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointsNames_Request_joint_indexes
{
public:
  Init_GetJointsNames_Request_joint_indexes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yarp_control_msgs::srv::GetJointsNames_Request joint_indexes(::yarp_control_msgs::srv::GetJointsNames_Request::_joint_indexes_type arg)
  {
    msg_.joint_indexes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetJointsNames_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yarp_control_msgs::srv::GetJointsNames_Request>()
{
  return yarp_control_msgs::srv::builder::Init_GetJointsNames_Request_joint_indexes();
}

}  // namespace yarp_control_msgs


namespace yarp_control_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointsNames_Response_opt_descr
{
public:
  explicit Init_GetJointsNames_Response_opt_descr(::yarp_control_msgs::srv::GetJointsNames_Response & msg)
  : msg_(msg)
  {}
  ::yarp_control_msgs::srv::GetJointsNames_Response opt_descr(::yarp_control_msgs::srv::GetJointsNames_Response::_opt_descr_type arg)
  {
    msg_.opt_descr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetJointsNames_Response msg_;
};

class Init_GetJointsNames_Response_response
{
public:
  explicit Init_GetJointsNames_Response_response(::yarp_control_msgs::srv::GetJointsNames_Response & msg)
  : msg_(msg)
  {}
  Init_GetJointsNames_Response_opt_descr response(::yarp_control_msgs::srv::GetJointsNames_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_GetJointsNames_Response_opt_descr(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetJointsNames_Response msg_;
};

class Init_GetJointsNames_Response_names
{
public:
  Init_GetJointsNames_Response_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetJointsNames_Response_response names(::yarp_control_msgs::srv::GetJointsNames_Response::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_GetJointsNames_Response_response(msg_);
  }

private:
  ::yarp_control_msgs::srv::GetJointsNames_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::yarp_control_msgs::srv::GetJointsNames_Response>()
{
  return yarp_control_msgs::srv::builder::Init_GetJointsNames_Response_names();
}

}  // namespace yarp_control_msgs

#endif  // YARP_CONTROL_MSGS__SRV__DETAIL__GET_JOINTS_NAMES__BUILDER_HPP_
