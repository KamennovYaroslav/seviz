#-------------------------------------------------
#
# Project created by QtCreator 2020-01-12T11:48:05
#
#-------------------------------------------------

QT       += core gui webengine webenginewidgets webchannel

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = seviz
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

CONFIG += c++14

DEFINES += QUAZIP_STATIC
INCLUDEPATH += 3rdparty/quazip/quazip
INCLUDEPATH += 3rdparty/zlib

SOURCES += \
        3rdparty/quazip/quazip/JlCompress.cpp \
        3rdparty/quazip/quazip/qioapi.cpp \
        3rdparty/quazip/quazip/quaadler32.cpp \
        3rdparty/quazip/quazip/quacrc32.cpp \
        3rdparty/quazip/quazip/quagzipfile.cpp \
        3rdparty/quazip/quazip/quaziodevice.cpp \
        3rdparty/quazip/quazip/quazip.cpp \
        3rdparty/quazip/quazip/quazipdir.cpp \
        3rdparty/quazip/quazip/quazipfile.cpp \
        3rdparty/quazip/quazip/quazipfileinfo.cpp \
        3rdparty/quazip/quazip/quazipnewinfo.cpp \
        3rdparty/quazip/quazip/unzip.c \
        3rdparty/quazip/quazip/zip.c \
        3rdparty/zlib/adler32.c \
        3rdparty/zlib/compress.c \
        3rdparty/zlib/crc32.c \
        3rdparty/zlib/deflate.c \
        3rdparty/zlib/gzclose.c \
        3rdparty/zlib/gzlib.c \
        3rdparty/zlib/gzread.c \
        3rdparty/zlib/gzwrite.c \
        3rdparty/zlib/infback.c \
        3rdparty/zlib/inffast.c \
        3rdparty/zlib/inflate.c \
        3rdparty/zlib/inftrees.c \
        3rdparty/zlib/trees.c \
        3rdparty/zlib/uncompr.c \
        3rdparty/zlib/zutil.c \
        AbstractModule.cpp \
        Book.cpp \
        BookModels.cpp \
        DomChapter.cpp \
        ModuleManager.cpp \
        epubrenderer.cpp \
        main.cpp \
        mainwindow.cpp \
        modules/EngineTest/EngineTest.cpp \
        modules/EngineTest/enginetestwidget.cpp \
        modules/SentenceTree/SentenceTree.cpp \
        modules/SentenceTree/dependency.cpp \
        modules/SentenceTree/stwindow.cpp

HEADERS += \
        3rdparty/quazip/quazip/quagzipfile.h \ #for moc
        3rdparty/quazip/quazip/quaziodevice.h \
        3rdparty/quazip/quazip/quazipfile.h \
        AbstractModule.h \
        Book.h \
        BookModels.h \
        DomChapter.h \
        EventModels.h \
        ModuleManager.h \
        epubrenderer.h \
        exceptions.h \
        mainwindow.h \
        modules/EngineTest/EngineTest.h \
        modules/EngineTest/enginetestwidget.h \
        modules/SentenceTree/SentenceTree.h \
        modules/SentenceTree/dependency.h \
        modules/SentenceTree/stwindow.h \
        modules/modules.h

FORMS += \
        mainwindow.ui \
        modules/EngineTest/enginetestwidget.ui \
        modules/SentenceTree/stwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    modules/SentenceTree/sentencetree.qrc
