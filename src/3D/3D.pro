QT       += core gui
QT       += opengl
# QT       += openglwidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17 sanitizer sanitize_address

# если версия  QT старее 6.0
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

SOURCES += \
    ../s21_parsers.c \
    ima/giflib/dgif_lib.c \
    ima/giflib/egif_lib.c \
    ima/giflib/gif_err.c \
    ima/giflib/gif_font.c \
    ima/giflib/gif_hash.c \
    ima/giflib/gifalloc.c \
    ima/giflib/quantize.c \
    ima/qgifimage.cpp \
    main.cpp \
    mainwindow.cpp \
    widget.cpp

HEADERS += \
    ../s21_3DViewer.h \
    ima/giflib/gif_hash.h \
    ima/giflib/gif_lib.h \
    ima/giflib/gif_lib_private.h \
    ima/qgifglobal.h \
    ima/qgifimage.h \
    ima/qgifimage_p.h \
    mainwindow.h \
    widget.h

FORMS += \
    mainwindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    shaders.qrc

SUBDIRS += \
    ima/gifimage.pro

DISTFILES += \
    ima/giflib/AUTHORS \
    ima/giflib/COPYING \
    ima/giflib/README
