#-------------------------------------------------
#
# Project created by QtCreator 2015-12-06T19:03:47
#
#-------------------------------------------------

QT += core gui
TEMPLATE = lib
CONFIG += staticlib
QMAKE_CXXFLAGS_WARN_OFF = -Wunused-parameter

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projektQT
TEMPLATE = app


SOURCES += main.cpp\
           klasaglowna.cpp \
           baza.cpp
RESOURCES += images/images.qrc \
             sheets/sheets.qrc \
             sounds/sounds_1_10.qrc \
             sounds/sounds_11_20.qrc \
             sounds/sounds_21_36.qrc \
             sounds/sounds_x1_x10.qrc \
             sounds/sounds_x11_x25.qrc


HEADERS  += klasaglowna.h \
            baza.h

FORMS    += klasaglowna.ui \
            baza.ui

DISTFILES +=
