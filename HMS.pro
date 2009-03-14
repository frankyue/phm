TEMPLATE = app
TARGET =
DEPENDPATH += . build src ui
INCLUDEPATH += . src ui headers
QT = gui core sql
CONFIG += qt release warn_on console
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
HEADERS += headers/login.h \
 headers/mainwindow.h \
 headers/qsqlconnectiondialog.h \
 headers/AdminCheck.h \
 headers/AddRoom.h \
 headers/check.h \
 headers/liveinfo.h \
 headers/show.h 
FORMS += ui/configdlg.ui \
 ui/login.ui \
 ui/mainwindow.ui \
 ui/qsqlconnectiondialog.ui \
 ui/record.ui \
 ui/addroom.ui
SOURCES += src/login.cpp \
 src/main.cpp \
 src/mainwindow.cpp \
 src/qsqlconnectiondialog.cpp \
 src/AdminCheck.cpp \
 src/AddRoom.cpp \
 src/check.cpp \
 src/show.cpp \
 src/liveinfo.cpp
RESOURCES += HMS.qrc
