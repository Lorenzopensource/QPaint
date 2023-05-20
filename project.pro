QT += core gui widgets

TARGET = QPaint
TEMPLATE = app

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    canvasobject.cpp \
    tratto.cpp \
    retta.cpp \
    bezier.cpp \
    canvas.cpp \
    gui.cpp

HEADERS += \
    mainwindow.h \
    canvasobject.h \
    tratto.h \
    retta.h \
    bezier.h \
    canvas.h \
    gui.h


# Configurazione delle risorse
RESOURCES += resources.qrc

