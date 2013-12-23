QT       -= gui core

TARGET = Derp
CONFIG   += console
CONFIG   -= app_bundle qt

TEMPLATE = app

SOURCES += main.cpp

QMAKE_CXX += -std=c++11
QMAKE_CXXFLAGS_RELEASE -= -O2
QMAKE_CXXFLAGS_RELEASE += -O3 -march=native

INCLUDEPATH += ../Desktop/Dev/misc

HEADERS += \
    Property.hpp \
    ConcreteNodeA.hpp \
    ConcreteNodeB.hpp \
    Node.hpp
