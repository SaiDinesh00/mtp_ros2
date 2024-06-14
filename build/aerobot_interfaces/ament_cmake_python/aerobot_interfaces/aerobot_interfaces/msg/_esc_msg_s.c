// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aerobot_interfaces:msg/EscMsg.idl
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
#include "aerobot_interfaces/msg/detail/esc_msg__struct.h"
#include "aerobot_interfaces/msg/detail/esc_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aerobot_interfaces__msg__esc_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("aerobot_interfaces.msg._esc_msg.EscMsg", full_classname_dest, 38) == 0);
  }
  aerobot_interfaces__msg__EscMsg * ros_message = _ros_message;
  {  // pulse_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "pulse_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pulse_width = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aerobot_interfaces__msg__esc_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EscMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aerobot_interfaces.msg._esc_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EscMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aerobot_interfaces__msg__EscMsg * ros_message = (aerobot_interfaces__msg__EscMsg *)raw_ros_message;
  {  // pulse_width
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pulse_width);
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
