QT += core gui sql widgets

CONFIG += c++17

SOURCES += \
	core/database.cpp \
	main.cpp \
	ui/mainwindow.cpp

HEADERS += \
	core/database.h \
	ui/mainwindow.h

FORMS += \
	ui/forms/mainwindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
