# Generated automatically from Makefile.in by configure.
# Makefile.in generated automatically by automake 1.3 from Makefile.am

# Copyright (C) 1994, 1995, 1996, 1997, 1998 Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.


SHELL = /bin/sh

srcdir = .
top_srcdir = ..
prefix = /opt/automake-1.3/
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include

DISTDIR =

pkgdatadir = $(datadir)/automake
pkglibdir = $(libdir)/automake
pkgincludedir = $(includedir)/automake

top_builddir = ..

ACLOCAL = aclocal
AUTOCONF = autoconf
AUTOMAKE = automake
AUTOHEADER = autoheader

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
transform = s,x,x,

NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
MAKEINFO = makeinfo
PACKAGE = automake
PERL = /usr/bin/perl
TAR = tar
VERSION = 1.3

AUTOMAKE_OPTIONS = gnits

TESTS = mdate.test vtexi.test acoutput.test instexec.test \
checkall.test acoutnoq.test acouttbs.test libobj.test proginst.test \
acoutqnl.test confincl.test spelling.test prefix.test badprog.test \
depend.test exdir.test canon.test installsh.test empty.test \
rulepat.test insh.test canon2.test target.test extra.test noinst.test \
instman.test mkinstall.test auxdir.test canon3.test mdate2.test	\
subdir.test backsl.test package.test number.test insh2.test \
outdir.test fpinstall.test fpinst2.test texinfo.test dejagnu.test \
yacc.test mkinst2.test texinfo2.test ansi.test depacl.test \
depacl2.test error.test colon.test vtexi2.test tags.test comment.test \
ansi2.test info.test obsolete.test lex.test scripts.test subdir2.test \
exsource.test canon4.test dup.test defun.test cxxlink.test cxxnoc.test \
order.test libobj2.test interp.test block.test libobj3.test dup2.test \
gnits.test interp2.test colneq.test implicit.test spell.test \
spell2.test confsub.test primary.test primary2.test depend2.test \
spell3.test comment2.test vpath.test symlink.test discover.test	\
acinclude.test req.test acsilent.test distdir.test libobj4.test	\
libobj5.test version.test ranlib.test confvar.test confvar2.test \
stdlib.test cxxo.test colon2.test colon3.test remake.test output.test \
output2.test remake2.test output3.test output4.test colneq2.test \
subst.test defun2.test yaccpp.test texinfo3.test texinfo4.test \
tagsub.test cxxlibobj.test seenc.test cygwin32.test lisp.test \
stamph.test ldadd.test version2.test conf2.test cond.test cond2.test \
xsource.test libobj6.test depend3.test output5.test ammissing.test \
install.test libobj7.test objc.test cond3.test cxxcpp.test \
aclocal.test alpha.test whoami.test unused.test condman.test \
texinfo5.test aclocali.test texinfo6.test condman2.test colon4.test \
java.test sinclude.test javaprim.test javasubst.test aclocalii.test \
lex2.test libobj8.test version3.test instdata.test exdir2.test \
colon5.test library.test

EXTRA_DIST = defs $(TESTS)
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_CLEAN_FILES = 
DIST_COMMON =  ChangeLog Makefile.am Makefile.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

GZIP = --best
all: Makefile

.SUFFIXES:
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4)
	cd $(top_srcdir) && $(AUTOMAKE) --gnits --include-deps tests/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status

tags: TAGS
TAGS:


distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = tests

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  d=$(srcdir); \
	  test -f $(distdir)/$$file \
	  || ln $$d/$$file $(distdir)/$$file 2> /dev/null \
	  || cp -p $$d/$$file $(distdir)/$$file; \
	done
check-TESTS: $(TESTS)
	@failed=0; all=0; \
	srcdir=$(srcdir); export srcdir; \
	for tst in $(TESTS); do \
	  if test -f $$tst; then dir=.; \
	  else dir="$(srcdir)"; fi; \
	  if $(TESTS_ENVIRONMENT) $$dir/$$tst; then \
	    all=`expr $$all + 1`; \
	    echo "PASS: $$tst"; \
	  elif test $$? -ne 77; then \
	    all=`expr $$all + 1`; \
	    failed=`expr $$failed + 1`; \
	    echo "FAIL: $$tst"; \
	  fi; \
	done; \
	if test "$$failed" -eq 0; then \
	  banner="All $$all tests passed"; \
	else \
	  banner="$$failed of $$all tests failed"; \
	fi; \
	dashes=`echo "$$banner" | sed s/./=/g`; \
	echo "$$dashes"; \
	echo "$$banner"; \
	echo "$$dashes"; \
	test "$$failed" -eq 0
info:
dvi:
check: all
	$(MAKE) check-TESTS
installcheck:
install-exec: 
	@$(NORMAL_INSTALL)

install-data: 
	@$(NORMAL_INSTALL)

install: install-exec install-data all
	@:

uninstall: 

install-strip:
	$(MAKE) INSTALL_PROGRAM='$(INSTALL_PROGRAM) -s' INSTALL_SCRIPT='$(INSTALL_PROGRAM)' install
installdirs:


mostlyclean-generic:
	-test -z "$(MOSTLYCLEANFILES)" || rm -f $(MOSTLYCLEANFILES)

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-rm -f Makefile $(DISTCLEANFILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)

maintainer-clean-generic:
	-test -z "$(MAINTAINERCLEANFILES)" || rm -f $(MAINTAINERCLEANFILES)
	-test -z "$(BUILT_SOURCES)" || rm -f $(BUILT_SOURCES)
mostlyclean:  mostlyclean-generic

clean:  clean-generic mostlyclean

distclean:  distclean-generic clean distclean-local
	-rm -f config.status

maintainer-clean:  maintainer-clean-generic distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

.PHONY: tags distdir check-TESTS info dvi installcheck install-exec \
install-data install uninstall all installdirs mostlyclean-generic \
distclean-generic clean-generic maintainer-clean-generic clean \
mostlyclean distclean maintainer-clean


distclean-local:
	-rm -rf testSubdir

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
