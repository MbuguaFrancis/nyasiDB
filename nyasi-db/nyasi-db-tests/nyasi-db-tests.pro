TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp


include(../nyasi-db/Defines.pri)

HEADERS += \
    catch.hpp
