// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarScan.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_SCAN__BUILDER_HPP_
#define TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ti_mmwave_rospkg_msgs/msg/detail/radar_scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ti_mmwave_rospkg_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarScan_intensity
{
public:
  explicit Init_RadarScan_intensity(::ti_mmwave_rospkg_msgs::msg::RadarScan & msg)
  : msg_(msg)
  {}
  ::ti_mmwave_rospkg_msgs::msg::RadarScan intensity(::ti_mmwave_rospkg_msgs::msg::RadarScan::_intensity_type arg)
  {
    msg_.intensity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarScan msg_;
};

class Init_RadarScan_bearing
{
public:
  explicit Init_RadarScan_bearing(::ti_mmwave_rospkg_msgs::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_intensity bearing(::ti_mmwave_rospkg_msgs::msg::RadarScan::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return Init_RadarScan_intensity(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarScan msg_;
};

class Init_RadarScan_doppler_bin
{
public:
  explicit Init_RadarScan_doppler_bin(::ti_mmwave_rospkg_msgs::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_bearing doppler_bin(::ti_mmwave_rospkg_msgs::msg::RadarScan::_doppler_bin_type arg)
  {
    msg_.doppler_bin = std::move(arg);
    return Init_RadarScan_bearing(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarScan msg_;
};

class Init_RadarScan_velocity
{
public:
  explicit Init_RadarScan_velocity(::ti_mmwave_rospkg_msgs::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_doppler_bin velocity(::ti_mmwave_rospkg_msgs::msg::RadarScan::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RadarScan_doppler_bin(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarScan msg_;
};

class Init_RadarScan_range
{
public:
  explicit Init_RadarScan_range(::ti_mmwave_rospkg_msgs::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_velocity range(::ti_mmwave_rospkg_msgs::msg::RadarScan::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_RadarScan_velocity(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarScan msg_;
};

class Init_RadarScan_z
{
public:
  explicit Init_RadarScan_z(::ti_mmwave_rospkg_msgs::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_range z(::ti_mmwave_rospkg_msgs::msg::RadarScan::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_RadarScan_range(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarScan msg_;
};

class Init_RadarScan_y
{
public:
  explicit Init_RadarScan_y(::ti_mmwave_rospkg_msgs::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_z y(::ti_mmwave_rospkg_msgs::msg::RadarScan::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RadarScan_z(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarScan msg_;
};

class Init_RadarScan_x
{
public:
  explicit Init_RadarScan_x(::ti_mmwave_rospkg_msgs::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_y x(::ti_mmwave_rospkg_msgs::msg::RadarScan::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RadarScan_y(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarScan msg_;
};

class Init_RadarScan_point_id
{
public:
  explicit Init_RadarScan_point_id(::ti_mmwave_rospkg_msgs::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_x point_id(::ti_mmwave_rospkg_msgs::msg::RadarScan::_point_id_type arg)
  {
    msg_.point_id = std::move(arg);
    return Init_RadarScan_x(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarScan msg_;
};

class Init_RadarScan_frame_id
{
public:
  explicit Init_RadarScan_frame_id(::ti_mmwave_rospkg_msgs::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_point_id frame_id(::ti_mmwave_rospkg_msgs::msg::RadarScan::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_RadarScan_point_id(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarScan msg_;
};

class Init_RadarScan_stamp
{
public:
  explicit Init_RadarScan_stamp(::ti_mmwave_rospkg_msgs::msg::RadarScan & msg)
  : msg_(msg)
  {}
  Init_RadarScan_frame_id stamp(::ti_mmwave_rospkg_msgs::msg::RadarScan::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RadarScan_frame_id(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarScan msg_;
};

class Init_RadarScan_seq
{
public:
  Init_RadarScan_seq()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarScan_stamp seq(::ti_mmwave_rospkg_msgs::msg::RadarScan::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_RadarScan_stamp(msg_);
  }

private:
  ::ti_mmwave_rospkg_msgs::msg::RadarScan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ti_mmwave_rospkg_msgs::msg::RadarScan>()
{
  return ti_mmwave_rospkg_msgs::msg::builder::Init_RadarScan_seq();
}

}  // namespace ti_mmwave_rospkg_msgs

#endif  // TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_SCAN__BUILDER_HPP_
