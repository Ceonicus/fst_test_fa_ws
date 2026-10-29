// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rg75_300_gripper:srv/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef RG75_300_GRIPPER__SRV__DETAIL__GRIPPER_COMMAND__STRUCT_HPP_
#define RG75_300_GRIPPER__SRV__DETAIL__GRIPPER_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rg75_300_gripper__srv__GripperCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__rg75_300_gripper__srv__GripperCommand_Request __declspec(deprecated)
#endif

namespace rg75_300_gripper
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperCommand_Request_
{
  using Type = GripperCommand_Request_<ContainerAllocator>;

  explicit GripperCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0f;
      this->force = 0.0f;
      this->activated = 0;
    }
  }

  explicit GripperCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0f;
      this->force = 0.0f;
      this->activated = 0;
    }
  }

  // field types and members
  using _position_type =
    float;
  _position_type position;
  using _force_type =
    float;
  _force_type force;
  using _activated_type =
    int8_t;
  _activated_type activated;

  // setters for named parameter idiom
  Type & set__position(
    const float & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__force(
    const float & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__activated(
    const int8_t & _arg)
  {
    this->activated = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rg75_300_gripper::srv::GripperCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rg75_300_gripper::srv::GripperCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rg75_300_gripper::srv::GripperCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rg75_300_gripper::srv::GripperCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rg75_300_gripper::srv::GripperCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rg75_300_gripper::srv::GripperCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rg75_300_gripper::srv::GripperCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rg75_300_gripper::srv::GripperCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rg75_300_gripper::srv::GripperCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rg75_300_gripper::srv::GripperCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rg75_300_gripper__srv__GripperCommand_Request
    std::shared_ptr<rg75_300_gripper::srv::GripperCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rg75_300_gripper__srv__GripperCommand_Request
    std::shared_ptr<rg75_300_gripper::srv::GripperCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperCommand_Request_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    if (this->activated != other.activated) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperCommand_Request_

// alias to use template instance with default allocator
using GripperCommand_Request =
  rg75_300_gripper::srv::GripperCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rg75_300_gripper


#ifndef _WIN32
# define DEPRECATED__rg75_300_gripper__srv__GripperCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__rg75_300_gripper__srv__GripperCommand_Response __declspec(deprecated)
#endif

namespace rg75_300_gripper
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperCommand_Response_
{
  using Type = GripperCommand_Response_<ContainerAllocator>;

  explicit GripperCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit GripperCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rg75_300_gripper::srv::GripperCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rg75_300_gripper::srv::GripperCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rg75_300_gripper::srv::GripperCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rg75_300_gripper::srv::GripperCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rg75_300_gripper::srv::GripperCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rg75_300_gripper::srv::GripperCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rg75_300_gripper::srv::GripperCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rg75_300_gripper::srv::GripperCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rg75_300_gripper::srv::GripperCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rg75_300_gripper::srv::GripperCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rg75_300_gripper__srv__GripperCommand_Response
    std::shared_ptr<rg75_300_gripper::srv::GripperCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rg75_300_gripper__srv__GripperCommand_Response
    std::shared_ptr<rg75_300_gripper::srv::GripperCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperCommand_Response_

// alias to use template instance with default allocator
using GripperCommand_Response =
  rg75_300_gripper::srv::GripperCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rg75_300_gripper

namespace rg75_300_gripper
{

namespace srv
{

struct GripperCommand
{
  using Request = rg75_300_gripper::srv::GripperCommand_Request;
  using Response = rg75_300_gripper::srv::GripperCommand_Response;
};

}  // namespace srv

}  // namespace rg75_300_gripper

#endif  // RG75_300_GRIPPER__SRV__DETAIL__GRIPPER_COMMAND__STRUCT_HPP_
