// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ev_08_suction_gripper:srv/SuctionCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ev_08_suction_gripper/srv/detail/suction_command__rosidl_typesupport_introspection_c.h"
#include "ev_08_suction_gripper/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ev_08_suction_gripper/srv/detail/suction_command__functions.h"
#include "ev_08_suction_gripper/srv/detail/suction_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ev_08_suction_gripper__srv__SuctionCommand_Request__rosidl_typesupport_introspection_c__SuctionCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ev_08_suction_gripper__srv__SuctionCommand_Request__init(message_memory);
}

void ev_08_suction_gripper__srv__SuctionCommand_Request__rosidl_typesupport_introspection_c__SuctionCommand_Request_fini_function(void * message_memory)
{
  ev_08_suction_gripper__srv__SuctionCommand_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ev_08_suction_gripper__srv__SuctionCommand_Request__rosidl_typesupport_introspection_c__SuctionCommand_Request_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ev_08_suction_gripper__srv__SuctionCommand_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ev_08_suction_gripper__srv__SuctionCommand_Request__rosidl_typesupport_introspection_c__SuctionCommand_Request_message_members = {
  "ev_08_suction_gripper__srv",  // message namespace
  "SuctionCommand_Request",  // message name
  1,  // number of fields
  sizeof(ev_08_suction_gripper__srv__SuctionCommand_Request),
  ev_08_suction_gripper__srv__SuctionCommand_Request__rosidl_typesupport_introspection_c__SuctionCommand_Request_message_member_array,  // message members
  ev_08_suction_gripper__srv__SuctionCommand_Request__rosidl_typesupport_introspection_c__SuctionCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ev_08_suction_gripper__srv__SuctionCommand_Request__rosidl_typesupport_introspection_c__SuctionCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ev_08_suction_gripper__srv__SuctionCommand_Request__rosidl_typesupport_introspection_c__SuctionCommand_Request_message_type_support_handle = {
  0,
  &ev_08_suction_gripper__srv__SuctionCommand_Request__rosidl_typesupport_introspection_c__SuctionCommand_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ev_08_suction_gripper
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ev_08_suction_gripper, srv, SuctionCommand_Request)() {
  if (!ev_08_suction_gripper__srv__SuctionCommand_Request__rosidl_typesupport_introspection_c__SuctionCommand_Request_message_type_support_handle.typesupport_identifier) {
    ev_08_suction_gripper__srv__SuctionCommand_Request__rosidl_typesupport_introspection_c__SuctionCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ev_08_suction_gripper__srv__SuctionCommand_Request__rosidl_typesupport_introspection_c__SuctionCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ev_08_suction_gripper/srv/detail/suction_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ev_08_suction_gripper/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ev_08_suction_gripper/srv/detail/suction_command__functions.h"
// already included above
// #include "ev_08_suction_gripper/srv/detail/suction_command__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ev_08_suction_gripper__srv__SuctionCommand_Response__rosidl_typesupport_introspection_c__SuctionCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ev_08_suction_gripper__srv__SuctionCommand_Response__init(message_memory);
}

void ev_08_suction_gripper__srv__SuctionCommand_Response__rosidl_typesupport_introspection_c__SuctionCommand_Response_fini_function(void * message_memory)
{
  ev_08_suction_gripper__srv__SuctionCommand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ev_08_suction_gripper__srv__SuctionCommand_Response__rosidl_typesupport_introspection_c__SuctionCommand_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ev_08_suction_gripper__srv__SuctionCommand_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ev_08_suction_gripper__srv__SuctionCommand_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ev_08_suction_gripper__srv__SuctionCommand_Response__rosidl_typesupport_introspection_c__SuctionCommand_Response_message_members = {
  "ev_08_suction_gripper__srv",  // message namespace
  "SuctionCommand_Response",  // message name
  2,  // number of fields
  sizeof(ev_08_suction_gripper__srv__SuctionCommand_Response),
  ev_08_suction_gripper__srv__SuctionCommand_Response__rosidl_typesupport_introspection_c__SuctionCommand_Response_message_member_array,  // message members
  ev_08_suction_gripper__srv__SuctionCommand_Response__rosidl_typesupport_introspection_c__SuctionCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ev_08_suction_gripper__srv__SuctionCommand_Response__rosidl_typesupport_introspection_c__SuctionCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ev_08_suction_gripper__srv__SuctionCommand_Response__rosidl_typesupport_introspection_c__SuctionCommand_Response_message_type_support_handle = {
  0,
  &ev_08_suction_gripper__srv__SuctionCommand_Response__rosidl_typesupport_introspection_c__SuctionCommand_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ev_08_suction_gripper
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ev_08_suction_gripper, srv, SuctionCommand_Response)() {
  if (!ev_08_suction_gripper__srv__SuctionCommand_Response__rosidl_typesupport_introspection_c__SuctionCommand_Response_message_type_support_handle.typesupport_identifier) {
    ev_08_suction_gripper__srv__SuctionCommand_Response__rosidl_typesupport_introspection_c__SuctionCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ev_08_suction_gripper__srv__SuctionCommand_Response__rosidl_typesupport_introspection_c__SuctionCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ev_08_suction_gripper/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ev_08_suction_gripper/srv/detail/suction_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ev_08_suction_gripper__srv__detail__suction_command__rosidl_typesupport_introspection_c__SuctionCommand_service_members = {
  "ev_08_suction_gripper__srv",  // service namespace
  "SuctionCommand",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ev_08_suction_gripper__srv__detail__suction_command__rosidl_typesupport_introspection_c__SuctionCommand_Request_message_type_support_handle,
  NULL  // response message
  // ev_08_suction_gripper__srv__detail__suction_command__rosidl_typesupport_introspection_c__SuctionCommand_Response_message_type_support_handle
};

static rosidl_service_type_support_t ev_08_suction_gripper__srv__detail__suction_command__rosidl_typesupport_introspection_c__SuctionCommand_service_type_support_handle = {
  0,
  &ev_08_suction_gripper__srv__detail__suction_command__rosidl_typesupport_introspection_c__SuctionCommand_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ev_08_suction_gripper, srv, SuctionCommand_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ev_08_suction_gripper, srv, SuctionCommand_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ev_08_suction_gripper
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ev_08_suction_gripper, srv, SuctionCommand)() {
  if (!ev_08_suction_gripper__srv__detail__suction_command__rosidl_typesupport_introspection_c__SuctionCommand_service_type_support_handle.typesupport_identifier) {
    ev_08_suction_gripper__srv__detail__suction_command__rosidl_typesupport_introspection_c__SuctionCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ev_08_suction_gripper__srv__detail__suction_command__rosidl_typesupport_introspection_c__SuctionCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ev_08_suction_gripper, srv, SuctionCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ev_08_suction_gripper, srv, SuctionCommand_Response)()->data;
  }

  return &ev_08_suction_gripper__srv__detail__suction_command__rosidl_typesupport_introspection_c__SuctionCommand_service_type_support_handle;
}
