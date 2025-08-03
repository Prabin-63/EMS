QT += core gui widgets sql charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QT += core gui widgets sql charts
QT += core gui widgets printsupport


# Sources
SOURCES += \
    addvolunteername.cpp \
    booking.cpp \
    dashboard.cpp \
    database.cpp \
    eventdetailpage.cpp \
    helpcenter.cpp \
    login.cpp \
    logout.cpp \
    main.cpp \
    mainwindow.cpp \
    placemanage.cpp \
    profile.cpp \
    scheduling.cpp \
    signup.cpp \
    ticketwindow.cpp \
    userdashboard.cpp \
    viewvolunteer.cpp

# Headers
HEADERS += \
    addvolunteername.h \
    booking.h \
    dashboard.h \
    database.h \
    eventdetailpage.h \
    helpcenter.h \
    login.h \
    logout.h \
    mainwindow.h \
    placemanage.h \
    profile.h \
    scheduling.h \
    sessionmanager.h \
    signup.h \
    ticketwindow.h \
    userdashboard.h \
    viewvolunteer.h


# UI Forms
FORMS += \
    addvolunteername.ui \
    booking.ui \
    dashboard.ui \
    eventdetailpage.ui \
    helpcenter.ui \
    login.ui \
    mainwindow.ui \
    placemanage.ui \
    profile.ui \
    scheduling.ui \
    signup.ui \
    ticketwindow.ui \
    userdashboard.ui \
    viewvolunteer.ui



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
