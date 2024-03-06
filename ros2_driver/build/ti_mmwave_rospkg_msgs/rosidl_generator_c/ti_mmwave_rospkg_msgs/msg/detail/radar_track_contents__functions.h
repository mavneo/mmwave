// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarTrackContents.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_CONTENTS__FUNCTIONS_H_
#define TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_CONTENTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ti_mmwave_rospkg_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_contents__struct.h"

/// Initialize msg/RadarTrackContents message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ti_mmwave_rospkg_msgs__msg__RadarTrackContents
 * )) before or use
 * ti_mmwave_rospkg_msgs__msg__RadarTrackContents__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
bool
ti_mmwave_rospkg_msgs__msg__RadarTrackContents__init(ti_mmwave_rospkg_msgs__msg__RadarTrackContents * msg);

/// Finalize msg/RadarTrackContents message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
void
ti_mmwave_rospkg_msgs__msg__RadarTrackContents__fini(ti_mmwave_rospkg_msgs__msg__RadarTrackContents * msg);

/// Create msg/RadarTrackContents message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ti_mmwave_rospkg_msgs__msg__RadarTrackContents__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
ti_mmwave_rospkg_msgs__msg__RadarTrackContents *
ti_mmwave_rospkg_msgs__msg__RadarTrackContents__create();

/// Destroy msg/RadarTrackContents message.
/**
 * It calls
 * ti_mmwave_rospkg_msgs__msg__RadarTrackContents__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
void
ti_mmwave_rospkg_msgs__msg__RadarTrackContents__destroy(ti_mmwave_rospkg_msgs__msg__RadarTrackContents * msg);

/// Check for msg/RadarTrackContents message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
bool
ti_mmwave_rospkg_msgs__msg__RadarTrackContents__are_equal(const ti_mmwave_rospkg_msgs__msg__RadarTrackContents * lhs, const ti_mmwave_rospkg_msgs__msg__RadarTrackContents * rhs);

/// Copy a msg/RadarTrackContents message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
bool
ti_mmwave_rospkg_msgs__msg__RadarTrackContents__copy(
  const ti_mmwave_rospkg_msgs__msg__RadarTrackContents * input,
  ti_mmwave_rospkg_msgs__msg__RadarTrackContents * output);

/// Initialize array of msg/RadarTrackContents messages.
/**
 * It allocates the memory for the number of elements and calls
 * ti_mmwave_rospkg_msgs__msg__RadarTrackContents__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
bool
ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence__init(ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence * array, size_t size);

/// Finalize array of msg/RadarTrackContents messages.
/**
 * It calls
 * ti_mmwave_rospkg_msgs__msg__RadarTrackContents__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
void
ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence__fini(ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence * array);

/// Create array of msg/RadarTrackContents messages.
/**
 * It allocates the memory for the array and calls
 * ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence *
ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence__create(size_t size);

/// Destroy array of msg/RadarTrackContents messages.
/**
 * It calls
 * ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
void
ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence__destroy(ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence * array);

/// Check for msg/RadarTrackContents message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
bool
ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence__are_equal(const ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence * lhs, const ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence * rhs);

/// Copy an array of msg/RadarTrackContents messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
bool
ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence__copy(
  const ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence * input,
  ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_TRACK_CONTENTS__FUNCTIONS_H_
