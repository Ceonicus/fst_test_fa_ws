// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ev_08_suction_gripper:msg/SuctionState.idl
// generated code does not contain a copyright notice
#include "ev_08_suction_gripper/msg/detail/suction_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ev_08_suction_gripper/msg/detail/suction_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ev_08_suction_gripper
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
cdr_serialize(
  const ev_08_suction_gripper::msg::SuctionState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: suction_a_on
  cdr << (ros_message.suction_a_on ? true : false);
  // Member: suction_b_on
  cdr << (ros_message.suction_b_on ? true : false);
  // Member: force_a
  cdr << ros_message.force_a;
  // Member: force_b
  cdr << ros_message.force_b;
  // Member: status
  cdr << ros_message.status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ev_08_suction_gripper::msg::SuctionState & ros_message)
{
  // Member: suction_a_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.suction_a_on = tmp ? true : false;
  }

  // Member: suction_b_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.suction_b_on = tmp ? true : false;
  }

  // Member: force_a
  cdr >> ros_message.force_a;

  // Member: force_b
  cdr >> ros_message.force_b;

  // Member: status
  cdr >> ros_message.status;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
get_serialized_size(
  const ev_08_suction_gripper::msg::SuctionState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: suction_a_on
  {
    size_t item_size = sizeof(ros_message.suction_a_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: suction_b_on
  {
    size_t item_size = sizeof(ros_message.suction_b_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: force_a
  {
    size_t item_size = sizeof(ros_message.force_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: force_b
  {
    size_t item_size = sizeof(ros_message.force_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.status.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ev_08_suction_gripper
max_serialized_size_SuctionState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: suction_a_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: suction_b_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: force_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: force_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ev_08_suction_gripper::msg::SuctionState;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SuctionState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ev_08_suction_gripper::msg::SuctionState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SuctionState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ev_08_suction_gripper::msg::SuctionState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SuctionState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ev_08_suction_gripper::msg::SuctionState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SuctionState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SuctionState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SuctionState__callbacks = {
  "ev_08_suction_gripper::msg",
  "SuctionState",
  _SuctionState__cdr_serialize,
  _SuctionState__cdr_deserialize,
  _SuctionState__get_serialized_size,
  _SuctionState__max_serialized_size
};

static rosidl_message_type_support_t _SuctionState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SuctionState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ev_08_suction_gripper

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ev_08_suction_gripper
const rosidl_message_type_support_t *
get_message_type_support_handle<ev_08_suction_gripper::msg::SuctionState>()
{
  return &ev_08_suction_gripper::msg::typesupport_fastrtps_cpp::_SuctionState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ev_08_suction_gripper, msg, SuctionState)() {
  return &ev_08_suction_gripper::msg::typesupport_fastrtps_cpp::_SuctionState__handle;
}

#ifdef __cplusplus
}
#endif
