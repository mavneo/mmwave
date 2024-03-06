// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarPointTrackID.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_POINT_TRACK_ID__STRUCT_H_
#define TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_POINT_TRACK_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RadarPointTrackID in the package ti_mmwave_rospkg_msgs.
typedef struct ti_mmwave_rospkg_msgs__msg__RadarPointTrackID
{
  rosidl_runtime_c__String frame_id;
  uint32_t stamp;
  uint8_t tid;
} ti_mmwave_rospkg_msgs__msg__RadarPointTrackID;

// Struct for a sequence of ti_mmwave_rospkg_msgs__msg__RadarPointTrackID.
typedef struct ti_mmwave_rospkg_msgs__msg__RadarPointTrackID__Sequence
{
  ti_mmwave_rospkg_msgs__msg__RadarPointTrackID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ti_mmwave_rospkg_msgs__msg__RadarPointTrackID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_POINT_TRACK_ID__STRUCT_H_
