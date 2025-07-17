QT += core gui widgets sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dashboard.cpp \
    database.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    placemanage.cpp \
    profile.cpp \
    scheduling.cpp \
    signup.cpp

HEADERS += \
    dashboard.h \
    database.h \
    login.h \
    mainwindow.h \
    placemanage.h \
    profile.h \
    scheduling.h \
    sessionmanager.h \
    signup.h

FORMS += \
    dashboard.ui \
    login.ui \
    mainwindow.ui \
    placemanage.ui \
    profile.ui \
    scheduling.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    resources/icons8-play-100.png
