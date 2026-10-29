// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ev_08_suction_gripper:srv/SuctionCommand.idl
// generated code does not contain a copyright notice

#ifndef EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__TRAITS_HPP_
#define EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ev_08_suction_gripper/srv/detail/suction_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ev_08_suction_gripper
{

namespace srv
{

inline void to_flow_style_yaml(
  const SuctionCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SuctionCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SuctionCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ev_08_suction_gripper

namespace rosidl_generator_traits
{

[[deprecated("use ev_08_suction_gripper::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ev_08_suction_gripper::srv::SuctionCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ev_08_suction_gripper::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ev_08_suction_gripper::srv::to_yaml() instead")]]
inline std::string to_yaml(const ev_08_suction_gripper::srv::SuctionCommand_Request & msg)
{
  return ev_08_suction_gripper::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ev_08_suction_gripper::srv::SuctionCommand_Request>()
{
  return "ev_08_suction_gripper::srv::SuctionCommand_Request";
}

template<>
inline const char * name<ev_08_suction_gripper::srv::SuctionCommand_Request>()
{
  return "ev_08_suction_gripper/srv/SuctionCommand_Request";
}

template<>
struct has_fixed_size<ev_08_suction_gripper::srv::SuctionCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ev_08_suction_gripper::srv::SuctionCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ev_08_suction_gripper::srv::SuctionCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ev_08_suction_gripper
{

namespace srv
{

inline void to_flow_style_yaml(
  const SuctionCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SuctionCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SuctionCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ev_08_suction_gripper

namespace rosidl_generator_traits
{

[[deprecated("use ev_08_suction_gripper::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ev_08_suction_gripper::srv::SuctionCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ev_08_suction_gripper::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ev_08_suction_gripper::srv::to_yaml() instead")]]
inline std::string to_yaml(const ev_08_suction_gripper::srv::SuctionCommand_Response & msg)
{
  return ev_08_suction_gripper::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ev_08_suction_gripper::srv::SuctionCommand_Response>()
{
  return "ev_08_suction_gripper::srv::SuctionCommand_Response";
}

template<>
inline const char * name<ev_08_suction_gripper::srv::SuctionCommand_Response>()
{
  return "ev_08_suction_gripper/srv/SuctionCommand_Response";
}

template<>
struct has_fixed_size<ev_08_suction_gripper::srv::SuctionCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ev_08_suction_gripper::srv::SuctionCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ev_08_suction_gripper::srv::SuctionCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ev_08_suction_gripper::srv::SuctionCommand>()
{
  return "ev_08_suction_gripper::srv::SuctionCommand";
}

template<>
inline const char * name<ev_08_suction_gripper::srv::SuctionCommand>()
{
  return "ev_08_suction_gripper/srv/SuctionCommand";
}

template<>
struct has_fixed_size<ev_08_suction_gripper::srv::SuctionCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<ev_08_suction_gripper::srv::SuctionCommand_Request>::value &&
    has_fixed_size<ev_08_suction_gripper::srv::SuctionCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<ev_08_suction_gripper::srv::SuctionCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<ev_08_suction_gripper::srv::SuctionCommand_Request>::value &&
    has_bounded_size<ev_08_suction_gripper::srv::SuctionCommand_Response>::value
  >
{
};

template<>
struct is_service<ev_08_suction_gripper::srv::SuctionCommand>
  : std::true_type
{
};

template<>
struct is_service_request<ev_08_suction_gripper::srv::SuctionCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ev_08_suction_gripper::srv::SuctionCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EV_08_SUCTION_GRIPPER__SRV__DETAIL__SUCTION_COMMAND__TRAITS_HPP_
