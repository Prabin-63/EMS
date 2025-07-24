QT += core gui widgets sql charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QT += core gui widgets sql charts

# Sources
SOURCES += \
    addvolunteername.cpp \
    booking.cpp \
    dashboard.cpp \
    database.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    placemanage.cpp \
    profile.cpp \
    scheduling.cpp \
    signup.cpp \
    userdashboard.cpp

# Headers
HEADERS += \
    addvolunteername.h \
    booking.h \
    dashboard.h \
    database.h \
    login.h \
    mainwindow.h \
    placemanage.h \
    profile.h \
    scheduling.h \
    sessionmanager.h \
    signup.h \
    userdashboard.h

# UI Forms
FORMS += \
    addvolunteername.ui \
    dashboard.ui \
    login.ui \
    mainwindow.ui \
    placemanage.ui \
    profile.ui \
    scheduling.ui \
    signup.ui \
    userdashboard.ui

# Resources
RESOURCES += \
    resources.qrc

# Dist files
DISTFILES += \
    resources/icons8-play-100.png

# Default rules for deployment
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
