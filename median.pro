TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    medianheap.cpp \
    medianinsertsort.cpp

HEADERS += \
    heap.h \
    medianheap.h \
    medianinsertsort.h
