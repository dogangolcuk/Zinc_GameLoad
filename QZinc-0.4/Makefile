#############################################################################
# Makefile for building: QZinc
# Generated by qmake (2.01a) (Qt 4.7.1) on: Pzt Mar 7 17:39:44 2011
# Project:  source.pro
# Template: app
# Command: /usr/bin/qmake -o Makefile source.pro
#############################################################################

####### Compiler, tools and options

CC            = i686-pc-linux-gnu-gcc
CXX           = i686-pc-linux-gnu-g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -mtune=atom -march=i686 -O2 -pipe -fomit-frame-pointer -fstack-protector -D_FORTIFY_SOURCE=2 -ggdb3 -funwind-tables -fasynchronous-unwind-tables -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -mtune=atom -march=i686 -O2 -pipe -fomit-frame-pointer -fstack-protector -D_FORTIFY_SOURCE=2 -ggdb3 -funwind-tables -fasynchronous-unwind-tables -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/QtCore -I/usr/include/QtGui -I/usr/include -I. -I. -I.
LINK          = i686-pc-linux-gnu-g++
LFLAGS        = -Wl,-O1 -Wl,-z,relro -Wl,--hash-style=gnu -Wl,--as-needed -Wl,--sort-common
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtGui -L/usr/lib -L/usr/X11R6/lib -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = 
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mainwindow.cpp \
		zincprocess.cpp moc_mainwindow.cpp \
		moc_zincprocess.cpp \
		qrc_games.cpp
OBJECTS       = main.o \
		mainwindow.o \
		zincprocess.o \
		moc_mainwindow.o \
		moc_zincprocess.o \
		qrc_games.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		source.pro
QMAKE_TARGET  = QZinc
DESTDIR       = 
TARGET        = QZinc

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_f_qzinc.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: source.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -o Makefile source.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_phonon.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile source.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/QZinc1.0.0 || $(MKDIR) .tmp/QZinc1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/QZinc1.0.0/ && $(COPY_FILE) --parents mainwindow.h zincprocess.h .tmp/QZinc1.0.0/ && $(COPY_FILE) --parents games.qrc .tmp/QZinc1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp zincprocess.cpp .tmp/QZinc1.0.0/ && $(COPY_FILE) --parents f_qzinc.ui .tmp/QZinc1.0.0/ && (cd `dirname .tmp/QZinc1.0.0` && $(TAR) QZinc1.0.0.tar QZinc1.0.0 && $(COMPRESS) QZinc1.0.0.tar) && $(MOVE) `dirname .tmp/QZinc1.0.0`/QZinc1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/QZinc1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_zincprocess.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_zincprocess.cpp
moc_mainwindow.cpp: ui_f_qzinc.h \
		zincprocess.h \
		mainwindow.h
	/usr/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_zincprocess.cpp: zincprocess.h
	/usr/bin/moc $(DEFINES) $(INCPATH) zincprocess.h -o moc_zincprocess.cpp

compiler_rcc_make_all: qrc_games.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_games.cpp
qrc_games.cpp: games.qrc \
		gamesList
	/usr/bin/rcc -name games games.qrc -o qrc_games.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_f_qzinc.h
compiler_uic_clean:
	-$(DEL_FILE) ui_f_qzinc.h
ui_f_qzinc.h: f_qzinc.ui
	/usr/bin/uic f_qzinc.ui -o ui_f_qzinc.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		ui_f_qzinc.h \
		zincprocess.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		ui_f_qzinc.h \
		zincprocess.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

zincprocess.o: zincprocess.cpp zincprocess.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o zincprocess.o zincprocess.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_zincprocess.o: moc_zincprocess.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_zincprocess.o moc_zincprocess.cpp

qrc_games.o: qrc_games.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_games.o qrc_games.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

