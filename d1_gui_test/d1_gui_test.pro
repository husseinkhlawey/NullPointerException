QT = core gui

greaterThan(QT_MAJOR_VERSION, 4) : QT += widgets

TARGET = d1_gui_test
TEMPLATE = app

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS +=  \
    mainwindow.ui
