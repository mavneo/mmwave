// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarTrackArray.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_ARRAY__STRUCT_HPP_
#define TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'track'
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_contents__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ti_mmwave_rospkg_msgs__msg__RadarTrackArray __attribute__((deprecated))
#else
# define DEPRECATED__ti_mmwave_rospkg_msgs__msg__RadarTrackArray __declspec(deprecated)
#endif

namespace ti_mmwave_rospkg_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarTrackArray_
{
  using Type = RadarTrackArray_<ContainerAllocator>;

  explicit RadarTrackArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->stamp = 0ul;
      this->num_tracks = 0ul;
    }
  }

  explicit RadarTrackArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->stamp = 0ul;
      this->num_tracks = 0ul;
    }
  }

  // field types and members
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _stamp_type =
    uint32_t;
  _stamp_type stamp;
  using _num_tracks_type =
    uint32_t;
  _num_tracks_type num_tracks;
  using _track_type =
    std::vector<ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator>>>;
  _track_type track;

  // setters for named parameter idiom
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__stamp(
    const uint32_t & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__num_tracks(
    const uint32_t & _arg)
  {
    this->num_tracks = _arg;
    return *this;
  }
  Type & set__track(
    const std::vector<ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator>>> & _arg)
  {
    this->track = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ti_mmwave_rospkg_msgs::msg::RadarTrackArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const ti_mmwave_rospkg_msgs::msg::RadarTrackArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ti_mmwave_rospkg_msgs::msg::RadarTrackArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ti_mmwave_rospkg_msgs::msg::RadarTrackArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ti_mmwave_rospkg_msgs__msg__RadarTrackArray
    std::shared_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ti_mmwave_rospkg_msgs__msg__RadarTrackArray
    std::shared_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarTrackArray_ & other) const
  {
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->num_tracks != other.num_tracks) {
      return false;
    }
    if (this->track != other.track) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarTrackArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarTrackArray_

// alias to use template instance with default allocator
using RadarTrackArray =
  ti_mmwave_rospkg_msgs::msg::RadarTrackArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ti_mmwave_rospkg_msgs

#endif  // TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_ARRAY__STRUCT_HPP_
