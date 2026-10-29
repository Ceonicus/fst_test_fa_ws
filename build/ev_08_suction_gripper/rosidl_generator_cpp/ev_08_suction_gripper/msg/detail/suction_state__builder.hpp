// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ev_08_suction_gripper:msg/SuctionState.idl
// generated code does not contain a copyright notice

#ifndef EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__BUILDER_HPP_
#define EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ev_08_suction_gripper/msg/detail/suction_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ev_08_suction_gripper
{

namespace msg
{

namespace builder
{

class Init_SuctionState_status
{
public:
  explicit Init_SuctionState_status(::ev_08_suction_gripper::msg::SuctionState & msg)
  : msg_(msg)
  {}
  ::ev_08_suction_gripper::msg::SuctionState status(::ev_08_suction_gripper::msg::SuctionState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ev_08_suction_gripper::msg::SuctionState msg_;
};

class Init_SuctionState_force_b
{
public:
  explicit Init_SuctionState_force_b(::ev_08_suction_gripper::msg::SuctionState & msg)
  : msg_(msg)
  {}
  Init_SuctionState_status force_b(::ev_08_suction_gripper::msg::SuctionState::_force_b_type arg)
  {
    msg_.force_b = std::move(arg);
    return Init_SuctionState_status(msg_);
  }

private:
  ::ev_08_suction_gripper::msg::SuctionState msg_;
};

class Init_SuctionState_force_a
{
public:
  explicit Init_SuctionState_force_a(::ev_08_suction_gripper::msg::SuctionState & msg)
  : msg_(msg)
  {}
  Init_SuctionState_force_b force_a(::ev_08_suction_gripper::msg::SuctionState::_force_a_type arg)
  {
    msg_.force_a = std::move(arg);
    return Init_SuctionState_force_b(msg_);
  }

private:
  ::ev_08_suction_gripper::msg::SuctionState msg_;
};

class Init_SuctionState_suction_b_on
{
public:
  explicit Init_SuctionState_suction_b_on(::ev_08_suction_gripper::msg::SuctionState & msg)
  : msg_(msg)
  {}
  Init_SuctionState_force_a suction_b_on(::ev_08_suction_gripper::msg::SuctionState::_suction_b_on_type arg)
  {
    msg_.suction_b_on = std::move(arg);
    return Init_SuctionState_force_a(msg_);
  }

private:
  ::ev_08_suction_gripper::msg::SuctionState msg_;
};

class Init_SuctionState_suction_a_on
{
public:
  Init_SuctionState_suction_a_on()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SuctionState_suction_b_on suction_a_on(::ev_08_suction_gripper::msg::SuctionState::_suction_a_on_type arg)
  {
    msg_.suction_a_on = std::move(arg);
    return Init_SuctionState_suction_b_on(msg_);
  }

private:
  ::ev_08_suction_gripper::msg::SuctionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ev_08_suction_gripper::msg::SuctionState>()
{
  return ev_08_suction_gripper::msg::builder::Init_SuctionState_suction_a_on();
}

}  // namespace ev_08_suction_gripper

#endif  // EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__BUILDER_HPP_
