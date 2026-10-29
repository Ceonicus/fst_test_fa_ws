// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ev_08_suction_gripper:srv/SuctionCommand.idl
// generated code does not contain a copyright notice

#ifndef EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__BUILDER_HPP_
#define EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ev_08_suction_gripper/srv/detail/suction_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ev_08_suction_gripper
{

namespace srv
{

namespace builder
{

class Init_SuctionCommand_Request_command
{
public:
  Init_SuctionCommand_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ev_08_suction_gripper::srv::SuctionCommand_Request command(::ev_08_suction_gripper::srv::SuctionCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ev_08_suction_gripper::srv::SuctionCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ev_08_suction_gripper::srv::SuctionCommand_Request>()
{
  return ev_08_suction_gripper::srv::builder::Init_SuctionCommand_Request_command();
}

}  // namespace ev_08_suction_gripper


namespace ev_08_suction_gripper
{

namespace srv
{

namespace builder
{

class Init_SuctionCommand_Response_message
{
public:
  explicit Init_SuctionCommand_Response_message(::ev_08_suction_gripper::srv::SuctionCommand_Response & msg)
  : msg_(msg)
  {}
  ::ev_08_suction_gripper::srv::SuctionCommand_Response message(::ev_08_suction_gripper::srv::SuctionCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ev_08_suction_gripper::srv::SuctionCommand_Response msg_;
};

class Init_SuctionCommand_Response_success
{
public:
  Init_SuctionCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SuctionCommand_Response_message success(::ev_08_suction_gripper::srv::SuctionCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SuctionCommand_Response_message(msg_);
  }

private:
  ::ev_08_suction_gripper::srv::SuctionCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ev_08_suction_gripper::srv::SuctionCommand_Response>()
{
  return ev_08_suction_gripper::srv::builder::Init_SuctionCommand_Response_success();
}

}  // namespace ev_08_suction_gripper

#endif  // EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__BUILDER_HPP_
