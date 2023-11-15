// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yarp_control_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__MSG__DETAIL__POSITION__TRAITS_HPP_
#define YARP_CONTROL_MSGS__MSG__DETAIL__POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "yarp_control_msgs/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace yarp_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Position & msg,
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

  // member: ref_velocities
  {
    if (msg.ref_velocities.size() == 0) {
      out << "ref_velocities: []";
    } else {
      out << "ref_velocities: [";
      size_t pending_items = msg.ref_velocities.size();
      for (auto item : msg.ref_velocities) {
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
  const Position & msg,
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

  // member: ref_velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ref_velocities.size() == 0) {
      out << "ref_velocities: []\n";
    } else {
      out << "ref_velocities:\n";
      for (auto item : msg.ref_velocities) {
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

inline std::string to_yaml(const Position & msg, bool use_flow_style = false)
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
  const yarp_control_msgs::msg::Position & msg,
  std::ostream & out, size_t indentation = 0)
{
  yarp_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use yarp_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const yarp_control_msgs::msg::Position & msg)
{
  return yarp_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<yarp_control_msgs::msg::Position>()
{
  return "yarp_control_msgs::msg::Position";
}

template<>
inline const char * name<yarp_control_msgs::msg::Position>()
{
  return "yarp_control_msgs/msg/Position";
}

template<>
struct has_fixed_size<yarp_control_msgs::msg::Position>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yarp_control_msgs::msg::Position>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yarp_control_msgs::msg::Position>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YARP_CONTROL_MSGS__MSG__DETAIL__POSITION__TRAITS_HPP_
