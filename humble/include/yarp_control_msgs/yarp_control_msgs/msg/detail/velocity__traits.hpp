// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yarp_control_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__MSG__DETAIL__VELOCITY__TRAITS_HPP_
#define YARP_CONTROL_MSGS__MSG__DETAIL__VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yarp_control_msgs/msg/detail/velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yarp_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Velocity & msg,
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
    out << ", ";
  }

  // member: velocities
  {
    if (msg.velocities.size() == 0) {
      out << "velocities: []";
    } else {
      out << "velocities: [";
      size_t pending_items = msg.velocities.size();
      for (auto item : msg.velocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ref_accelerations
  {
    if (msg.ref_accelerations.size() == 0) {
      out << "ref_accelerations: []";
    } else {
      out << "ref_accelerations: [";
      size_t pending_items = msg.ref_accelerations.size();
      for (auto item : msg.ref_accelerations) {
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
  const Velocity & msg,
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

  // member: velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocities.size() == 0) {
      out << "velocities: []\n";
    } else {
      out << "velocities:\n";
      for (auto item : msg.velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ref_accelerations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ref_accelerations.size() == 0) {
      out << "ref_accelerations: []\n";
    } else {
      out << "ref_accelerations:\n";
      for (auto item : msg.ref_accelerations) {
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

inline std::string to_yaml(const Velocity & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace yarp_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use yarp_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const yarp_control_msgs::msg::Velocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  yarp_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yarp_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const yarp_control_msgs::msg::Velocity & msg)
{
  return yarp_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yarp_control_msgs::msg::Velocity>()
{
  return "yarp_control_msgs::msg::Velocity";
}

template<>
inline const char * name<yarp_control_msgs::msg::Velocity>()
{
  return "yarp_control_msgs/msg/Velocity";
}

template<>
struct has_fixed_size<yarp_control_msgs::msg::Velocity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yarp_control_msgs::msg::Velocity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yarp_control_msgs::msg::Velocity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YARP_CONTROL_MSGS__MSG__DETAIL__VELOCITY__TRAITS_HPP_
