// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ev_08_suction_gripper:srv/SuctionCommand.idl
// generated code does not contain a copyright notice

#ifndef EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ev_08_suction_gripper/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ev_08_suction_gripper/srv/detail/suction_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ev_08_suction_gripper
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
cdr_serialize(
  const ev_08_suction_gripper::srv::SuctionCommand_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ev_08_suction_gripper::srv::SuctionCommand_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
get_serialized_size(
  const ev_08_suction_gripper::srv::SuctionCommand_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
max_serialized_size_SuctionCommand_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ev_08_suction_gripper

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ev_08_suction_gripper, srv, SuctionCommand_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ev_08_suction_gripper/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "ev_08_suction_gripper/srv/detail/suction_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace ev_08_suction_gripper
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
cdr_serialize(
  const ev_08_suction_gripper::srv::SuctionCommand_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ev_08_suction_gripper::srv::SuctionCommand_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
get_serialized_size(
  const ev_08_suction_gripper::srv::SuctionCommand_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
max_serialized_size_SuctionCommand_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ev_08_suction_gripper

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ev_08_suction_gripper, srv, SuctionCommand_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ev_08_suction_gripper/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ev_08_suction_gripper, srv, SuctionCommand)();

#ifdef __cplusplus
}
#endif

#endif  // EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
