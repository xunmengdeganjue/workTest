include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/kernel.mk
  
PKG_NAME:=lib-csa
PKG_RELEASE:=1
PKG_VERSION:=1.0

include $(INCLUDE_DIR)/local-development.mk
include $(INCLUDE_DIR)/package.mk

define KernelPackage/lib-csa
  SECTION:=kernel
  CATEGORY:=Kernel modules
  SUBMENU:=Other modules
  TITLE:=Support Module for WiFi  csa log capture.
  FILES:=$(PKG_BUILD_DIR)/lib-csa.ko
  AUTOLOAD:=$(call AutoLoad,20,lib-csa)
endef

define KernelPackage/lib-csa/Description
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

$(eval $(call KernelPackage,lib-csa))
