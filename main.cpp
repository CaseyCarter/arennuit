#include "ConcreteNodeA.hpp"
#include "ConcreteNodeB.hpp"
#include "Property.hpp"

ConcreteNodeA::ConcreteNodeA() :
  m_nodeB(*new Property<ConcreteNodeB*>) {
}

int main() {
  ConcreteNodeA a;
  ConcreteNodeB b;
}
