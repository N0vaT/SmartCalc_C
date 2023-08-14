QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    creditcalc.cpp \
    depositcalc.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    ../../backend/back_calculate.c \
    ../../backend/stack.c

HEADERS += \
    creditcalc.h \
    depositcalc.h \
    mainwindow.h \
    qcustomplot.h \
    ../../backend/back_calculate.h \
    ../../backend/stack.h   

FORMS += \
    creditcalc.ui \
    depositcalc.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
