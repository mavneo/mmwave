// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarPointTrackID.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_point_track_id__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ti_mmwave_rospkg_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RadarPointTrackID_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ti_mmwave_rospkg_msgs::msg::RadarPointTrackID(_init);
}

void RadarPointTrackID_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ti_mmwave_rospkg_msgs::msg::RadarPointTrackID *>(message_memory);
  typed_message->~RadarPointTrackID();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RadarPointTrackID_message_member_array[3] = {
  {
    "frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ti_mmwave_rospkg_msgs::msg::RadarPointTrackID, frame_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ti_mmwave_rospkg_msgs::msg::RadarPointTrackID, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ti_mmwave_rospkg_msgs::msg::RadarPointTrackID, tid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RadarPointTrackID_message_members = {
  "ti_mmwave_rospkg_msgs::msg",  // message namespace
  "RadarPointTrackID",  // message name
  3,  // number of fields
  sizeof(ti_mmwave_rospkg_msgs::msg::RadarPointTrackID),
  RadarPointTrackID_message_member_array,  // message members
  RadarPointTrackID_init_function,  // function to initialize message memory (memory has to be allocated)
  RadarPointTrackID_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RadarPointTrackID_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RadarPointTrackID_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ti_mmwave_rospkg_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ti_mmwave_rospkg_msgs::msg::RadarPointTrackID>()
{
  return &::ti_mmwave_rospkg_msgs::msg::rosidl_typesupport_introspection_cpp::RadarPointTrackID_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ti_mmwave_rospkg_msgs, msg, RadarPointTrackID)() {
  return &::ti_mmwave_rospkg_msgs::msg::rosidl_typesupport_introspection_cpp::RadarPointTrackID_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
