// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yarp_control_msgs:srv/GetAvailableControlModes.idl
// generated code does not contain a copyright notice

#ifndef YARP_CONTROL_MSGS__SRV__DETAIL__GET_AVAILABLE_CONTROL_MODES__STRUCT_HPP_
#define YARP_CONTROL_MSGS__SRV__DETAIL__GET_AVAILABLE_CONTROL_MODES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yarp_control_msgs__srv__GetAvailableControlModes_Request __attribute__((deprecated))
#else
# define DEPRECATED__yarp_control_msgs__srv__GetAvailableControlModes_Request __declspec(deprecated)
#endif

namespace yarp_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAvailableControlModes_Request_
{
  using Type = GetAvailableControlModes_Request_<ContainerAllocator>;

  explicit GetAvailableControlModes_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->only_implemented = false;
    }
  }

  explicit GetAvailableControlModes_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->only_implemented = false;
    }
  }

  // field types and members
  using _only_implemented_type =
    bool;
  _only_implemented_type only_implemented;

  // setters for named parameter idiom
  Type & set__only_implemented(
    const bool & _arg)
  {
    this->only_implemented = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yarp_control_msgs::srv::GetAvailableControlModes_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const yarp_control_msgs::srv::GetAvailableControlModes_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yarp_control_msgs::srv::GetAvailableControlModes_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yarp_control_msgs::srv::GetAvailableControlModes_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yarp_control_msgs__srv__GetAvailableControlModes_Request
    std::shared_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yarp_control_msgs__srv__GetAvailableControlModes_Request
    std::shared_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAvailableControlModes_Request_ & other) const
  {
    if (this->only_implemented != other.only_implemented) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAvailableControlModes_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAvailableControlModes_Request_

// alias to use template instance with default allocator
using GetAvailableControlModes_Request =
  yarp_control_msgs::srv::GetAvailableControlModes_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace yarp_control_msgs


#ifndef _WIN32
# define DEPRECATED__yarp_control_msgs__srv__GetAvailableControlModes_Response __attribute__((deprecated))
#else
# define DEPRECATED__yarp_control_msgs__srv__GetAvailableControlModes_Response __declspec(deprecated)
#endif

namespace yarp_control_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAvailableControlModes_Response_
{
  using Type = GetAvailableControlModes_Response_<ContainerAllocator>;

  explicit GetAvailableControlModes_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->response = "NOT_SPECIFIED";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->response = "";
      this->opt_descr = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->opt_descr = "";
    }
  }

  explicit GetAvailableControlModes_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc),
    opt_descr(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->response = "NOT_SPECIFIED";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->response = "";
      this->opt_descr = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->opt_descr = "";
    }
  }

  // field types and members
  using _modes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _modes_type modes;
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;
  using _opt_descr_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _opt_descr_type opt_descr;

  // setters for named parameter idiom
  Type & set__modes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->modes = _arg;
    return *this;
  }
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }
  Type & set__opt_descr(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->opt_descr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yarp_control_msgs::srv::GetAvailableControlModes_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const yarp_control_msgs::srv::GetAvailableControlModes_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yarp_control_msgs::srv::GetAvailableControlModes_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yarp_control_msgs::srv::GetAvailableControlModes_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yarp_control_msgs__srv__GetAvailableControlModes_Response
    std::shared_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yarp_control_msgs__srv__GetAvailableControlModes_Response
    std::shared_ptr<yarp_control_msgs::srv::GetAvailableControlModes_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAvailableControlModes_Response_ & other) const
  {
    if (this->modes != other.modes) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    if (this->opt_descr != other.opt_descr) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAvailableControlModes_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAvailableControlModes_Response_

// alias to use template instance with default allocator
using GetAvailableControlModes_Response =
  yarp_control_msgs::srv::GetAvailableControlModes_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace yarp_control_msgs

namespace yarp_control_msgs
{

namespace srv
{

struct GetAvailableControlModes
{
  using Request = yarp_control_msgs::srv::GetAvailableControlModes_Request;
  using Response = yarp_control_msgs::srv::GetAvailableControlModes_Response;
};

}  // namespace srv

}  // namespace yarp_control_msgs

#endif  // YARP_CONTROL_MSGS__SRV__DETAIL__GET_AVAILABLE_CONTROL_MODES__STRUCT_HPP_
