#ifndef NODE_HPP
#define NODE_HPP

#pragma once

#include <vector>

class PropertyBase;

class Node {
  std::vector<PropertyBase*> m_props;
};

#include "Property.hpp"

#endif // NODE_HPP
