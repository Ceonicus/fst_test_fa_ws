// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ev_08_suction_gripper:msg/SuctionState.idl
// generated code does not contain a copyright notice

#ifndef EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__TRAITS_HPP_
#define EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ev_08_suction_gripper/msg/detail/suction_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ev_08_suction_gripper
{

namespace msg
{

inline void to_flow_style_yaml(
  const SuctionState & msg,
  std::ostream & out)
{
  out << "{";
  // member: suction_a_on
  {
    out << "suction_a_on: ";
    rosidl_generator_traits::value_to_yaml(msg.suction_a_on, out);
    out << ", ";
  }

  // member: suction_b_on
  {
    out << "suction_b_on: ";
    rosidl_generator_traits::value_to_yaml(msg.suction_b_on, out);
    out << ", ";
  }

  // member: force_a
  {
    out << "force_a: ";
    rosidl_generator_traits::value_to_yaml(msg.force_a, out);
    out << ", ";
  }

  // member: force_b
  {
    out << "force_b: ";
    rosidl_generator_traits::value_to_yaml(msg.force_b, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SuctionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: suction_a_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "suction_a_on: ";
    rosidl_generator_traits::value_to_yaml(msg.suction_a_on, out);
    out << "\n";
  }

  // member: suction_b_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "suction_b_on: ";
    rosidl_generator_traits::value_to_yaml(msg.suction_b_on, out);
    out << "\n";
  }

  // member: force_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_a: ";
    rosidl_generator_traits::value_to_yaml(msg.force_a, out);
    out << "\n";
  }

  // member: force_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_b: ";
    rosidl_generator_traits::value_to_yaml(msg.force_b, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SuctionState & msg, bool use_flow_style = false)
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

}  // namespace ev_08_suction_gripper

namespace rosidl_generator_traits
{

[[deprecated("use ev_08_suction_gripper::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ev_08_suction_gripper::msg::SuctionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  ev_08_suction_gripper::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ev_08_suction_gripper::msg::to_yaml() instead")]]
inline std::string to_yaml(const ev_08_suction_gripper::msg::SuctionState & msg)
{
  return ev_08_suction_gripper::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ev_08_suction_gripper::msg::SuctionState>()
{
  return "ev_08_suction_gripper::msg::SuctionState";
}

template<>
inline const char * name<ev_08_suction_gripper::msg::SuctionState>()
{
  return "ev_08_suction_gripper/msg/SuctionState";
}

template<>
struct has_fixed_size<ev_08_suction_gripper::msg::SuctionState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ev_08_suction_gripper::msg::SuctionState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ev_08_suction_gripper::msg::SuctionState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EV_08_SUCTION_GRIPPER__MSG__DETAIL__SUCTION_STATE__TRAITS_HPP_
