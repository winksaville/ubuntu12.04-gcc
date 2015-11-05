# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2003-2014 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = gas
VERSION = 2.25.1

SHELL = /bin/sh


srcdir = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/po
top_srcdir = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas
VPATH = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/po
top_builddir = ..

prefix = /home/wink/docker/ubuntu12.04-gcc/opt/cross
exec_prefix = ${prefix}
datadir = $(prefix)/
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /usr/bin/install -c
INSTALL_DATA = /usr/bin/install -c -m 644
MKINSTALLDIRS = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/../mkinstalldirs

CC = gcc
GENCAT = 
GMSGFMT = PATH=../src:$$PATH /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = PATH=../src:$$PATH /usr/bin/xgettext
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -g -O2
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/fr.po $(srcdir)/tr.po $(srcdir)/es.po $(srcdir)/rw.po $(srcdir)/id.po $(srcdir)/ru.po $(srcdir)/fi.po $(srcdir)/ja.po
GMOFILES =  $(srcdir)/fr.gmo $(srcdir)/tr.gmo $(srcdir)/es.gmo $(srcdir)/rw.gmo $(srcdir)/id.gmo $(srcdir)/ru.gmo $(srcdir)/fi.gmo $(srcdir)/ja.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/app.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/as.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/as.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/asintl.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/atof-generic.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/bignum.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/bit_fix.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/cgen.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/cgen.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/compress-debug.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/compress-debug.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/cond.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/atof-ieee.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/atof-vax.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/e-crisaout.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/e-criself.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/e-i386aout.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/e-i386coff.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/e-i386elf.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/e-mipself.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-aout.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-aout.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-coff.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-coff.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-ecoff.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-ecoff.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-elf.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-elf.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-evax.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-evax.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-fdpicelf.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-fdpicelf.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-macho.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-macho.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-multi.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-multi.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-som.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/obj-som.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-aarch64.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-aarch64.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-alpha.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-alpha.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-arc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-arc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-arm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-arm.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-avr.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-avr.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-bfin.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-bfin.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-cr16.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-cr16.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-cris.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-cris.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-crx.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-crx.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-d10v.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-d10v.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-d30v.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-d30v.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-dlx.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-dlx.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-epiphany.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-epiphany.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-fr30.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-fr30.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-frv.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-frv.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-h8300.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-h8300.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-hppa.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-hppa.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-i370.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-i370.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-i386.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-i386.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-i860.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-i860.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-i960.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-i960.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-ia64.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-ia64.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-ip2k.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-ip2k.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-iq2000.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-iq2000.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-lm32.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-lm32.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-m32c.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-m32c.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-m32r.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-m32r.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-m68hc11.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-m68hc11.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-m68k.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-m68k.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mcore.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mcore.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mep.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mep.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-metag.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-metag.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-microblaze.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-microblaze.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mips.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mips.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mmix.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mmix.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mn10200.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mn10200.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mn10300.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mn10300.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-moxie.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-msp430.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-msp430.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mt.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-mt.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-nds32.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-nds32.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-nios2.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-nios2.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-ns32k.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-ns32k.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-or1k.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-or1k.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-pdp11.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-pdp11.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-pj.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-pj.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-ppc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-ppc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-rl78.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-rl78.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-rx.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-rx.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-s390.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-s390.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-score.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-score.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-sh.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-sh.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-sh64.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-sh64.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-sparc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-sparc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-spu.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-spu.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-tic30.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-tic30.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-tic4x.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-tic4x.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-tic54x.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-tic54x.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-tic6x.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-tic6x.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-tilegx.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-tilegx.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-tilepro.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-tilepro.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-v850.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-v850.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-vax.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-vax.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-xc16x.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-xc16x.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-xgate.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-xgate.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-xstormy16.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-xstormy16.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-xtensa.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-xtensa.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-z80.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-z80.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-z8k.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/tc-z8k.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-386bsd.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-aix5.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-armeabi.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-armfbsdeabi.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-armfbsdvfp.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-armlinuxeabi.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-dynix.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-epoc-pe.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-freebsd.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-generic.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-gnu.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-go32.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-hppa.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-hppa64.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-hppalinux64.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-i386aix.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-ia64aix.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-interix.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-lynx.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-mach.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-macos.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-nbsd.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-nbsd532.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-netware.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-pc532mach.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-pe.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-psos.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-riscix.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-solaris.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-sparcaout.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-sun3.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-svr4.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-symbian.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-tmips.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-vms.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-vxworks.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/te-wince-pe.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/xtensa-relax.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/config/xtensa-relax.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/depend.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/dw2gencfi.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/dw2gencfi.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/dwarf2dbg.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/dwarf2dbg.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/ecoff.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/ecoff.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/ehopt.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/emul-target.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/emul.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/expr.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/expr.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/flonum-copy.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/flonum-konst.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/flonum-mult.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/flonum.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/frags.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/frags.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/hash.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/hash.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/input-file.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/input-file.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/input-scrub.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/itbl-lex.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/itbl-ops.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/itbl-ops.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/listing.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/listing.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/literal.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/macro.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/macro.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/messages.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/obj.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/output-file.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/output-file.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/read.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/read.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/remap.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/sb.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/sb.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/stabs.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/struc-symbol.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/subsegs.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/subsegs.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/symbols.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/symbols.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/tc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/write.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gas/write.h

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=bug-binutils@gnu.org \
	  --files-from=$(srcdir)/POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-pdf:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
