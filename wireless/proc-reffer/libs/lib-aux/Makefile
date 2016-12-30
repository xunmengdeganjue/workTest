include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/kernel.mk
  
PKG_NAME:=lib-aux
PKG_SOURCE_PROTO:=git
PKG_BRANCH:=master
PKG_RELEASE:=1
PKG_VERSION:=1.0

include $(INCLUDE_DIR)/local-development.mk
include $(INCLUDE_DIR)/package.mk

define KernelPackage/lib-aux
  SECTION:=kernel
  CATEGORY:=Kernel modules
  SUBMENU:=Other modules
  TITLE:=Support Module for wifi
  FILES:=$(PKG_BUILD_DIR)/lib-aux.ko
  AUTOLOAD:=$(call AutoLoad,20,lib-aux)
endef

define KernelPackage/lib-aux/Description
This package contains a support modules for QCA chipset
endef
              
define Build/Compile
	$(MAKE) -C "$(LINUX_DIR)" \
		CROSS_COMPILE="$(TARGET_CROSS)" \
		ARCH="$(LINUX_KARCH)" \
		SUBDIRS="$(PKG_BUILD_DIR)" \
		EXTRA_CFLAGS="$(EXTRA_CFLAGS)" \
		modules
endef

$(eval $(call KernelPackage,lib-aux))
