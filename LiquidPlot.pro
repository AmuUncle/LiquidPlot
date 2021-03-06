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
INCLUDEPATH += $$PWD/include

SOURCES += source/main.cpp\
         source/liquidplot.cpp \
        source/mainwnd.cpp

HEADERS  += include/liquidplot.h \
    include/mainwnd.h

RESOURCES += \
    res/res.qrc
