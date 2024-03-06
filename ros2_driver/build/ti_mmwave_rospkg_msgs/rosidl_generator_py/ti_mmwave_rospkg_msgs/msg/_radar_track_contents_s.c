// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ti_mmwave_rospkg_msgs:msg/RadarTrackContents.idl
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
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_contents__struct.h"
#include "ti_mmwave_rospkg_msgs/msg/detail/radar_track_contents__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ti_mmwave_rospkg_msgs__msg__radar_track_contents__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("ti_mmwave_rospkg_msgs.msg._radar_track_contents.RadarTrackContents", full_classname_dest, 66) == 0);
  }
  ti_mmwave_rospkg_msgs__msg__RadarTrackContents * ros_message = _ros_message;
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
  {  // tid
    PyObject * field = PyObject_GetAttrString(_pymsg, "tid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tid = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // posx
    PyObject * field = PyObject_GetAttrString(_pymsg, "posx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // posy
    PyObject * field = PyObject_GetAttrString(_pymsg, "posy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // posz
    PyObject * field = PyObject_GetAttrString(_pymsg, "posz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velx
    PyObject * field = PyObject_GetAttrString(_pymsg, "velx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vely
    PyObject * field = PyObject_GetAttrString(_pymsg, "vely");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vely = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velz
    PyObject * field = PyObject_GetAttrString(_pymsg, "velz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accx
    PyObject * field = PyObject_GetAttrString(_pymsg, "accx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accy
    PyObject * field = PyObject_GetAttrString(_pymsg, "accy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accz
    PyObject * field = PyObject_GetAttrString(_pymsg, "accz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ti_mmwave_rospkg_msgs__msg__radar_track_contents__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarTrackContents */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ti_mmwave_rospkg_msgs.msg._radar_track_contents");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarTrackContents");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ti_mmwave_rospkg_msgs__msg__RadarTrackContents * ros_message = (ti_mmwave_rospkg_msgs__msg__RadarTrackContents *)raw_ros_message;
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
  {  // tid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vely
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vely);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vely", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
