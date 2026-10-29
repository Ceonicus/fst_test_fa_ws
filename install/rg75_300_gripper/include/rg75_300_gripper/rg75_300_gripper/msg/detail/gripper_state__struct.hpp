// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rg75_300_gripper:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__STRUCT_HPP_
#define RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rg75_300_gripper__msg__GripperState __attribute__((deprecated))
#else
# define DEPRECATED__rg75_300_gripper__msg__GripperState __declspec(deprecated)
#endif

namespace rg75_300_gripper
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperState_
{
  using Type = GripperState_<ContainerAllocator>;

  explicit GripperState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_open = false;
      this->position = 0.0f;
      this->force = 0.0f;
      this->activated = 0;
    }
  }

  explicit GripperState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_open = false;
      this->position = 0.0f;
      this->force = 0.0f;
      this->activated = 0;
    }
  }

  // field types and members
  using _is_open_type =
    bool;
  _is_open_type is_open;
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
  Type & set__is_open(
    const bool & _arg)
  {
    this->is_open = _arg;
    return *this;
  }
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
    rg75_300_gripper::msg::GripperState_<ContainerAllocator> *;
  using ConstRawPtr =
    const rg75_300_gripper::msg::GripperState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rg75_300_gripper::msg::GripperState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rg75_300_gripper::msg::GripperState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rg75_300_gripper::msg::GripperState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rg75_300_gripper::msg::GripperState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rg75_300_gripper::msg::GripperState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rg75_300_gripper::msg::GripperState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rg75_300_gripper::msg::GripperState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rg75_300_gripper::msg::GripperState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rg75_300_gripper__msg__GripperState
    std::shared_ptr<rg75_300_gripper::msg::GripperState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rg75_300_gripper__msg__GripperState
    std::shared_ptr<rg75_300_gripper::msg::GripperState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperState_ & other) const
  {
    if (this->is_open != other.is_open) {
      return false;
    }
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
  bool operator!=(const GripperState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperState_

// alias to use template instance with default allocator
using GripperState =
  rg75_300_gripper::msg::GripperState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rg75_300_gripper

#endif  // RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__STRUCT_HPP_
