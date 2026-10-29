// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rg75_300_gripper:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__TRAITS_HPP_
#define RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rg75_300_gripper/msg/detail/gripper_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rg75_300_gripper
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperState & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_open
  {
    out << "is_open: ";
    rosidl_generator_traits::value_to_yaml(msg.is_open, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: force
  {
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << ", ";
  }

  // member: activated
  {
    out << "activated: ";
    rosidl_generator_traits::value_to_yaml(msg.activated, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_open
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_open: ";
    rosidl_generator_traits::value_to_yaml(msg.is_open, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << "\n";
  }

  // member: activated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activated: ";
    rosidl_generator_traits::value_to_yaml(msg.activated, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rg75_300_gripper

namespace rosidl_generator_traits
{

[[deprecated("use rg75_300_gripper::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rg75_300_gripper::msg::GripperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rg75_300_gripper::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rg75_300_gripper::msg::to_yaml() instead")]]
inline std::string to_yaml(const rg75_300_gripper::msg::GripperState & msg)
{
  return rg75_300_gripper::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rg75_300_gripper::msg::GripperState>()
{
  return "rg75_300_gripper::msg::GripperState";
}

template<>
inline const char * name<rg75_300_gripper::msg::GripperState>()
{
  return "rg75_300_gripper/msg/GripperState";
}

template<>
struct has_fixed_size<rg75_300_gripper::msg::GripperState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rg75_300_gripper::msg::GripperState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rg75_300_gripper::msg::GripperState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RG75_300_GRIPPER__MSG__DETAIL__GRIPPER_STATE__TRAITS_HPP_
