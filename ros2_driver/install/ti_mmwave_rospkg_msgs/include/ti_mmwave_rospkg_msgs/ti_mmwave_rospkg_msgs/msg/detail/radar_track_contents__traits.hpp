// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarTrackContents.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_CONTENTS__TRAITS_HPP_
#define TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_CONTENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_contents__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ti_mmwave_rospkg_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarTrackContents & msg,
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

  // member: tid
  {
    out << "tid: ";
    rosidl_generator_traits::value_to_yaml(msg.tid, out);
    out << ", ";
  }

  // member: posx
  {
    out << "posx: ";
    rosidl_generator_traits::value_to_yaml(msg.posx, out);
    out << ", ";
  }

  // member: posy
  {
    out << "posy: ";
    rosidl_generator_traits::value_to_yaml(msg.posy, out);
    out << ", ";
  }

  // member: posz
  {
    out << "posz: ";
    rosidl_generator_traits::value_to_yaml(msg.posz, out);
    out << ", ";
  }

  // member: velx
  {
    out << "velx: ";
    rosidl_generator_traits::value_to_yaml(msg.velx, out);
    out << ", ";
  }

  // member: vely
  {
    out << "vely: ";
    rosidl_generator_traits::value_to_yaml(msg.vely, out);
    out << ", ";
  }

  // member: velz
  {
    out << "velz: ";
    rosidl_generator_traits::value_to_yaml(msg.velz, out);
    out << ", ";
  }

  // member: accx
  {
    out << "accx: ";
    rosidl_generator_traits::value_to_yaml(msg.accx, out);
    out << ", ";
  }

  // member: accy
  {
    out << "accy: ";
    rosidl_generator_traits::value_to_yaml(msg.accy, out);
    out << ", ";
  }

  // member: accz
  {
    out << "accz: ";
    rosidl_generator_traits::value_to_yaml(msg.accz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarTrackContents & msg,
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

  // member: tid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tid: ";
    rosidl_generator_traits::value_to_yaml(msg.tid, out);
    out << "\n";
  }

  // member: posx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posx: ";
    rosidl_generator_traits::value_to_yaml(msg.posx, out);
    out << "\n";
  }

  // member: posy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posy: ";
    rosidl_generator_traits::value_to_yaml(msg.posy, out);
    out << "\n";
  }

  // member: posz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posz: ";
    rosidl_generator_traits::value_to_yaml(msg.posz, out);
    out << "\n";
  }

  // member: velx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velx: ";
    rosidl_generator_traits::value_to_yaml(msg.velx, out);
    out << "\n";
  }

  // member: vely
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vely: ";
    rosidl_generator_traits::value_to_yaml(msg.vely, out);
    out << "\n";
  }

  // member: velz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velz: ";
    rosidl_generator_traits::value_to_yaml(msg.velz, out);
    out << "\n";
  }

  // member: accx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accx: ";
    rosidl_generator_traits::value_to_yaml(msg.accx, out);
    out << "\n";
  }

  // member: accy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accy: ";
    rosidl_generator_traits::value_to_yaml(msg.accy, out);
    out << "\n";
  }

  // member: accz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accz: ";
    rosidl_generator_traits::value_to_yaml(msg.accz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarTrackContents & msg, bool use_flow_style = false)
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
  const ti_mmwave_rospkg_msgs::msg::RadarTrackContents & msg,
  std::ostream & out, size_t indentation = 0)
{
  ti_mmwave_rospkg_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ti_mmwave_rospkg_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ti_mmwave_rospkg_msgs::msg::RadarTrackContents & msg)
{
  return ti_mmwave_rospkg_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ti_mmwave_rospkg_msgs::msg::RadarTrackContents>()
{
  return "ti_mmwave_rospkg_msgs::msg::RadarTrackContents";
}

template<>
inline const char * name<ti_mmwave_rospkg_msgs::msg::RadarTrackContents>()
{
  return "ti_mmwave_rospkg_msgs/msg/RadarTrackContents";
}

template<>
struct has_fixed_size<ti_mmwave_rospkg_msgs::msg::RadarTrackContents>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ti_mmwave_rospkg_msgs::msg::RadarTrackContents>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ti_mmwave_rospkg_msgs::msg::RadarTrackContents>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_CONTENTS__TRAITS_HPP_
