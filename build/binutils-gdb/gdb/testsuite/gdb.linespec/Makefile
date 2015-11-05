VPATH = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/testsuite/gdb.linespec
srcdir = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/testsuite/gdb.linespec

EXECUTABLES = lspec

all info install-info dvi install uninstall installcheck check:
	@echo "Nothing to be done for $@..."

clean mostlyclean:
	-rm -f *~ *.o *.ci
	-rm -f *.dwo *.dwp
	-rm -f core $(EXECUTABLES)

distclean maintainer-clean realclean: clean
	-rm -f Makefile config.status config.log gdb.log gdb.sum
