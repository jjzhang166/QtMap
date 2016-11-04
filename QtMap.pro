#-------------------------------------------------
#
# Project created by QtCreator 2016-11-04T11:02:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtMap
TEMPLATE = app


SOURCES += main.cpp\
    map_configure.cpp \
    test_window.cpp \
    map_loader.cpp \
    map_widget.cpp

HEADERS  += \
    map_configure.h \
    test_window.h \
    map_loader.h \
    map_widget.h

CONFIG += mobility
MOBILITY = 


DISTFILES +=

RESOURCES +=

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/gdal/lib/ -lgdal_i

INCLUDEPATH += $$PWD/gdal/include
DEPENDPATH += $$PWD/gdal/include

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/gdal/lib/libgdal_i.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/gdal/lib/gdal_i.lib

