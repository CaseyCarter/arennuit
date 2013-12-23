QT       -= gui core

TARGET   = arennuit
CONFIG  += console c++11
CONFIG  -= app_bundle qt

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    Property.hpp \
    ConcreteNodeA.hpp \
    ConcreteNodeB.hpp \
    Node.hpp
