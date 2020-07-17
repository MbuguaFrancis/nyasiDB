TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        dbmanagement-tests.cpp \
        main.cpp


include(../nyasi-db/Defines.pri)

HEADERS += \
    catch.hpp \
    tests.h
