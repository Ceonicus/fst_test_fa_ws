// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rg75_300_gripper:srv/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef RG75_300_GRIPPER__SRV__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
#define RG75_300_GRIPPER__SRV__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rg75_300_gripper/srv/detail/gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rg75_300_gripper
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
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
  const GripperCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const GripperCommand_Request & msg, bool use_flow_style = false)
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

}  // namespace rg75_300_gripper

namespace rosidl_generator_traits
{

[[deprecated("use rg75_300_gripper::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rg75_300_gripper::srv::GripperCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rg75_300_gripper::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rg75_300_gripper::srv::to_yaml() instead")]]
inline std::string to_yaml(const rg75_300_gripper::srv::GripperCommand_Request & msg)
{
  return rg75_300_gripper::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rg75_300_gripper::srv::GripperCommand_Request>()
{
  return "rg75_300_gripper::srv::GripperCommand_Request";
}

template<>
inline const char * name<rg75_300_gripper::srv::GripperCommand_Request>()
{
  return "rg75_300_gripper/srv/GripperCommand_Request";
}

template<>
struct has_fixed_size<rg75_300_gripper::srv::GripperCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rg75_300_gripper::srv::GripperCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rg75_300_gripper::srv::GripperCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rg75_300_gripper
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperCommand_Response & msg,
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
  const GripperCommand_Response & msg,
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

inline std::string to_yaml(const GripperCommand_Response & msg, bool use_flow_style = false)
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

}  // namespace rg75_300_gripper

namespace rosidl_generator_traits
{

[[deprecated("use rg75_300_gripper::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rg75_300_gripper::srv::GripperCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rg75_300_gripper::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rg75_300_gripper::srv::to_yaml() instead")]]
inline std::string to_yaml(const rg75_300_gripper::srv::GripperCommand_Response & msg)
{
  return rg75_300_gripper::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rg75_300_gripper::srv::GripperCommand_Response>()
{
  return "rg75_300_gripper::srv::GripperCommand_Response";
}

template<>
inline const char * name<rg75_300_gripper::srv::GripperCommand_Response>()
{
  return "rg75_300_gripper/srv/GripperCommand_Response";
}

template<>
struct has_fixed_size<rg75_300_gripper::srv::GripperCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rg75_300_gripper::srv::GripperCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rg75_300_gripper::srv::GripperCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rg75_300_gripper::srv::GripperCommand>()
{
  return "rg75_300_gripper::srv::GripperCommand";
}

template<>
inline const char * name<rg75_300_gripper::srv::GripperCommand>()
{
  return "rg75_300_gripper/srv/GripperCommand";
}

template<>
struct has_fixed_size<rg75_300_gripper::srv::GripperCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<rg75_300_gripper::srv::GripperCommand_Request>::value &&
    has_fixed_size<rg75_300_gripper::srv::GripperCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<rg75_300_gripper::srv::GripperCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<rg75_300_gripper::srv::GripperCommand_Request>::value &&
    has_bounded_size<rg75_300_gripper::srv::GripperCommand_Response>::value
  >
{
};

template<>
struct is_service<rg75_300_gripper::srv::GripperCommand>
  : std::true_type
{
};

template<>
struct is_service_request<rg75_300_gripper::srv::GripperCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rg75_300_gripper::srv::GripperCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RG75_300_GRIPPER__SRV__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
