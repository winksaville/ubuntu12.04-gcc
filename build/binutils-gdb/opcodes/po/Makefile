# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2003-2014 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = opcodes
VERSION = 2.25.1

SHELL = /bin/sh


srcdir = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/po
top_srcdir = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes
VPATH = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/po
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
MKINSTALLDIRS = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/../mkinstalldirs

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
POFILES =  $(srcdir)/fr.po $(srcdir)/sv.po $(srcdir)/tr.po $(srcdir)/es.po $(srcdir)/da.po $(srcdir)/de.po $(srcdir)/id.po $(srcdir)/pt_BR.po $(srcdir)/ro.po $(srcdir)/nl.po $(srcdir)/fi.po $(srcdir)/vi.po $(srcdir)/ga.po $(srcdir)/zh_CN.po $(srcdir)/it.po $(srcdir)/uk.po
GMOFILES =  $(srcdir)/fr.gmo $(srcdir)/sv.gmo $(srcdir)/tr.gmo $(srcdir)/es.gmo $(srcdir)/da.gmo $(srcdir)/de.gmo $(srcdir)/id.gmo $(srcdir)/pt_BR.gmo $(srcdir)/ro.gmo $(srcdir)/nl.gmo $(srcdir)/fi.gmo $(srcdir)/vi.gmo $(srcdir)/ga.gmo $(srcdir)/zh_CN.gmo $(srcdir)/it.gmo $(srcdir)/uk.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/aarch64-asm-2.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/aarch64-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/aarch64-asm.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/aarch64-dis-2.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/aarch64-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/aarch64-dis.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/aarch64-gen.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/aarch64-opc-2.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/aarch64-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/aarch64-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/aarch64-tbl.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/alpha-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/alpha-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/arc-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/arc-ext.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/arc-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/arm-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/avr-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/bfin-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/cgen-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/cgen-bitset.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/cgen-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/cgen-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/cr16-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/cr16-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/cris-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/cris-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/crx-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/crx-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/d10v-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/d10v-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/d30v-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/d30v-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/dis-buf.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/dis-init.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/disassemble.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/dlx-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/epiphany-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/epiphany-desc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/epiphany-desc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/epiphany-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/epiphany-ibld.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/epiphany-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/epiphany-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/fr30-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/fr30-desc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/fr30-desc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/fr30-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/fr30-ibld.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/fr30-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/fr30-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/frv-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/frv-desc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/frv-desc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/frv-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/frv-ibld.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/frv-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/frv-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/h8300-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/h8500-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/h8500-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/hppa-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/i370-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/i370-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/i386-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/i386-gen.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/i386-init.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/i386-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/i386-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/i386-tbl.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/i860-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/i960-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ia64-asmtab.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ia64-asmtab.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ia64-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ia64-gen.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ia64-opc-a.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ia64-opc-b.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ia64-opc-d.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ia64-opc-f.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ia64-opc-i.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ia64-opc-m.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ia64-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ia64-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ip2k-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ip2k-desc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ip2k-desc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ip2k-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ip2k-ibld.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ip2k-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ip2k-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/iq2000-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/iq2000-desc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/iq2000-desc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/iq2000-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/iq2000-ibld.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/iq2000-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/iq2000-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/lm32-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/lm32-desc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/lm32-desc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/lm32-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/lm32-ibld.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/lm32-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/lm32-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/lm32-opinst.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m10200-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m10200-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m10300-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m10300-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32c-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32c-desc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32c-desc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32c-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32c-ibld.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32c-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32c-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32r-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32r-desc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32r-desc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32r-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32r-ibld.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32r-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32r-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m32r-opinst.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m68hc11-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m68hc11-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m68k-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m68k-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/m88k-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mcore-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mcore-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mep-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mep-desc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mep-desc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mep-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mep-ibld.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mep-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mep-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/metag-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/microblaze-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/microblaze-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/micromips-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mips-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mips-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mips16-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mmix-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mmix-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/moxie-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/moxie-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/msp430-decode.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/msp430-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mt-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mt-desc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mt-desc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mt-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mt-ibld.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mt-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/mt-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/nds32-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/nds32-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/nios2-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/nios2-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ns32k-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/or1k-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/or1k-desc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/or1k-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/or1k-ibld.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/or1k-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/pdp11-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/pdp11-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/pj-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/pj-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ppc-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/ppc-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/rl78-decode.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/rl78-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/rx-decode.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/rx-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/s390-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/s390-mkopc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/s390-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/score-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/score-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/score7-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/sh-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/sh-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/sh64-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/sh64-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/sh64-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/sparc-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/sparc-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/spu-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/spu-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/sysdep.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/tic30-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/tic4x-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/tic54x-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/tic54x-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/tic6x-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/tic80-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/tic80-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/tilegx-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/tilegx-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/tilepro-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/tilepro-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/v850-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/v850-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/vax-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/w65-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/w65-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xc16x-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xc16x-desc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xc16x-desc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xc16x-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xc16x-ibld.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xc16x-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xc16x-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xgate-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xgate-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xstormy16-asm.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xstormy16-desc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xstormy16-desc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xstormy16-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xstormy16-ibld.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xstormy16-opc.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xstormy16-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/xtensa-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/z80-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/z8k-dis.c \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/z8k-opc.h \
     /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/opcodes/z8kgen.c

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
