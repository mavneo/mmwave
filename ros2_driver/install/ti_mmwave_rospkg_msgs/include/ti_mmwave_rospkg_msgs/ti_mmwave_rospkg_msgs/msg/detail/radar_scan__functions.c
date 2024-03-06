// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarScan.idl
// generated code does not contain a copyright notice
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

bool
ti_mmwave_rospkg_msgs__msg__RadarScan__init(ti_mmwave_rospkg_msgs__msg__RadarScan * msg)
{
  if (!msg) {
    return false;
  }
  // seq
  // stamp
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    ti_mmwave_rospkg_msgs__msg__RadarScan__fini(msg);
    return false;
  }
  // point_id
  // x
  // y
  // z
  // range
  // velocity
  // doppler_bin
  // bearing
  // intensity
  return true;
}

void
ti_mmwave_rospkg_msgs__msg__RadarScan__fini(ti_mmwave_rospkg_msgs__msg__RadarScan * msg)
{
  if (!msg) {
    return;
  }
  // seq
  // stamp
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // point_id
  // x
  // y
  // z
  // range
  // velocity
  // doppler_bin
  // bearing
  // intensity
}

bool
ti_mmwave_rospkg_msgs__msg__RadarScan__are_equal(const ti_mmwave_rospkg_msgs__msg__RadarScan * lhs, const ti_mmwave_rospkg_msgs__msg__RadarScan * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // seq
  if (lhs->seq != rhs->seq) {
    return false;
  }
  // stamp
  if (lhs->stamp != rhs->stamp) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // point_id
  if (lhs->point_id != rhs->point_id) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // doppler_bin
  if (lhs->doppler_bin != rhs->doppler_bin) {
    return false;
  }
  // bearing
  if (lhs->bearing != rhs->bearing) {
    return false;
  }
  // intensity
  if (lhs->intensity != rhs->intensity) {
    return false;
  }
  return true;
}

bool
ti_mmwave_rospkg_msgs__msg__RadarScan__copy(
  const ti_mmwave_rospkg_msgs__msg__RadarScan * input,
  ti_mmwave_rospkg_msgs__msg__RadarScan * output)
{
  if (!input || !output) {
    return false;
  }
  // seq
  output->seq = input->seq;
  // stamp
  output->stamp = input->stamp;
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // point_id
  output->point_id = input->point_id;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // range
  output->range = input->range;
  // velocity
  output->velocity = input->velocity;
  // doppler_bin
  output->doppler_bin = input->doppler_bin;
  // bearing
  output->bearing = input->bearing;
  // intensity
  output->intensity = input->intensity;
  return true;
}

ti_mmwave_rospkg_msgs__msg__RadarScan *
ti_mmwave_rospkg_msgs__msg__RadarScan__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__msg__RadarScan * msg = (ti_mmwave_rospkg_msgs__msg__RadarScan *)allocator.allocate(sizeof(ti_mmwave_rospkg_msgs__msg__RadarScan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ti_mmwave_rospkg_msgs__msg__RadarScan));
  bool success = ti_mmwave_rospkg_msgs__msg__RadarScan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ti_mmwave_rospkg_msgs__msg__RadarScan__destroy(ti_mmwave_rospkg_msgs__msg__RadarScan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ti_mmwave_rospkg_msgs__msg__RadarScan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__init(ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__msg__RadarScan * data = NULL;

  if (size) {
    data = (ti_mmwave_rospkg_msgs__msg__RadarScan *)allocator.zero_allocate(size, sizeof(ti_mmwave_rospkg_msgs__msg__RadarScan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ti_mmwave_rospkg_msgs__msg__RadarScan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ti_mmwave_rospkg_msgs__msg__RadarScan__fini(&data[i - 1]);
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
ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__fini(ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * array)
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
      ti_mmwave_rospkg_msgs__msg__RadarScan__fini(&array->data[i]);
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

ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence *
ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * array = (ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence *)allocator.allocate(sizeof(ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__destroy(ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__are_equal(const ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * lhs, const ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ti_mmwave_rospkg_msgs__msg__RadarScan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__copy(
  const ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * input,
  ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ti_mmwave_rospkg_msgs__msg__RadarScan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ti_mmwave_rospkg_msgs__msg__RadarScan * data =
      (ti_mmwave_rospkg_msgs__msg__RadarScan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ti_mmwave_rospkg_msgs__msg__RadarScan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ti_mmwave_rospkg_msgs__msg__RadarScan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ti_mmwave_rospkg_msgs__msg__RadarScan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
