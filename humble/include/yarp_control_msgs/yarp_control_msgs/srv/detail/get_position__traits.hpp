// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yarp_control_msgs:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__SRV__DETAIL__GET_POSITION__TRAITS_HPP_
#define YARP_CONTROL_MSGS__SRV__DETAIL__GET_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yarp_control_msgs/srv/detail/get_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yarp_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace yarp_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use yarp_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yarp_control_msgs::srv::GetPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  yarp_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yarp_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const yarp_control_msgs::srv::GetPosition_Request & msg)
{
  return yarp_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<yarp_control_msgs::srv::GetPosition_Request>()
{
  return "yarp_control_msgs::srv::GetPosition_Request";
}

template<>
inline const char * name<yarp_control_msgs::srv::GetPosition_Request>()
{
  return "yarp_control_msgs/srv/GetPosition_Request";
}

template<>
struct has_fixed_size<yarp_control_msgs::srv::GetPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yarp_control_msgs::srv::GetPosition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yarp_control_msgs::srv::GetPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace yarp_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: positions
  {
    if (msg.positions.size() == 0) {
      out << "positions: []";
    } else {
      out << "positions: [";
      size_t pending_items = msg.positions.size();
      for (auto item : msg.positions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << ", ";
  }

  // member: opt_descr
  {
    out << "opt_descr: ";
    rosidl_generator_traits::value_to_yaml(msg.opt_descr, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positions.size() == 0) {
      out << "positions: []\n";
    } else {
      out << "positions:\n";
      for (auto item : msg.positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }

  // member: opt_descr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opt_descr: ";
    rosidl_generator_traits::value_to_yaml(msg.opt_descr, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace yarp_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use yarp_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yarp_control_msgs::srv::GetPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  yarp_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yarp_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const yarp_control_msgs::srv::GetPosition_Response & msg)
{
  return yarp_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<yarp_control_msgs::srv::GetPosition_Response>()
{
  return "yarp_control_msgs::srv::GetPosition_Response";
}

template<>
inline const char * name<yarp_control_msgs::srv::GetPosition_Response>()
{
  return "yarp_control_msgs/srv/GetPosition_Response";
}

template<>
struct has_fixed_size<yarp_control_msgs::srv::GetPosition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yarp_control_msgs::srv::GetPosition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yarp_control_msgs::srv::GetPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yarp_control_msgs::srv::GetPosition>()
{
  return "yarp_control_msgs::srv::GetPosition";
}

template<>
inline const char * name<yarp_control_msgs::srv::GetPosition>()
{
  return "yarp_control_msgs/srv/GetPosition";
}

template<>
struct has_fixed_size<yarp_control_msgs::srv::GetPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<yarp_control_msgs::srv::GetPosition_Request>::value &&
    has_fixed_size<yarp_control_msgs::srv::GetPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<yarp_control_msgs::srv::GetPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<yarp_control_msgs::srv::GetPosition_Request>::value &&
    has_bounded_size<yarp_control_msgs::srv::GetPosition_Response>::value
  >
{
};

template<>
struct is_service<yarp_control_msgs::srv::GetPosition>
  : std::true_type
{
};

template<>
struct is_service_request<yarp_control_msgs::srv::GetPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<yarp_control_msgs::srv::GetPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // YARP_CONTROL_MSGS__SRV__DETAIL__GET_POSITION__TRAITS_HPP_
