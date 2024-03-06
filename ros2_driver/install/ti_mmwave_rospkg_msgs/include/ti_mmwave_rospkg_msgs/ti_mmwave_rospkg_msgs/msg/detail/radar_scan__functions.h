// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarScan.idl
// generated code does not contain a copyright notice

#ifndef TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_SCAN__FUNCTIONS_H_
#define TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_SCAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ti_mmwave_rospkg_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ti_mmwave_rospkg_msgs/msg/detail/radar_scan__struct.h"

/// Initialize msg/RadarScan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ti_mmwave_rospkg_msgs__msg__RadarScan
 * )) before or use
 * ti_mmwave_rospkg_msgs__msg__RadarScan__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
bool
ti_mmwave_rospkg_msgs__msg__RadarScan__init(ti_mmwave_rospkg_msgs__msg__RadarScan * msg);

/// Finalize msg/RadarScan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
void
ti_mmwave_rospkg_msgs__msg__RadarScan__fini(ti_mmwave_rospkg_msgs__msg__RadarScan * msg);

/// Create msg/RadarScan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ti_mmwave_rospkg_msgs__msg__RadarScan__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
ti_mmwave_rospkg_msgs__msg__RadarScan *
ti_mmwave_rospkg_msgs__msg__RadarScan__create();

/// Destroy msg/RadarScan message.
/**
 * It calls
 * ti_mmwave_rospkg_msgs__msg__RadarScan__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
void
ti_mmwave_rospkg_msgs__msg__RadarScan__destroy(ti_mmwave_rospkg_msgs__msg__RadarScan * msg);

/// Check for msg/RadarScan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
bool
ti_mmwave_rospkg_msgs__msg__RadarScan__are_equal(const ti_mmwave_rospkg_msgs__msg__RadarScan * lhs, const ti_mmwave_rospkg_msgs__msg__RadarScan * rhs);

/// Copy a msg/RadarScan message.
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
ti_mmwave_rospkg_msgs__msg__RadarScan__copy(
  const ti_mmwave_rospkg_msgs__msg__RadarScan * input,
  ti_mmwave_rospkg_msgs__msg__RadarScan * output);

/// Initialize array of msg/RadarScan messages.
/**
 * It allocates the memory for the number of elements and calls
 * ti_mmwave_rospkg_msgs__msg__RadarScan__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
bool
ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__init(ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * array, size_t size);

/// Finalize array of msg/RadarScan messages.
/**
 * It calls
 * ti_mmwave_rospkg_msgs__msg__RadarScan__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
void
ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__fini(ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * array);

/// Create array of msg/RadarScan messages.
/**
 * It allocates the memory for the array and calls
 * ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence *
ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__create(size_t size);

/// Destroy array of msg/RadarScan messages.
/**
 * It calls
 * ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
void
ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__destroy(ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * array);

/// Check for msg/RadarScan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ti_mmwave_rospkg_msgs
bool
ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__are_equal(const ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * lhs, const ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * rhs);

/// Copy an array of msg/RadarScan messages.
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
ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence__copy(
  const ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * input,
  ti_mmwave_rospkg_msgs__msg__RadarScan__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TI_MMWAVE_ROSPKG_MSGS__MSG__DETAIL__RADAR_SCAN__FUNCTIONS_H_
