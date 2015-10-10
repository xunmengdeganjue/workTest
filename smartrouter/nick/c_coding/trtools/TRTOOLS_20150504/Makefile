TOPDIR:=${CURDIR}
LC_ALL:=C
LANG:=C
export TOPDIR LC_ALL LANG

empty:=
space:= $(empty) $(empty)
$(if $(findstring $(space),$(TOPDIR)),$(error ERROR:the path to the openwrt directory must not include any spaces))


world:
	@echo "the TOPDIR is: ${TOPDIR}"

prepare:
	make -C $(TOPDIR)/lib; \
	make -C $(TOPDIR)/lib install
source: FORCE
	cd $(TOPDIR)/source;$(MAKE)
	#make -C $(TOPDIR)/source/trfcma;\
	#make -C $(TOPDIR)/source/trfcma install; \
	#make -C $(TOPDIR)/source/truci;\
	#make -C $(TOPDIR)/source/truci install 

world:prepare source


PHONY +=FORCE
FORCE:
# Declare the contents of the .PHONY variable as phony.  We keep that
# information in a variable so we can use it in if_changed and friends.
.PHONY: $(PHONY)


clean:
	rm -rf 
