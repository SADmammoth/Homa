#-------------------------------------------------
#
# Project created by QtCreator 2018-10-20T18:15:21
#
#-------------------------------------------------

QT       += widgets
QT += winextras

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HOMA
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

CONFIG += c++11 \
        warn_off


SOURCES += \
        main.cpp \
    MainMenu.cpp \
    ListTab.cpp \
    AddNewTab.cpp \
    yarncard.cpp \
    component.cpp \
    fullcard.cpp \
    addcomponentwidget.cpp \
    floating_button.cpp \
    tableservice.cpp \
    tableservice.cpp \
    searchtab.cpp \
    rangesearch.cpp \
    color_dialog.cpp \
    projecttab.cpp \
    addprj.cpp \
    Table/SET-NODE.cpp \
    Table/set-table.cpp \
    project.cpp


HEADERS += \
    MainMenu.h \
    ListTab.h \
    AddNewTab.h \
    yarncard.h \
    component.h \
    fullcard.h \
    addcomponentwidget.h \
    floating_button.h \
    TableService.h \
    TableService.h \
    searchtab.h \
    rangesearch.h \
    color_dialog.h \
    projecttab.h \
    addprj.h \
    Table/Exceptions.h \
    Table/SET-NODE.h \
    Table/SET-TABLE.h \
    project.h



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS += \
    mainwindow.ui \
    addnewtab.ui \
    yarncard.ui \
    component.ui \
    fullcard.ui \
    addcomponentwidget.ui \
    floating_button.ui \
    lsttab.ui \
    searchtab.ui \
    rangesearch.ui \
    comp_wo_val.ui \
    color_dialog.ui \
    projecttab.ui \
    addprj.ui \
    project.ui \
    splashscreen.ui

DISTFILES += \
    YARN.sv \
    projects.sv

RESOURCES +=
