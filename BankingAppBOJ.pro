#-------------------------------------------------
#
# Project created by QtCreator 2018-03-25T17:42:25
#
#-------------------------------------------------

QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BankingAppBOJ
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    checkingdialog.cpp \
    savingsdialog.cpp \
    deposit.cpp \
    transfer.cpp \
    transhistory.cpp \
    withdraw.cpp \
    error001.cpp \
    error002.cpp \
    loginwindow.cpp

HEADERS += \
        mainwindow.h \
    checkingdialog.h \
    savingsdialog.h \
    deposit.h \
    transfer.h \
    transhistory.h \
    withdraw.h \
    error001.h \
    error002.h \
    loginwindow.h

FORMS += \
        mainwindow.ui \
    checkingdialog.ui \
    savingsdialog.ui \
    deposit.ui \
    transfer.ui \
    transhistory.ui \
    withdraw.ui \
    error001.ui \
    error002.ui \
    loginwindow.ui

DISTFILES +=

RESOURCES += \
    BABOJresources.qrc
