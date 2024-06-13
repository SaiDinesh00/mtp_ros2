// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aerobot_interfaces:msg/Esc.idl
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
#include "aerobot_interfaces/msg/detail/esc__struct.h"
#include "aerobot_interfaces/msg/detail/esc__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aerobot_interfaces__msg__esc__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("aerobot_interfaces.msg._esc.Esc", full_classname_dest, 31) == 0);
  }
  aerobot_interfaces__msg__Esc * ros_message = _ros_message;
  {  // pin_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "pin_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pin_number = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pulse_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "pulse_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pulse_width = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aerobot_interfaces__msg__esc__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Esc */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aerobot_interfaces.msg._esc");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Esc");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aerobot_interfaces__msg__Esc * ros_message = (aerobot_interfaces__msg__Esc *)raw_ros_message;
  {  // pin_number
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pin_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pin_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pulse_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pulse_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pulse_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
