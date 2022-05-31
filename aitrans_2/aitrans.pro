QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    restrictedtrans.cpp \
    restrictedtrans_2.cpp \
    result_1.cpp \
    result_2.cpp \
    speechsynthesis_1.cpp \
    speechsynthesis_2.cpp

HEADERS += \
    mainwindow.h \
    restrictedtrans.h \
    restrictedtrans_2.h \
    result_1.h \
    result_2.h \
    speechsynthesis_1.h \
    speechsynthesis_2.h

FORMS += \
    mainwindow.ui \
    restrictedtrans.ui \
    restrictedtrans_2.ui \
    result_1.ui \
    result_2.ui \
    speechsynthesis_1.ui \
    speechsynthesis_2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
