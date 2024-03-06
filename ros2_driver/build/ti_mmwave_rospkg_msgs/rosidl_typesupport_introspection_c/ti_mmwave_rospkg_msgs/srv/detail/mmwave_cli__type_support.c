// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ti_mmwave_rospkg_msgs:srv/MmwaveCli.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ti_mmwave_rospkg_msgs/srv/detail/mmwave_cli__rosidl_typesupport_introspection_c.h"
#include "ti_mmwave_rospkg_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ti_mmwave_rospkg_msgs/srv/detail/mmwave_cli__functions.h"
#include "ti_mmwave_rospkg_msgs/srv/detail/mmwave_cli__struct.h"


// Include directives for member types
// Member `comm`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__rosidl_typesupport_introspection_c__MmwaveCli_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__init(message_memory);
}

void ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__rosidl_typesupport_introspection_c__MmwaveCli_Request_fini_function(void * message_memory)
{
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__rosidl_typesupport_introspection_c__MmwaveCli_Request_message_member_array[1] = {
  {
    "comm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request, comm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__rosidl_typesupport_introspection_c__MmwaveCli_Request_message_members = {
  "ti_mmwave_rospkg_msgs__srv",  // message namespace
  "MmwaveCli_Request",  // message name
  1,  // number of fields
  sizeof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request),
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__rosidl_typesupport_introspection_c__MmwaveCli_Request_message_member_array,  // message members
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__rosidl_typesupport_introspection_c__MmwaveCli_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__rosidl_typesupport_introspection_c__MmwaveCli_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__rosidl_typesupport_introspection_c__MmwaveCli_Request_message_type_support_handle = {
  0,
  &ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__rosidl_typesupport_introspection_c__MmwaveCli_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ti_mmwave_rospkg_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ti_mmwave_rospkg_msgs, srv, MmwaveCli_Request)() {
  if (!ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__rosidl_typesupport_introspection_c__MmwaveCli_Request_message_type_support_handle.typesupport_identifier) {
    ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__rosidl_typesupport_introspection_c__MmwaveCli_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__rosidl_typesupport_introspection_c__MmwaveCli_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ti_mmwave_rospkg_msgs/srv/detail/mmwave_cli__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ti_mmwave_rospkg_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ti_mmwave_rospkg_msgs/srv/detail/mmwave_cli__functions.h"
// already included above
// #include "ti_mmwave_rospkg_msgs/srv/detail/mmwave_cli__struct.h"


// Include directives for member types
// Member `resp`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__rosidl_typesupport_introspection_c__MmwaveCli_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__init(message_memory);
}

void ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__rosidl_typesupport_introspection_c__MmwaveCli_Response_fini_function(void * message_memory)
{
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__rosidl_typesupport_introspection_c__MmwaveCli_Response_message_member_array[1] = {
  {
    "resp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response, resp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__rosidl_typesupport_introspection_c__MmwaveCli_Response_message_members = {
  "ti_mmwave_rospkg_msgs__srv",  // message namespace
  "MmwaveCli_Response",  // message name
  1,  // number of fields
  sizeof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response),
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__rosidl_typesupport_introspection_c__MmwaveCli_Response_message_member_array,  // message members
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__rosidl_typesupport_introspection_c__MmwaveCli_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__rosidl_typesupport_introspection_c__MmwaveCli_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__rosidl_typesupport_introspection_c__MmwaveCli_Response_message_type_support_handle = {
  0,
  &ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__rosidl_typesupport_introspection_c__MmwaveCli_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ti_mmwave_rospkg_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ti_mmwave_rospkg_msgs, srv, MmwaveCli_Response)() {
  if (!ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__rosidl_typesupport_introspection_c__MmwaveCli_Response_message_type_support_handle.typesupport_identifier) {
    ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__rosidl_typesupport_introspection_c__MmwaveCli_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__rosidl_typesupport_introspection_c__MmwaveCli_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ti_mmwave_rospkg_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ti_mmwave_rospkg_msgs/srv/detail/mmwave_cli__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ti_mmwave_rospkg_msgs__srv__detail__mmwave_cli__rosidl_typesupport_introspection_c__MmwaveCli_service_members = {
  "ti_mmwave_rospkg_msgs__srv",  // service namespace
  "MmwaveCli",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ti_mmwave_rospkg_msgs__srv__detail__mmwave_cli__rosidl_typesupport_introspection_c__MmwaveCli_Request_message_type_support_handle,
  NULL  // response message
  // ti_mmwave_rospkg_msgs__srv__detail__mmwave_cli__rosidl_typesupport_introspection_c__MmwaveCli_Response_message_type_support_handle
};

static rosidl_service_type_support_t ti_mmwave_rospkg_msgs__srv__detail__mmwave_cli__rosidl_typesupport_introspection_c__MmwaveCli_service_type_support_handle = {
  0,
  &ti_mmwave_rospkg_msgs__srv__detail__mmwave_cli__rosidl_typesupport_introspection_c__MmwaveCli_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ti_mmwave_rospkg_msgs, srv, MmwaveCli_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ti_mmwave_rospkg_msgs, srv, MmwaveCli_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ti_mmwave_rospkg_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ti_mmwave_rospkg_msgs, srv, MmwaveCli)() {
  if (!ti_mmwave_rospkg_msgs__srv__detail__mmwave_cli__rosidl_typesupport_introspection_c__MmwaveCli_service_type_support_handle.typesupport_identifier) {
    ti_mmwave_rospkg_msgs__srv__detail__mmwave_cli__rosidl_typesupport_introspection_c__MmwaveCli_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ti_mmwave_rospkg_msgs__srv__detail__mmwave_cli__rosidl_typesupport_introspection_c__MmwaveCli_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ti_mmwave_rospkg_msgs, srv, MmwaveCli_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ti_mmwave_rospkg_msgs, srv, MmwaveCli_Response)()->data;
  }

  return &ti_mmwave_rospkg_msgs__srv__detail__mmwave_cli__rosidl_typesupport_introspection_c__MmwaveCli_service_type_support_handle;
}
