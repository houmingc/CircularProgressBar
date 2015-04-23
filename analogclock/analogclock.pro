QT += widgets

HEADERS       = analogclock.h \
    widgetcircle.h \
    widgetcountdown.h \
    circlepict.h
SOURCES       = analogclock.cpp \
                main.cpp \
    widgetcircle.cpp \
    widgetcountdown.cpp \
    circlepict.cpp

QMAKE_PROJECT_NAME = widgets_analogclock

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/widgets/analogclock
INSTALLS += target

RESOURCES += \
    resource.qrc
