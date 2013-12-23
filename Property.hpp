#ifndef PROPERTY_HPP
#define PROPERTY_HPP

#pragma once

#include <type_traits>
#include "Node.hpp"

template <typename T>
struct TypeFamily {
  static const int value = -1;
};

template <typename T>
struct TypeFamily<T*> {
  static const int value = std::is_base_of<Node,T>::value ? 1 : -1;
};

template <>
struct TypeFamily<int> {
  static const int value = 0;
};

class PropertyBase {};

template <class T, int typeFamily = TypeFamily<T>::value >
class PropertyImplementation : public PropertyBase
{
    // Default template to catch errors.
};

template <class T>
class PropertyImplementation<T, 0> : public PropertyBase
{
    // Data is a base type.
    T* m_dataRef;

    // Some basic types-specific stuff.
};

template <class T>
class PropertyImplementation<T*, 1> : public PropertyBase
{
    // Data is a pointer to a concrete node.
    T** m_dataRef;

    // Some pointer to node-specific stuff.
};

template <class T>
class Property : public PropertyImplementation<T> {};

#endif // PROPERTY_HPP
