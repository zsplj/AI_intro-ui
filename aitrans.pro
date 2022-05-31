QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    freetrans.cpp \
    freetrans_2.cpp \
    main.cpp \
    mainwindow.cpp \
    restrictedtrans.cpp \
    restrictedtrans_2.cpp \
    result_1.cpp

HEADERS += \
    freetrans.h \
    freetrans_2.h \
    mainwindow.h \
    restrictedtrans.h \
    restrictedtrans_2.h \
    result_1.h

FORMS += \
    freetrans.ui \
    freetrans_2.ui \
    mainwindow.ui \
    restrictedtrans.ui \
    restrictedtrans_2.ui \
    result_1.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
