#ifndef CONCRETENODEA_HPP
#define CONCRETENODEA_HPP

#pragma once

#include "Node.hpp"
#include "Property.hpp"

class ConcreteNodeB;

class ConcreteNodeA : public Node
{
protected:
    Property<ConcreteNodeB*>& m_nodeB;
public:
    ConcreteNodeA();
};

#endif // CONCRETENODEA_HPP
