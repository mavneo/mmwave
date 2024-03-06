// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarTrackArray.idl
// generated code does not contain a copyright notice
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `track`
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_contents__functions.h"

bool
ti_mmwave_rospkg_msgs__msg__RadarTrackArray__init(ti_mmwave_rospkg_msgs__msg__RadarTrackArray * msg)
{
  if (!msg) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    ti_mmwave_rospkg_msgs__msg__RadarTrackArray__fini(msg);
    return false;
  }
  // stamp
  // num_tracks
  // track
  if (!ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence__init(&msg->track, 0)) {
    ti_mmwave_rospkg_msgs__msg__RadarTrackArray__fini(msg);
    return false;
  }
  return true;
}

void
ti_mmwave_rospkg_msgs__msg__RadarTrackArray__fini(ti_mmwave_rospkg_msgs__msg__RadarTrackArray * msg)
{
  if (!msg) {
    return;
  }
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // stamp
  // num_tracks
  // track
  ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence__fini(&msg->track);
}

bool
ti_mmwave_rospkg_msgs__msg__RadarTrackArray__are_equal(const ti_mmwave_rospkg_msgs__msg__RadarTrackArray * lhs, const ti_mmwave_rospkg_msgs__msg__RadarTrackArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // stamp
  if (lhs->stamp != rhs->stamp) {
    return false;
  }
  // num_tracks
  if (lhs->num_tracks != rhs->num_tracks) {
    return false;
  }
  // track
  if (!ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence__are_equal(
      &(lhs->track), &(rhs->track)))
  {
    return false;
  }
  return true;
}

bool
ti_mmwave_rospkg_msgs__msg__RadarTrackArray__copy(
  const ti_mmwave_rospkg_msgs__msg__RadarTrackArray * input,
  ti_mmwave_rospkg_msgs__msg__RadarTrackArray * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // stamp
  output->stamp = input->stamp;
  // num_tracks
  output->num_tracks = input->num_tracks;
  // track
  if (!ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence__copy(
      &(input->track), &(output->track)))
  {
    return false;
  }
  return true;
}

ti_mmwave_rospkg_msgs__msg__RadarTrackArray *
ti_mmwave_rospkg_msgs__msg__RadarTrackArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__msg__RadarTrackArray * msg = (ti_mmwave_rospkg_msgs__msg__RadarTrackArray *)allocator.allocate(sizeof(ti_mmwave_rospkg_msgs__msg__RadarTrackArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ti_mmwave_rospkg_msgs__msg__RadarTrackArray));
  bool success = ti_mmwave_rospkg_msgs__msg__RadarTrackArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ti_mmwave_rospkg_msgs__msg__RadarTrackArray__destroy(ti_mmwave_rospkg_msgs__msg__RadarTrackArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ti_mmwave_rospkg_msgs__msg__RadarTrackArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence__init(ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__msg__RadarTrackArray * data = NULL;

  if (size) {
    data = (ti_mmwave_rospkg_msgs__msg__RadarTrackArray *)allocator.zero_allocate(size, sizeof(ti_mmwave_rospkg_msgs__msg__RadarTrackArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ti_mmwave_rospkg_msgs__msg__RadarTrackArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ti_mmwave_rospkg_msgs__msg__RadarTrackArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence__fini(ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ti_mmwave_rospkg_msgs__msg__RadarTrackArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence *
ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence * array = (ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence *)allocator.allocate(sizeof(ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence__destroy(ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence__are_equal(const ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence * lhs, const ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ti_mmwave_rospkg_msgs__msg__RadarTrackArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence__copy(
  const ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence * input,
  ti_mmwave_rospkg_msgs__msg__RadarTrackArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ti_mmwave_rospkg_msgs__msg__RadarTrackArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ti_mmwave_rospkg_msgs__msg__RadarTrackArray * data =
      (ti_mmwave_rospkg_msgs__msg__RadarTrackArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ti_mmwave_rospkg_msgs__msg__RadarTrackArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ti_mmwave_rospkg_msgs__msg__RadarTrackArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ti_mmwave_rospkg_msgs__msg__RadarTrackArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
