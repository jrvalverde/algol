# Generated automatically from Makefile.in by configure.
## /* Makefile.in (do not clear TABs!) */

##----------------------------------------------------------------------
## This file is a part of the MARST package.
##
## Copyright (C) 2000, 2001 Andrew Makhorin <mao@mai2.rcnet.ru>,
##                          Department for Applied Informatics,
##                          Moscow Aviation Institute, Moscow, Russia.
##                          All rights reserved.
##
## This code is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 2 of the License, or
## (at your option) any later version.
##
## This software is distributed "as is" in the hope that it will be
## useful, but WITHOUT ANY WARRANTY; without even the implied warranty
## of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
## General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
##----------------------------------------------------------------------

## Start of system configuration section ##

CC = gcc
CFLAGS = -g -O2
CPPFLAGS = 
DEFS =  
LDFLAGS = 

prefix = /u/jr
exec_prefix = ${prefix}
bindir = ${exec_prefix}/bin
libdir = ${exec_prefix}/lib
includedir = ${prefix}/include
oldincludedir = /usr/include
mandir = ${prefix}/man
infodir = /u/jr/info

SHELL = /bin/sh
srcdir = .

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644

## End of system configuration section ##

## You normally do not need to modify anything below this point ##

.SUFFIXES:
.SUFFIXES: .c .o

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

ALGLIB = abs.o alglib.o arctan.o cos.o entier.o epsilon.o exp.o \
	fault.o iabs.o inchar.o inint.o inreal.o length.o ln.o \
	maxint.o maxreal.o minreal.o outchar.o outint.o outreal.o \
	outstr.o outterm.o print.o sign.o sin.o sqrt.o stop.o

all: marst macvt libalgol.a

marst: marst.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $(LDFLAGS) $<

macvt: macvt.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $(LDFLAGS) $<

libalgol.a: $(ALGLIB)
	$(AR) cru libalgol.a $(ALGLIB)

install: marst macvt libalgol.a installdirs
	$(INSTALL_PROGRAM) marst $(DESTDIR)$(bindir)/marst
	$(INSTALL_PROGRAM) macvt $(DESTDIR)$(bindir)/macvt
	$(INSTALL_DATA) libalgol.a $(DESTDIR)$(libdir)/libalgol.a
	-$(INSTALL_DATA) $(srcdir)/algol.h \
		$(DESTDIR)$(includedir)/algol.h
	-$(INSTALL_DATA) $(srcdir)/algol.h \
		$(DESTDIR)$(oldincludedir)/algol.h
	$(INSTALL_DATA) $(srcdir)/marst.1 \
		$(DESTDIR)$(mandir)/man1/marst.1
	$(INSTALL_DATA) $(srcdir)/macvt.1 \
		$(DESTDIR)$(mandir)/man1/macvt.1
	$(INSTALL_DATA) $(srcdir)/marst.info \
		$(DESTDIR)$(infodir)/marst.info

uninstall:
	rm -f $(bindir)/marst
	rm -f $(bindir)/macvt
	rm -f $(libdir)/libalgol.a
	-rm -f $(includedir)/algol.h
	-rm -f $(oldincludedir)/algol.h
	rm -f $(mandir)/man1/marst.1
	rm -f $(mandir)/man1/macvt.1
	rm -f $(infodir)/marst.info

install-strip:
	$(MAKE) INSTALL_PROGRAM='$(INSTALL_PROGRAM) -s' install

clean:
	rm -f marst macvt $(ALGLIB) libalgol.a gps.*

distclean: clean
	rm -f Makefile config.log config.cache config.status

mostlyclean: clean

maintainer-clean:
	@echo "This command is intended for maintainers to use;"
	@echo "rebuilding the deleted files requires special tools."
	$(MAKE) distclean
	rm -f TAGS

TAGS:
	@echo "Sorry, target `TAGS' is not implemented."

info:
	makeinfo marst.texinfo

dvi:
	texi2dvi --clean marst.texinfo

ps: dvi
	dvi2ps marst.dvi > marst.ps

pdf:
	texi2dvi --clean --pdf marst.texinfo

html:
	texi2html -expandinfo -number -monolithic marst.texinfo

doc: info ps pdf html

dist:
	@echo "Sorry, target `dist' is not implemented."

check: marst libalgol.a
	./marst $(srcdir)/ex/gps.alg -o gps.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o gps gps.c $(LDFLAGS) \
	./libalgol.a -lm
	./gps
	@echo "If the matrix C = A * B is unity, then check is OK."

installcheck:
	@echo "Sorry, target `installcheck' is not implemented."

installdirs:
	$(SHELL) $(srcdir)/mkinstalldirs $(bindir)
	$(SHELL) $(srcdir)/mkinstalldirs $(includedir)
	$(SHELL) $(srcdir)/mkinstalldirs $(libdir)
	$(SHELL) $(srcdir)/mkinstalldirs $(mandir)/man1
	$(SHELL) $(srcdir)/mkinstalldirs $(infodir)

## /* eof */
