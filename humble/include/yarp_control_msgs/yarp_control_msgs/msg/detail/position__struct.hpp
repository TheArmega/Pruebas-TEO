// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yarp_control_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__MSG__DETAIL__POSITION__STRUCT_HPP_
#define YARP_CONTROL_MSGS__MSG__DETAIL__POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yarp_control_msgs__msg__Position __attribute__((deprecated))
#else
# define DEPRECATED__yarp_control_msgs__msg__Position __declspec(deprecated)
#endif

namespace yarp_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Position_
{
  using Type = Position_<ContainerAllocator>;

  explicit Position_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Position_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _names_type names;
  using _positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _positions_type positions;
  using _ref_velocities_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ref_velocities_type ref_velocities;

  // setters for named parameter idiom
  Type & set__names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->names = _arg;
    return *this;
  }
  Type & set__positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }
  Type & set__ref_velocities(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ref_velocities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yarp_control_msgs::msg::Position_<ContainerAllocator> *;
  using ConstRawPtr =
    const yarp_control_msgs::msg::Position_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yarp_control_msgs::msg::Position_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yarp_control_msgs::msg::Position_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yarp_control_msgs::msg::Position_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yarp_control_msgs::msg::Position_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yarp_control_msgs::msg::Position_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yarp_control_msgs::msg::Position_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yarp_control_msgs::msg::Position_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yarp_control_msgs::msg::Position_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yarp_control_msgs__msg__Position
    std::shared_ptr<yarp_control_msgs::msg::Position_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yarp_control_msgs__msg__Position
    std::shared_ptr<yarp_control_msgs::msg::Position_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Position_ & other) const
  {
    if (this->names != other.names) {
      return false;
    }
    if (this->positions != other.positions) {
      return false;
    }
    if (this->ref_velocities != other.ref_velocities) {
      return false;
    }
    return true;
  }
  bool operator!=(const Position_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Position_

// alias to use template instance with default allocator
using Position =
  yarp_control_msgs::msg::Position_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yarp_control_msgs

#endif  // YARP_CONTROL_MSGS__MSG__DETAIL__POSITION__STRUCT_HPP_