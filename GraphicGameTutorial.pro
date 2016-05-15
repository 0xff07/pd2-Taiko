#-------------------------------------------------
#
# Project created by QtCreator 2016-05-14T14:09:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GraphicGameTutorial
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    myrect.cpp \
    bullet.cpp \
    scene.cpp

HEADERS  += mainwindow.h \
    myrect.h \
    bullet.h \
    parameters.h \
    scene.h

FORMS    += mainwindow.ui

RESOURCES += \
    images.qrc
