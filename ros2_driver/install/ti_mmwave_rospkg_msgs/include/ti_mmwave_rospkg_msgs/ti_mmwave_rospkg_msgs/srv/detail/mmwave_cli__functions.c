// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ti_mmwave_rospkg_msgs:srv/MmwaveCli.idl
// generated code does not contain a copyright notice
#include "ti_mmwave_rospkg_msgs/srv/detail/mmwave_cli__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `comm`
#include "rosidl_runtime_c/string_functions.h"

bool
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__init(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request * msg)
{
  if (!msg) {
    return false;
  }
  // comm
  if (!rosidl_runtime_c__String__init(&msg->comm)) {
    ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__fini(msg);
    return false;
  }
  return true;
}

void
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__fini(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request * msg)
{
  if (!msg) {
    return;
  }
  // comm
  rosidl_runtime_c__String__fini(&msg->comm);
}

bool
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__are_equal(const ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request * lhs, const ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // comm
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->comm), &(rhs->comm)))
  {
    return false;
  }
  return true;
}

bool
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__copy(
  const ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request * input,
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // comm
  if (!rosidl_runtime_c__String__copy(
      &(input->comm), &(output->comm)))
  {
    return false;
  }
  return true;
}

ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request *
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request * msg = (ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request *)allocator.allocate(sizeof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request));
  bool success = ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__destroy(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence__init(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request * data = NULL;

  if (size) {
    data = (ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request *)allocator.zero_allocate(size, sizeof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__fini(&data[i - 1]);
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
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence__fini(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence * array)
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
      ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__fini(&array->data[i]);
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

ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence *
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence * array = (ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence *)allocator.allocate(sizeof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence__destroy(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence__are_equal(const ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence * lhs, const ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence__copy(
  const ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence * input,
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request * data =
      (ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ti_mmwave_rospkg_msgs__srv__MmwaveCli_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `resp`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__init(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response * msg)
{
  if (!msg) {
    return false;
  }
  // resp
  if (!rosidl_runtime_c__String__init(&msg->resp)) {
    ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__fini(msg);
    return false;
  }
  return true;
}

void
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__fini(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response * msg)
{
  if (!msg) {
    return;
  }
  // resp
  rosidl_runtime_c__String__fini(&msg->resp);
}

bool
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__are_equal(const ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response * lhs, const ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // resp
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->resp), &(rhs->resp)))
  {
    return false;
  }
  return true;
}

bool
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__copy(
  const ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response * input,
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // resp
  if (!rosidl_runtime_c__String__copy(
      &(input->resp), &(output->resp)))
  {
    return false;
  }
  return true;
}

ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response *
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response * msg = (ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response *)allocator.allocate(sizeof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response));
  bool success = ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__destroy(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence__init(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response * data = NULL;

  if (size) {
    data = (ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response *)allocator.zero_allocate(size, sizeof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__fini(&data[i - 1]);
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
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence__fini(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence * array)
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
      ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__fini(&array->data[i]);
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

ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence *
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence * array = (ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence *)allocator.allocate(sizeof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence__destroy(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence__are_equal(const ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence * lhs, const ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence__copy(
  const ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence * input,
  ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response * data =
      (ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ti_mmwave_rospkg_msgs__srv__MmwaveCli_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
