#ifndef CONCRETENODEB_HPP
#define CONCRETENODEB_HPP

#pragma once

#include "Node.hpp"
#include "Property.hpp"

class ConcreteNodeA;

class ConcreteNodeB : public Node
{
protected:
    Property<ConcreteNodeA*>& m_nodeA;
public:
    ConcreteNodeB();
};

#include "ConcreteNodeA.hpp"

inline ConcreteNodeB::ConcreteNodeB() :
  m_nodeA(*new Property<ConcreteNodeA*>) {
  static_assert(std::is_base_of<PropertyImplementation<ConcreteNodeA*,1>,Property<ConcreteNodeA*>>::value, "BOOM!");
}

#endif // CONCRETENODEB_HPP
