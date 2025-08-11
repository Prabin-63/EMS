QT += core gui widgets sql charts printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

INCLUDEPATH += HEADERS

SOURCES += $$files(CPP/*.cpp)
HEADERS += $$files(HEADERS/*.h)
FORMS += $$files(UI/*.ui)

RESOURCES += resources.qrc

DISTFILES += resources/icons8-play-100.png

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
