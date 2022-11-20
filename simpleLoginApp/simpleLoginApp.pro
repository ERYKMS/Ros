#-------------------------------------------------
#
# Project created by QtCreator 2022-10-27T13:54:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = simpleLoginApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    secdialog.cpp

HEADERS  += mainwindow.h \
    secdialog.h

FORMS    += mainwindow.ui \
    secdialog.ui

RESOURCES += \
    img.qrc
