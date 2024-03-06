// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarTrackContents.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_CONTENTS__STRUCT_HPP_
#define TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_CONTENTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ti_mmwave_rospkg_msgs__msg__RadarTrackContents __attribute__((deprecated))
#else
# define DEPRECATED__ti_mmwave_rospkg_msgs__msg__RadarTrackContents __declspec(deprecated)
#endif

namespace ti_mmwave_rospkg_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarTrackContents_
{
  using Type = RadarTrackContents_<ContainerAllocator>;

  explicit RadarTrackContents_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->stamp = 0ul;
      this->tid = 0ul;
      this->posx = 0.0f;
      this->posy = 0.0f;
      this->posz = 0.0f;
      this->velx = 0.0f;
      this->vely = 0.0f;
      this->velz = 0.0f;
      this->accx = 0.0f;
      this->accy = 0.0f;
      this->accz = 0.0f;
    }
  }

  explicit RadarTrackContents_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->stamp = 0ul;
      this->tid = 0ul;
      this->posx = 0.0f;
      this->posy = 0.0f;
      this->posz = 0.0f;
      this->velx = 0.0f;
      this->vely = 0.0f;
      this->velz = 0.0f;
      this->accx = 0.0f;
      this->accy = 0.0f;
      this->accz = 0.0f;
    }
  }

  // field types and members
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _stamp_type =
    uint32_t;
  _stamp_type stamp;
  using _tid_type =
    uint32_t;
  _tid_type tid;
  using _posx_type =
    float;
  _posx_type posx;
  using _posy_type =
    float;
  _posy_type posy;
  using _posz_type =
    float;
  _posz_type posz;
  using _velx_type =
    float;
  _velx_type velx;
  using _vely_type =
    float;
  _vely_type vely;
  using _velz_type =
    float;
  _velz_type velz;
  using _accx_type =
    float;
  _accx_type accx;
  using _accy_type =
    float;
  _accy_type accy;
  using _accz_type =
    float;
  _accz_type accz;

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
  Type & set__tid(
    const uint32_t & _arg)
  {
    this->tid = _arg;
    return *this;
  }
  Type & set__posx(
    const float & _arg)
  {
    this->posx = _arg;
    return *this;
  }
  Type & set__posy(
    const float & _arg)
  {
    this->posy = _arg;
    return *this;
  }
  Type & set__posz(
    const float & _arg)
  {
    this->posz = _arg;
    return *this;
  }
  Type & set__velx(
    const float & _arg)
  {
    this->velx = _arg;
    return *this;
  }
  Type & set__vely(
    const float & _arg)
  {
    this->vely = _arg;
    return *this;
  }
  Type & set__velz(
    const float & _arg)
  {
    this->velz = _arg;
    return *this;
  }
  Type & set__accx(
    const float & _arg)
  {
    this->accx = _arg;
    return *this;
  }
  Type & set__accy(
    const float & _arg)
  {
    this->accy = _arg;
    return *this;
  }
  Type & set__accz(
    const float & _arg)
  {
    this->accz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator> *;
  using ConstRawPtr =
    const ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ti_mmwave_rospkg_msgs__msg__RadarTrackContents
    std::shared_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ti_mmwave_rospkg_msgs__msg__RadarTrackContents
    std::shared_ptr<ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarTrackContents_ & other) const
  {
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->tid != other.tid) {
      return false;
    }
    if (this->posx != other.posx) {
      return false;
    }
    if (this->posy != other.posy) {
      return false;
    }
    if (this->posz != other.posz) {
      return false;
    }
    if (this->velx != other.velx) {
      return false;
    }
    if (this->vely != other.vely) {
      return false;
    }
    if (this->velz != other.velz) {
      return false;
    }
    if (this->accx != other.accx) {
      return false;
    }
    if (this->accy != other.accy) {
      return false;
    }
    if (this->accz != other.accz) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarTrackContents_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarTrackContents_

// alias to use template instance with default allocator
using RadarTrackContents =
  ti_mmwave_rospkg_msgs::msg::RadarTrackContents_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ti_mmwave_rospkg_msgs

#endif  // TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_CONTENTS__STRUCT_HPP_
