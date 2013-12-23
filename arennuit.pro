QT       -= gui core

TARGET = arennuit
CONFIG   += console
CONFIG   -= app_bundle qt
CONFIG  += c++11

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    Property.hpp \
    ConcreteNodeA.hpp \
    ConcreteNodeB.hpp \
    Node.hpp
