VPATH = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/testsuite/gdb.disasm
srcdir = /home/wink/docker/ubuntu12.04-gcc/srcs/binutils-gdb/gdb/testsuite/gdb.disasm

.PHONY: all clean mostlyclean distclean realclean

all info install-info dvi install uninstall installcheck check:
	@echo "Nothing to be done for $@..."

clean mostlyclean:
	-rm -f *.o *.diff *~ *.bad core h8300s hppa mn10300 sh3
	-rm -f *.dwo *.dwp

distclean maintainer-clean realclean: clean
	-rm -f Makefile config.status config.log gdb.log gdb.sum
