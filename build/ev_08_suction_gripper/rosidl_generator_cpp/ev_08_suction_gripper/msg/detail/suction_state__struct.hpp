// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ev_08_suction_gripper:msg/SuctionState.idl
// generated code does not contain a copyright notice

#ifndef EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__STRUCT_HPP_
#define EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ev_08_suction_gripper__msg__SuctionState __attribute__((deprecated))
#else
# define DEPRECATED__ev_08_suction_gripper__msg__SuctionState __declspec(deprecated)
#endif

namespace ev_08_suction_gripper
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SuctionState_
{
  using Type = SuctionState_<ContainerAllocator>;

  explicit SuctionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->suction_a_on = false;
      this->suction_b_on = false;
      this->force_a = 0.0f;
      this->force_b = 0.0f;
      this->status = "";
    }
  }

  explicit SuctionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->suction_a_on = false;
      this->suction_b_on = false;
      this->force_a = 0.0f;
      this->force_b = 0.0f;
      this->status = "";
    }
  }

  // field types and members
  using _suction_a_on_type =
    bool;
  _suction_a_on_type suction_a_on;
  using _suction_b_on_type =
    bool;
  _suction_b_on_type suction_b_on;
  using _force_a_type =
    float;
  _force_a_type force_a;
  using _force_b_type =
    float;
  _force_b_type force_b;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__suction_a_on(
    const bool & _arg)
  {
    this->suction_a_on = _arg;
    return *this;
  }
  Type & set__suction_b_on(
    const bool & _arg)
  {
    this->suction_b_on = _arg;
    return *this;
  }
  Type & set__force_a(
    const float & _arg)
  {
    this->force_a = _arg;
    return *this;
  }
  Type & set__force_b(
    const float & _arg)
  {
    this->force_b = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ev_08_suction_gripper::msg::SuctionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ev_08_suction_gripper::msg::SuctionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ev_08_suction_gripper::msg::SuctionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ev_08_suction_gripper::msg::SuctionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ev_08_suction_gripper::msg::SuctionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ev_08_suction_gripper::msg::SuctionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ev_08_suction_gripper::msg::SuctionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ev_08_suction_gripper::msg::SuctionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ev_08_suction_gripper::msg::SuctionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ev_08_suction_gripper::msg::SuctionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ev_08_suction_gripper__msg__SuctionState
    std::shared_ptr<ev_08_suction_gripper::msg::SuctionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ev_08_suction_gripper__msg__SuctionState
    std::shared_ptr<ev_08_suction_gripper::msg::SuctionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SuctionState_ & other) const
  {
    if (this->suction_a_on != other.suction_a_on) {
      return false;
    }
    if (this->suction_b_on != other.suction_b_on) {
      return false;
    }
    if (this->force_a != other.force_a) {
      return false;
    }
    if (this->force_b != other.force_b) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SuctionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SuctionState_

// alias to use template instance with default allocator
using SuctionState =
  ev_08_suction_gripper::msg::SuctionState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ev_08_suction_gripper

#endif  // EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__STRUCT_HPP_
