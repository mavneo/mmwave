// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarTrackArray.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_ARRAY__STRUCT_H_
#define TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_ARRAY__STRUCT_H_

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
// Member 'track'
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_contents__struct.h"

/// Struct defined in msg/RadarTrackArray in the package ti_mmwave_rospkg_msgs.
typedef struct ti_mmwave_rospkg_msgs__msg__RadarTrackArray
{
  rosidl_runtime_c__String frame_id;
  uint32_t stamp;
  uint32_t num_tracks;
  ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence track;
} ti_mmwave_rospkg_msgs__msg__RadarTrackArray;

// Struct for a sequence of ti_mmwave_rospkg_msgs__msg__RadarTrackArray.
typedef struct ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence
{
  ti_mmwave_rospkg_msgs__msg__RadarTrackArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_ARRAY__STRUCT_H_
