// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarTrackArray.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_array__struct.h"
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_array__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_contents__functions.h"
// end nested array functions include
bool ti_mmwave_rospkg_msgs__msg__radar_track_contents__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ti_mmwave_rospkg_msgs__msg__radar_track_contents__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ti_mmwave_rospkg_msgs__msg__radar_track_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ti_mmwave_rospkg_msgs.msg._radar_track_array.RadarTrackArray", full_classname_dest, 60) == 0);
  }
  ti_mmwave_rospkg_msgs__msg__RadarTrackArray * ros_message = _ros_message;
  {  // frame_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->frame_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stamp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_tracks
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_tracks");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_tracks = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // track
    PyObject * field = PyObject_GetAttrString(_pymsg, "track");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'track'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence__init(&(ros_message->track), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ti_mmwave_rospkg_msgs__msg__RadarTrackContents__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ti_mmwave_rospkg_msgs__msg__RadarTrackContents * dest = ros_message->track.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ti_mmwave_rospkg_msgs__msg__radar_track_contents__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ti_mmwave_rospkg_msgs__msg__radar_track_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarTrackArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ti_mmwave_rospkg_msgs.msg._radar_track_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarTrackArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ti_mmwave_rospkg_msgs__msg__RadarTrackArray * ros_message = (ti_mmwave_rospkg_msgs__msg__RadarTrackArray *)raw_ros_message;
  {  // frame_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->frame_id.data,
      strlen(ros_message->frame_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_tracks
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_tracks);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_tracks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track
    PyObject * field = NULL;
    size_t size = ros_message->track.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ti_mmwave_rospkg_msgs__msg__RadarTrackContents * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->track.data[i]);
      PyObject * pyitem = ti_mmwave_rospkg_msgs__msg__radar_track_contents__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
