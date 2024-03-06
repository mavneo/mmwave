// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarTrackArray.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_ARRAY__BUILDER_HPP_
#define TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ti_mmwave_rospkg_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarTrackArray_track
{
public:
  explicit Init_RadarTrackArray_track(::ti_mmwave_rospkg_msgs::msg::RadarTrackArray & msg)
  : msg_(msg)
  {}
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackArray track(::ti_mmwave_rospkg_msgs::msg::RadarTrackArray::_track_type arg)
  {
    msg_.track = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackArray msg_;
};

class Init_RadarTrackArray_num_tracks
{
public:
  explicit Init_RadarTrackArray_num_tracks(::ti_mmwave_rospkg_msgs::msg::RadarTrackArray & msg)
  : msg_(msg)
  {}
  Init_RadarTrackArray_track num_tracks(::ti_mmwave_rospkg_msgs::msg::RadarTrackArray::_num_tracks_type arg)
  {
    msg_.num_tracks = std::move(arg);
    return Init_RadarTrackArray_track(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackArray msg_;
};

class Init_RadarTrackArray_stamp
{
public:
  explicit Init_RadarTrackArray_stamp(::ti_mmwave_rospkg_msgs::msg::RadarTrackArray & msg)
  : msg_(msg)
  {}
  Init_RadarTrackArray_num_tracks stamp(::ti_mmwave_rospkg_msgs::msg::RadarTrackArray::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RadarTrackArray_num_tracks(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackArray msg_;
};

class Init_RadarTrackArray_frame_id
{
public:
  Init_RadarTrackArray_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarTrackArray_stamp frame_id(::ti_mmwave_rospkg_msgs::msg::RadarTrackArray::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_RadarTrackArray_stamp(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ti_mmwave_rospkg_msgs::msg::RadarTrackArray>()
{
  return ti_mmwave_rospkg_msgs::msg::builder::Init_RadarTrackArray_frame_id();
}

}  // namespace ti_mmwave_rospkg_msgs

#endif  // TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_ARRAY__BUILDER_HPP_
