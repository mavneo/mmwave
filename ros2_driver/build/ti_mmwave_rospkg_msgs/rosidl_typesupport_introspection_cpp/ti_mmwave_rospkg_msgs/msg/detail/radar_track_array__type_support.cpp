// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarTrackArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_array__struct.hpp"
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

void RadarTrackArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ti_mmwave_rospkg_msgs::msg::RadarTrackArray(_init);
}

void RadarTrackArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ti_mmwave_rospkg_msgs::msg::RadarTrackArray *>(message_memory);
  typed_message->~RadarTrackArray();
}

size_t size_function__RadarTrackArray__track(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ti_mmwave_rospkg_msgs::msg::RadarTrackContents> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RadarTrackArray__track(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ti_mmwave_rospkg_msgs::msg::RadarTrackContents> *>(untyped_member);
  return &member[index];
}

void * get_function__RadarTrackArray__track(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ti_mmwave_rospkg_msgs::msg::RadarTrackContents> *>(untyped_member);
  return &member[index];
}

void fetch_function__RadarTrackArray__track(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ti_mmwave_rospkg_msgs::msg::RadarTrackContents *>(
    get_const_function__RadarTrackArray__track(untyped_member, index));
  auto & value = *reinterpret_cast<ti_mmwave_rospkg_msgs::msg::RadarTrackContents *>(untyped_value);
  value = item;
}

void assign_function__RadarTrackArray__track(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ti_mmwave_rospkg_msgs::msg::RadarTrackContents *>(
    get_function__RadarTrackArray__track(untyped_member, index));
  const auto & value = *reinterpret_cast<const ti_mmwave_rospkg_msgs::msg::RadarTrackContents *>(untyped_value);
  item = value;
}

void resize_function__RadarTrackArray__track(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ti_mmwave_rospkg_msgs::msg::RadarTrackContents> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RadarTrackArray_message_member_array[4] = {
  {
    "frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ti_mmwave_rospkg_msgs::msg::RadarTrackArray, frame_id),  // bytes offset in struct
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
    offsetof(ti_mmwave_rospkg_msgs::msg::RadarTrackArray, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_tracks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ti_mmwave_rospkg_msgs::msg::RadarTrackArray, num_tracks),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "track",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ti_mmwave_rospkg_msgs::msg::RadarTrackContents>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ti_mmwave_rospkg_msgs::msg::RadarTrackArray, track),  // bytes offset in struct
    nullptr,  // default value
    size_function__RadarTrackArray__track,  // size() function pointer
    get_const_function__RadarTrackArray__track,  // get_const(index) function pointer
    get_function__RadarTrackArray__track,  // get(index) function pointer
    fetch_function__RadarTrackArray__track,  // fetch(index, &value) function pointer
    assign_function__RadarTrackArray__track,  // assign(index, value) function pointer
    resize_function__RadarTrackArray__track  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RadarTrackArray_message_members = {
  "ti_mmwave_rospkg_msgs::msg",  // message namespace
  "RadarTrackArray",  // message name
  4,  // number of fields
  sizeof(ti_mmwave_rospkg_msgs::msg::RadarTrackArray),
  RadarTrackArray_message_member_array,  // message members
  RadarTrackArray_init_function,  // function to initialize message memory (memory has to be allocated)
  RadarTrackArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RadarTrackArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RadarTrackArray_message_members,
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
get_message_type_support_handle<ti_mmwave_rospkg_msgs::msg::RadarTrackArray>()
{
  return &::ti_mmwave_rospkg_msgs::msg::rosidl_typesupport_introspection_cpp::RadarTrackArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ti_mmwave_rospkg_msgs, msg, RadarTrackArray)() {
  return &::ti_mmwave_rospkg_msgs::msg::rosidl_typesupport_introspection_cpp::RadarTrackArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
