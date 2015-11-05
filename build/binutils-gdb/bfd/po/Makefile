# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2001-2014 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = bfd
VERSION = 2.25.1

SHELL = /bin/sh


srcdir = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/po
top_srcdir = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd
VPATH = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/po
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
MKINSTALLDIRS = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/../mkinstalldirs

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
POFILES =  $(srcdir)/fr.po $(srcdir)/tr.po $(srcdir)/ja.po $(srcdir)/es.po $(srcdir)/sv.po $(srcdir)/da.po $(srcdir)/zh_CN.po $(srcdir)/ro.po $(srcdir)/rw.po $(srcdir)/vi.po $(srcdir)/fi.po $(srcdir)/id.po $(srcdir)/ru.po $(srcdir)/uk.po
GMOFILES =  $(srcdir)/fr.gmo $(srcdir)/tr.gmo $(srcdir)/ja.gmo $(srcdir)/es.gmo $(srcdir)/sv.gmo $(srcdir)/da.gmo $(srcdir)/zh_CN.gmo $(srcdir)/ro.gmo $(srcdir)/rw.gmo $(srcdir)/vi.gmo $(srcdir)/fi.gmo $(srcdir)/id.gmo $(srcdir)/ru.gmo $(srcdir)/uk.gmo
DISTFILES = ChangeLog Makefile.in.in SRC-POTFILES.in BLD-POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of source dir POTFILES.
SRC-POTFILES = \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aix386-core.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aix5ppc-core.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aout-adobe.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aout-arm.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aout-cris.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aout-ns32k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aout-sparcle.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aout-target.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aout-tic30.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aout0.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aout32.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aout64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aoutf1.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/aoutx.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/archive.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/archive64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/archures.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/armnetbsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/bfd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/bfdio.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/bfdwin.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/binary.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/bout.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cache.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cf-i386lynx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cf-sparclynx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cisco-core.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-alpha.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-apollo.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-arm.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-aux.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-go32.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-h8300.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-h8500.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-i386.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-i860.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-i960.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-m68k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-m88k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-mips.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-rs6000.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-sh.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-sparc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-stgo32.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-svm68k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-tic30.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-tic4x.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-tic54x.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-tic80.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-u68k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-w65.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-we32k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-x86_64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-z80.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff-z8k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coff64-rs6000.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coffcode.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coffgen.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cofflink.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/coffswap.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/compress.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/corefile.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-aarch64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-alpha.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-arc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-arm.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-avr.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-bfin.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-cr16.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-cr16c.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-cris.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-crx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-d10v.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-d30v.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-dlx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-epiphany.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-fr30.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-frv.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-h8300.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-h8500.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-hppa.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-i370.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-i386.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-i860.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-i960.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-ia64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-ip2k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-iq2000.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-k1om.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-l1om.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-lm32.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-m10200.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-m10300.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-m32c.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-m32r.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-m68hc11.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-m68hc12.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-m68k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-m88k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-m9s12x.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-m9s12xg.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-mcore.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-mep.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-metag.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-microblaze.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-mips.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-mmix.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-moxie.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-msp430.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-mt.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-nds32.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-nios2.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-ns32k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-or1k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-pdp11.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-pj.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-plugin.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-powerpc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-rl78.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-rs6000.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-rx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-s390.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-score.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-sh.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-sparc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-spu.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-tic30.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-tic4x.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-tic54x.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-tic6x.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-tic80.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-tilegx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-tilepro.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-v850.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-v850_rh850.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-vax.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-w65.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-we32k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-xc16x.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-xgate.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-xstormy16.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-xtensa.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-z80.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/cpu-z8k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/demo64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/dwarf1.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/dwarf2.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/ecoff.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/ecofflink.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/ecoffswap.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf-attrs.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf-bfd.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf-eh-frame.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf-hppa.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf-ifunc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf-linux-psinfo.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf-m10200.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf-m10300.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf-nacl.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf-strtab.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf-vxworks.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-am33lin.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-arc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-arm.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-avr.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-bfin.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-cr16.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-cr16c.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-cris.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-crx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-d10v.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-d30v.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-dlx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-epiphany.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-fr30.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-frv.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-gen.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-h8300.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-hppa.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-hppa.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-i370.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-i386.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-i860.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-i960.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-ip2k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-iq2000.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-lm32.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-m32c.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-m32r.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-m68hc11.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-m68hc12.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-m68hc1x.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-m68k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-m88k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-mcore.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-mep.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-metag.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-microblaze.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-mips.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-moxie.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-msp430.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-mt.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-nds32.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-nios2.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-or1k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-pj.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-ppc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-rl78.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-rx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-s390.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-score.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-score7.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-sh-symbian.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-sh.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-sh64-com.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-sh64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-sparc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-spu.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-tic6x.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-tilegx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-tilepro.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-v850.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-vax.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-xc16x.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-xgate.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-xstormy16.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32-xtensa.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf32.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64-alpha.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64-gen.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64-hppa.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64-hppa.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64-ia64-vms.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64-mips.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64-mmix.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64-ppc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64-s390.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64-sh64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64-sparc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64-tilegx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64-x86-64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elf64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elfcode.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elfcore.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elflink.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elfn32-mips.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elfxx-aarch64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elfxx-ia64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elfxx-mips.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elfxx-sparc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/elfxx-tilegx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/epoc-pe-arm.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/epoc-pei-arm.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/format.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/freebsd.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/genlink.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/go32stub.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/hash.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/hp300bsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/hp300hpux.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/hpux-core.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/i386aout.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/i386bsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/i386dynix.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/i386freebsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/i386linux.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/i386lynx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/i386mach3.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/i386msdos.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/i386netbsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/i386os9k.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/ieee.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/ihex.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/init.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/irix-core.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/libaout.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/libbfd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/libbfd.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/libcoff.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/libecoff.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/libhppa.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/libieee.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/libnlm.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/liboasys.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/libpei.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/libxcoff.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/linker.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/lynx-core.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/m68k4knetbsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/m68klinux.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/m68knetbsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/m88kmach3.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/m88kopenbsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/mach-o-i386.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/mach-o-x86-64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/mach-o.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/mach-o.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/merge.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/mipsbsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/mmo.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/netbsd.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/newsos3.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/nlm-target.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/nlm.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/nlm32-alpha.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/nlm32-i386.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/nlm32-ppc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/nlm32-sparc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/nlm32.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/nlm64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/nlmcode.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/nlmswap.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/ns32k.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/ns32knetbsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/oasys.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/opncls.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/osf-core.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pc532-mach.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pdp11.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pe-arm-wince.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pe-arm.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pe-i386.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pe-mcore.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pe-mips.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pe-ppc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pe-sh.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pe-x86_64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pef-traceback.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pef.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pef.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pei-arm-wince.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pei-arm.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pei-i386.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pei-ia64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pei-mcore.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pei-mips.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pei-ppc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pei-sh.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/pei-x86_64.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/peicode.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/plugin.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/ppcboot.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/reloc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/reloc16.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/riscix.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/rs6000-core.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/sco5-core.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/section.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/simple.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/som.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/som.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/sparclinux.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/sparclynx.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/sparcnetbsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/srec.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/stab-syms.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/stabs.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/sunos.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/syms.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/targets.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/tekhex.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/trad-core.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/vax1knetbsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/vaxbsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/vaxnetbsd.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/verilog.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/versados.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/version.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/vms-alpha.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/vms-lib.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/vms-misc.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/vms.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/xcofflink.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/xsym.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/xsym.h \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/xtensa-isa.c \
	/home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/bfd/xtensa-modules.c 

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of build dir POTFILES.
BLD-POTFILES = \
	../bfd_stdint.h \
	../bfdver.h \
	../elf32-aarch64.c \
	../elf32-ia64.c \
	../elf32-target.h \
	../elf64-aarch64.c \
	../elf64-ia64.c \
	../elf64-target.h \
	../peigen.c \
	../pepigen.c \
	../pex64igen.c \
	../targmatch.h 

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

$(srcdir)/$(PACKAGE).pot: $(SRC-POTFILES) $(BLD-POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=bug-binutils@gnu.org \
	  --files-from=$(srcdir)/SRC-POTFILES.in 
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=.. \
	  --directory=. \
	  --add-comments --keyword=_ --keyword=N_ \
	  --join-existing \
	  --msgid-bugs-address=bug-binutils@gnu.org \
	  --files-from=$(srcdir)/BLD-POTFILES.in
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
	rm -f Makefile Makefile.in *.mo *.msg *.cat *.cat.m
	rm -f SRC-POTFILES BLD-POTFILES 

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES) SRC-POTFILES.in BLD-POTFILES.in

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

SRC-POTFILES: SRC-POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

BLD-POTFILES: BLD-POTFILES.in
	  ( rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	../& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

SRC-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/SRC-POTFILES.in

BLD-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/BLD-POTFILES.in

# Note - The presence of SRC-POTFILES and BLD-POTFILES as dependencies
# here breaks the implementation of the 'distclean' rule for maintainers.
# This is because if 'make distclean' is run in the BFD directory, the
# Makefile there will be deleted before 'distclean' is made here, and so
# the dependency SRC-POTFILES -> SRC-POTFILES.in -> ../Makefile cannot
# be satisfied.
#
# The SRC-POTFILES and BLD-POTFILES dependencies cannot be removed,
# however since it is necessary that these files be built during
# *configure* time, so that configure can insert them into the
# po/Makefile that it is creating, so that the Makefile will have
# the correct dependencies.
Makefile: Make-in ../config.status SRC-POTFILES BLD-POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
