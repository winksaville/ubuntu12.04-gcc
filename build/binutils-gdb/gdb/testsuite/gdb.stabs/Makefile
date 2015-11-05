VPATH = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/testsuite/gdb.stabs
srcdir = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/testsuite/gdb.stabs

all: 
	@echo "Nothing to be done for all..."

#### host, target, and site specific Makefile frags come in here.

clean mostlyclean:
	-rm -f *.o *~ core tmp.c tmp.s weird.s errs exclfwd gdb11479
	-rm -f *.dwo *.dwp

distclean maintainer-clean realclean: clean
	-rm -f Makefile gdb.log gdb.sum
