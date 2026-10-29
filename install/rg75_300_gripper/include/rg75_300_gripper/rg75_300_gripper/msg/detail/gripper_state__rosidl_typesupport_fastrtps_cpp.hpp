// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rg75_300_gripper:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rg75_300_gripper/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rg75_300_gripper/msg/detail/gripper_state__struct.hpp"

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

namespace rg75_300_gripper
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rg75_300_gripper
cdr_serialize(
  const rg75_300_gripper::msg::GripperState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rg75_300_gripper
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rg75_300_gripper::msg::GripperState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rg75_300_gripper
get_serialized_size(
  const rg75_300_gripper::msg::GripperState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rg75_300_gripper
max_serialized_size_GripperState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rg75_300_gripper

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rg75_300_gripper
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rg75_300_gripper, msg, GripperState)();

#ifdef __cplusplus
}
#endif

#endif  // RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
