TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    subject.cpp \
    observer.cpp \
    concretesubject.cpp \
    concreteobserver.cpp

HEADERS += \
    subject.h \
    observer.h \
    concretesubject.h \
    concreteobserver.h
