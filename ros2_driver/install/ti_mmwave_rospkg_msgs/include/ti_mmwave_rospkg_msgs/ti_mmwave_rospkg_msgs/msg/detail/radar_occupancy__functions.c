// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarOccupancy.idl
// generated code does not contain a copyright notice
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_occupancy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

bool
ti_mmwave_rospkg_msgs__msg__RadarOccupancy__init(ti_mmwave_rospkg_msgs__msg__RadarOccupancy * msg)
{
  if (!msg) {
    return false;
  }
  // seq
  // stamp
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    ti_mmwave_rospkg_msgs__msg__RadarOccupancy__fini(msg);
    return false;
  }
  // state
  return true;
}

void
ti_mmwave_rospkg_msgs__msg__RadarOccupancy__fini(ti_mmwave_rospkg_msgs__msg__RadarOccupancy * msg)
{
  if (!msg) {
    return;
  }
  // seq
  // stamp
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // state
}

bool
ti_mmwave_rospkg_msgs__msg__RadarOccupancy__are_equal(const ti_mmwave_rospkg_msgs__msg__RadarOccupancy * lhs, const ti_mmwave_rospkg_msgs__msg__RadarOccupancy * rhs)
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
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
ti_mmwave_rospkg_msgs__msg__RadarOccupancy__copy(
  const ti_mmwave_rospkg_msgs__msg__RadarOccupancy * input,
  ti_mmwave_rospkg_msgs__msg__RadarOccupancy * output)
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
  // state
  output->state = input->state;
  return true;
}

ti_mmwave_rospkg_msgs__msg__RadarOccupancy *
ti_mmwave_rospkg_msgs__msg__RadarOccupancy__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__msg__RadarOccupancy * msg = (ti_mmwave_rospkg_msgs__msg__RadarOccupancy *)allocator.allocate(sizeof(ti_mmwave_rospkg_msgs__msg__RadarOccupancy), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ti_mmwave_rospkg_msgs__msg__RadarOccupancy));
  bool success = ti_mmwave_rospkg_msgs__msg__RadarOccupancy__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ti_mmwave_rospkg_msgs__msg__RadarOccupancy__destroy(ti_mmwave_rospkg_msgs__msg__RadarOccupancy * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ti_mmwave_rospkg_msgs__msg__RadarOccupancy__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence__init(ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__msg__RadarOccupancy * data = NULL;

  if (size) {
    data = (ti_mmwave_rospkg_msgs__msg__RadarOccupancy *)allocator.zero_allocate(size, sizeof(ti_mmwave_rospkg_msgs__msg__RadarOccupancy), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ti_mmwave_rospkg_msgs__msg__RadarOccupancy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ti_mmwave_rospkg_msgs__msg__RadarOccupancy__fini(&data[i - 1]);
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
ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence__fini(ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence * array)
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
      ti_mmwave_rospkg_msgs__msg__RadarOccupancy__fini(&array->data[i]);
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

ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence *
ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence * array = (ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence *)allocator.allocate(sizeof(ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence__destroy(ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence__are_equal(const ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence * lhs, const ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ti_mmwave_rospkg_msgs__msg__RadarOccupancy__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence__copy(
  const ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence * input,
  ti_mmwave_rospkg_msgs__msg__RadarOccupancy__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ti_mmwave_rospkg_msgs__msg__RadarOccupancy);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ti_mmwave_rospkg_msgs__msg__RadarOccupancy * data =
      (ti_mmwave_rospkg_msgs__msg__RadarOccupancy *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ti_mmwave_rospkg_msgs__msg__RadarOccupancy__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ti_mmwave_rospkg_msgs__msg__RadarOccupancy__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ti_mmwave_rospkg_msgs__msg__RadarOccupancy__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
