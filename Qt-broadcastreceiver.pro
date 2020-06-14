QT += network widgets
requires(qtConfig(udpsocket))

HEADERS += \
    receiver.h

SOURCES += \
    main.cpp \
    receiver.cpp
