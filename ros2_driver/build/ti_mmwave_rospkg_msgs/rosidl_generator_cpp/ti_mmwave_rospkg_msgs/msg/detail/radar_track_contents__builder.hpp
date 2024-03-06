// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarTrackContents.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_CONTENTS__BUILDER_HPP_
#define TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_CONTENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_contents__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ti_mmwave_rospkg_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarTrackContents_accz
{
public:
  explicit Init_RadarTrackContents_accz(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents & msg)
  : msg_(msg)
  {}
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackContents accz(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents::_accz_type arg)
  {
    msg_.accz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackContents msg_;
};

class Init_RadarTrackContents_accy
{
public:
  explicit Init_RadarTrackContents_accy(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents & msg)
  : msg_(msg)
  {}
  Init_RadarTrackContents_accz accy(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents::_accy_type arg)
  {
    msg_.accy = std::move(arg);
    return Init_RadarTrackContents_accz(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackContents msg_;
};

class Init_RadarTrackContents_accx
{
public:
  explicit Init_RadarTrackContents_accx(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents & msg)
  : msg_(msg)
  {}
  Init_RadarTrackContents_accy accx(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents::_accx_type arg)
  {
    msg_.accx = std::move(arg);
    return Init_RadarTrackContents_accy(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackContents msg_;
};

class Init_RadarTrackContents_velz
{
public:
  explicit Init_RadarTrackContents_velz(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents & msg)
  : msg_(msg)
  {}
  Init_RadarTrackContents_accx velz(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents::_velz_type arg)
  {
    msg_.velz = std::move(arg);
    return Init_RadarTrackContents_accx(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackContents msg_;
};

class Init_RadarTrackContents_vely
{
public:
  explicit Init_RadarTrackContents_vely(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents & msg)
  : msg_(msg)
  {}
  Init_RadarTrackContents_velz vely(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents::_vely_type arg)
  {
    msg_.vely = std::move(arg);
    return Init_RadarTrackContents_velz(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackContents msg_;
};

class Init_RadarTrackContents_velx
{
public:
  explicit Init_RadarTrackContents_velx(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents & msg)
  : msg_(msg)
  {}
  Init_RadarTrackContents_vely velx(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents::_velx_type arg)
  {
    msg_.velx = std::move(arg);
    return Init_RadarTrackContents_vely(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackContents msg_;
};

class Init_RadarTrackContents_posz
{
public:
  explicit Init_RadarTrackContents_posz(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents & msg)
  : msg_(msg)
  {}
  Init_RadarTrackContents_velx posz(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents::_posz_type arg)
  {
    msg_.posz = std::move(arg);
    return Init_RadarTrackContents_velx(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackContents msg_;
};

class Init_RadarTrackContents_posy
{
public:
  explicit Init_RadarTrackContents_posy(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents & msg)
  : msg_(msg)
  {}
  Init_RadarTrackContents_posz posy(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents::_posy_type arg)
  {
    msg_.posy = std::move(arg);
    return Init_RadarTrackContents_posz(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackContents msg_;
};

class Init_RadarTrackContents_posx
{
public:
  explicit Init_RadarTrackContents_posx(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents & msg)
  : msg_(msg)
  {}
  Init_RadarTrackContents_posy posx(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents::_posx_type arg)
  {
    msg_.posx = std::move(arg);
    return Init_RadarTrackContents_posy(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackContents msg_;
};

class Init_RadarTrackContents_tid
{
public:
  explicit Init_RadarTrackContents_tid(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents & msg)
  : msg_(msg)
  {}
  Init_RadarTrackContents_posx tid(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents::_tid_type arg)
  {
    msg_.tid = std::move(arg);
    return Init_RadarTrackContents_posx(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackContents msg_;
};

class Init_RadarTrackContents_stamp
{
public:
  explicit Init_RadarTrackContents_stamp(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents & msg)
  : msg_(msg)
  {}
  Init_RadarTrackContents_tid stamp(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RadarTrackContents_tid(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackContents msg_;
};

class Init_RadarTrackContents_frame_id
{
public:
  Init_RadarTrackContents_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarTrackContents_stamp frame_id(::ti_mmwave_rospkg_msgs::msg::RadarTrackContents::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_RadarTrackContents_stamp(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarTrackContents msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ti_mmwave_rospkg_msgs::msg::RadarTrackContents>()
{
  return ti_mmwave_rospkg_msgs::msg::builder::Init_RadarTrackContents_frame_id();
}

}  // namespace ti_mmwave_rospkg_msgs

#endif  // TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_CONTENTS__BUILDER_HPP_
