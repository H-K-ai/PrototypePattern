QT += core
QT -= gui

CONFIG += c++11

TARGET = PrototypePattern
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    prototype.h \
    concrete_prototype.h
