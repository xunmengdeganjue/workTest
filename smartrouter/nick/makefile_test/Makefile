# Makefile for OpenWRT-SDK-Learning
#
#
TOPDIR:=${CURDIR}
LC_ALL:=C
LANG:=C
export TOPDIR LC_ALL LANG

empty:=
space:= $(empty) $(empty)
$(if $(findstring $(space),$(TOPDIR)),$(error ERROR:the path to the openwrt directory must not include any spaces))


world:
	@echo "the TOPDIR is: ${TOPDIR}"

include $(TOPDIR)/include/host.mk
include $(TOPDIR)/test/test.mk

ifneq ($(MF_BUILD),1)
    override MF_BUILD=1
    export MF_BUILD
    include $(TOPDIR)/test/toplevel.mk
else
    include $(TOPDIR)/test/tools.mk

endif

ERR = $(error found an error !)

.:wq
%config: 
	$(Q)mkdir -p include/linux include/config
	$(Q)$(MAKE) $(build)=scripts/kconfig $@



.PHONY:err package clean prepare1

clean:
	-rm -rf $(BUILD_DIR) $(BIN_DIR) $(BUILD_LOG_DIR)

err: ; $(ERR)

prepare: .config  $(TOPDIR)/test/predownload.mk 
	
package: .config
	@cd $(TOPDIR)/packages;$(MAKE)

world: package 	prepare prepare1 





