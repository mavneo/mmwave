// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarPointTrackID.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_point_track_id__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ti_mmwave_rospkg_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _RadarPointTrackID_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RadarPointTrackID_type_support_ids_t;

static const _RadarPointTrackID_type_support_ids_t _RadarPointTrackID_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RadarPointTrackID_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RadarPointTrackID_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RadarPointTrackID_type_support_symbol_names_t _RadarPointTrackID_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ti_mmwave_rospkg_msgs, msg, RadarPointTrackID)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ti_mmwave_rospkg_msgs, msg, RadarPointTrackID)),
  }
};

typedef struct _RadarPointTrackID_type_support_data_t
{
  void * data[2];
} _RadarPointTrackID_type_support_data_t;

static _RadarPointTrackID_type_support_data_t _RadarPointTrackID_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RadarPointTrackID_message_typesupport_map = {
  2,
  "ti_mmwave_rospkg_msgs",
  &_RadarPointTrackID_message_typesupport_ids.typesupport_identifier[0],
  &_RadarPointTrackID_message_typesupport_symbol_names.symbol_name[0],
  &_RadarPointTrackID_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RadarPointTrackID_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RadarPointTrackID_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace ti_mmwave_rospkg_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ti_mmwave_rospkg_msgs::msg::RadarPointTrackID>()
{
  return &::ti_mmwave_rospkg_msgs::msg::rosidl_typesupport_cpp::RadarPointTrackID_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ti_mmwave_rospkg_msgs, msg, RadarPointTrackID)() {
  return get_message_type_support_handle<ti_mmwave_rospkg_msgs::msg::RadarPointTrackID>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
