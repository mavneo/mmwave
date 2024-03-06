// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarTrackArray.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_ARRAY__TRAITS_HPP_
#define TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'track'
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_contents__traits.hpp"

namespace ti_mmwave_rospkg_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarTrackArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: num_tracks
  {
    out << "num_tracks: ";
    rosidl_generator_traits::value_to_yaml(msg.num_tracks, out);
    out << ", ";
  }

  // member: track
  {
    if (msg.track.size() == 0) {
      out << "track: []";
    } else {
      out << "track: [";
      size_t pending_items = msg.track.size();
      for (auto item : msg.track) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarTrackArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.stamp, out);
    out << "\n";
  }

  // member: num_tracks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_tracks: ";
    rosidl_generator_traits::value_to_yaml(msg.num_tracks, out);
    out << "\n";
  }

  // member: track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.track.size() == 0) {
      out << "track: []\n";
    } else {
      out << "track:\n";
      for (auto item : msg.track) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarTrackArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ti_mmwave_rospkg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ti_mmwave_rospkg_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ti_mmwave_rospkg_msgs::msg::RadarTrackArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  ti_mmwave_rospkg_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ti_mmwave_rospkg_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ti_mmwave_rospkg_msgs::msg::RadarTrackArray & msg)
{
  return ti_mmwave_rospkg_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ti_mmwave_rospkg_msgs::msg::RadarTrackArray>()
{
  return "ti_mmwave_rospkg_msgs::msg::RadarTrackArray";
}

template<>
inline const char * name<ti_mmwave_rospkg_msgs::msg::RadarTrackArray>()
{
  return "ti_mmwave_rospkg_msgs/msg/RadarTrackArray";
}

template<>
struct has_fixed_size<ti_mmwave_rospkg_msgs::msg::RadarTrackArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ti_mmwave_rospkg_msgs::msg::RadarTrackArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ti_mmwave_rospkg_msgs::msg::RadarTrackArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_ARRAY__TRAITS_HPP_
