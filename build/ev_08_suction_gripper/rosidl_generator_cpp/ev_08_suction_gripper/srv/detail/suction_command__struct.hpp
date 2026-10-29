// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ev_08_suction_gripper:srv/SuctionCommand.idl
// generated code does not contain a copyright notice

#ifndef EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__STRUCT_HPP_
#define EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ev_08_suction_gripper__srv__SuctionCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__ev_08_suction_gripper__srv__SuctionCommand_Request __declspec(deprecated)
#endif

namespace ev_08_suction_gripper
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SuctionCommand_Request_
{
  using Type = SuctionCommand_Request_<ContainerAllocator>;

  explicit SuctionCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  explicit SuctionCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
    }
  }

  // field types and members
  using _command_type =
    int8_t;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const int8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ev_08_suction_gripper::srv::SuctionCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ev_08_suction_gripper::srv::SuctionCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ev_08_suction_gripper::srv::SuctionCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ev_08_suction_gripper::srv::SuctionCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ev_08_suction_gripper::srv::SuctionCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ev_08_suction_gripper::srv::SuctionCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ev_08_suction_gripper::srv::SuctionCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ev_08_suction_gripper::srv::SuctionCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ev_08_suction_gripper::srv::SuctionCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ev_08_suction_gripper::srv::SuctionCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ev_08_suction_gripper__srv__SuctionCommand_Request
    std::shared_ptr<ev_08_suction_gripper::srv::SuctionCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ev_08_suction_gripper__srv__SuctionCommand_Request
    std::shared_ptr<ev_08_suction_gripper::srv::SuctionCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SuctionCommand_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const SuctionCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SuctionCommand_Request_

// alias to use template instance with default allocator
using SuctionCommand_Request =
  ev_08_suction_gripper::srv::SuctionCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ev_08_suction_gripper


#ifndef _WIN32
# define DEPRECATED__ev_08_suction_gripper__srv__SuctionCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__ev_08_suction_gripper__srv__SuctionCommand_Response __declspec(deprecated)
#endif

namespace ev_08_suction_gripper
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SuctionCommand_Response_
{
  using Type = SuctionCommand_Response_<ContainerAllocator>;

  explicit SuctionCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SuctionCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ev_08_suction_gripper::srv::SuctionCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ev_08_suction_gripper::srv::SuctionCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ev_08_suction_gripper::srv::SuctionCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ev_08_suction_gripper::srv::SuctionCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ev_08_suction_gripper::srv::SuctionCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ev_08_suction_gripper::srv::SuctionCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ev_08_suction_gripper::srv::SuctionCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ev_08_suction_gripper::srv::SuctionCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ev_08_suction_gripper::srv::SuctionCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ev_08_suction_gripper::srv::SuctionCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ev_08_suction_gripper__srv__SuctionCommand_Response
    std::shared_ptr<ev_08_suction_gripper::srv::SuctionCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ev_08_suction_gripper__srv__SuctionCommand_Response
    std::shared_ptr<ev_08_suction_gripper::srv::SuctionCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SuctionCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SuctionCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SuctionCommand_Response_

// alias to use template instance with default allocator
using SuctionCommand_Response =
  ev_08_suction_gripper::srv::SuctionCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ev_08_suction_gripper

namespace ev_08_suction_gripper
{

namespace srv
{

struct SuctionCommand
{
  using Request = ev_08_suction_gripper::srv::SuctionCommand_Request;
  using Response = ev_08_suction_gripper::srv::SuctionCommand_Response;
};

}  // namespace srv

}  // namespace ev_08_suction_gripper

#endif  // EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__STRUCT_HPP_
