// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rg75_300_gripper:srv/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef RG75_300_GRIPPER__SRV__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
#define RG75_300_GRIPPER__SRV__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rg75_300_gripper/srv/detail/gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rg75_300_gripper
{

namespace srv
{

namespace builder
{

class Init_GripperCommand_Request_activated
{
public:
  explicit Init_GripperCommand_Request_activated(::rg75_300_gripper::srv::GripperCommand_Request & msg)
  : msg_(msg)
  {}
  ::rg75_300_gripper::srv::GripperCommand_Request activated(::rg75_300_gripper::srv::GripperCommand_Request::_activated_type arg)
  {
    msg_.activated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rg75_300_gripper::srv::GripperCommand_Request msg_;
};

class Init_GripperCommand_Request_force
{
public:
  explicit Init_GripperCommand_Request_force(::rg75_300_gripper::srv::GripperCommand_Request & msg)
  : msg_(msg)
  {}
  Init_GripperCommand_Request_activated force(::rg75_300_gripper::srv::GripperCommand_Request::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_GripperCommand_Request_activated(msg_);
  }

private:
  ::rg75_300_gripper::srv::GripperCommand_Request msg_;
};

class Init_GripperCommand_Request_position
{
public:
  Init_GripperCommand_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommand_Request_force position(::rg75_300_gripper::srv::GripperCommand_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GripperCommand_Request_force(msg_);
  }

private:
  ::rg75_300_gripper::srv::GripperCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rg75_300_gripper::srv::GripperCommand_Request>()
{
  return rg75_300_gripper::srv::builder::Init_GripperCommand_Request_position();
}

}  // namespace rg75_300_gripper


namespace rg75_300_gripper
{

namespace srv
{

namespace builder
{

class Init_GripperCommand_Response_message
{
public:
  explicit Init_GripperCommand_Response_message(::rg75_300_gripper::srv::GripperCommand_Response & msg)
  : msg_(msg)
  {}
  ::rg75_300_gripper::srv::GripperCommand_Response message(::rg75_300_gripper::srv::GripperCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rg75_300_gripper::srv::GripperCommand_Response msg_;
};

class Init_GripperCommand_Response_success
{
public:
  Init_GripperCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommand_Response_message success(::rg75_300_gripper::srv::GripperCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GripperCommand_Response_message(msg_);
  }

private:
  ::rg75_300_gripper::srv::GripperCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rg75_300_gripper::srv::GripperCommand_Response>()
{
  return rg75_300_gripper::srv::builder::Init_GripperCommand_Response_success();
}

}  // namespace rg75_300_gripper

#endif  // RG75_300_GRIPPER__SRV__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
