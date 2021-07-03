#-------------------------------------------------
#
# Project created by QtCreator 2021-07-03T10:53:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LiquidPlot
TEMPLATE = app

include ($$PWD/public/public.pri)

SOURCES += main.cpp\
        liquidplot.cpp \
    mainwnd.cpp

HEADERS  += liquidplot.h \
    mainwnd.h

RESOURCES += \
    res.qrc
