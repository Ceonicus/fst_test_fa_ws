// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rg75_300_gripper:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
#define RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rg75_300_gripper/msg/detail/gripper_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rg75_300_gripper
{

namespace msg
{

namespace builder
{

class Init_GripperState_activated
{
public:
  explicit Init_GripperState_activated(::rg75_300_gripper::msg::GripperState & msg)
  : msg_(msg)
  {}
  ::rg75_300_gripper::msg::GripperState activated(::rg75_300_gripper::msg::GripperState::_activated_type arg)
  {
    msg_.activated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rg75_300_gripper::msg::GripperState msg_;
};

class Init_GripperState_force
{
public:
  explicit Init_GripperState_force(::rg75_300_gripper::msg::GripperState & msg)
  : msg_(msg)
  {}
  Init_GripperState_activated force(::rg75_300_gripper::msg::GripperState::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_GripperState_activated(msg_);
  }

private:
  ::rg75_300_gripper::msg::GripperState msg_;
};

class Init_GripperState_position
{
public:
  explicit Init_GripperState_position(::rg75_300_gripper::msg::GripperState & msg)
  : msg_(msg)
  {}
  Init_GripperState_force position(::rg75_300_gripper::msg::GripperState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GripperState_force(msg_);
  }

private:
  ::rg75_300_gripper::msg::GripperState msg_;
};

class Init_GripperState_is_open
{
public:
  Init_GripperState_is_open()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperState_position is_open(::rg75_300_gripper::msg::GripperState::_is_open_type arg)
  {
    msg_.is_open = std::move(arg);
    return Init_GripperState_position(msg_);
  }

private:
  ::rg75_300_gripper::msg::GripperState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rg75_300_gripper::msg::GripperState>()
{
  return rg75_300_gripper::msg::builder::Init_GripperState_is_open();
}

}  // namespace rg75_300_gripper

#endif  // RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
