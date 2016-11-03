#-------------------------------------------------
#
# Project created by QtCreator 2016-11-03T10:46:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtMap
TEMPLATE = app


SOURCES += main.cpp \
    map_widget.cpp \
    map_configure.cpp \
    geojson_decoder.cpp \
    deocde_thread.cpp \
    location_translate.cpp \
    geometry.cpp \
    point.cpp

HEADERS  += \
    map_widget.h \
    map_configure.h \
    geojson_decoder.h \
    deocde_thread.h \
    location_translate.h \
    geometry.h \
    point.h

CONFIG += mobility c++11
MOBILITY = 

