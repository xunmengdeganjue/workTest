include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/package.mk

PKG_NAME:=skysoft_netscan
PKG_VERSION:=1
PKG_BUILD_DIR:= $(BUILD_DIR)/$(PKG_NAME)

define Package/skysoft_netscan
  SECTION:=Skysoft
  CATEGORY:=Skysoft Proprietary software
  TITLE:=Skysoft Net Scan
  DEPENDS:= +libuci +libsuci
endef

define Package/skysoft_netscan/Description
  This package contains skysoft application for QCA
endef


define Build/Prepare 
	mkdir -p $(PKG_BUILD_DIR) 
	$(CP) ./src/* $(PKG_BUILD_DIR)/ 
endef 

define Package/skysoft_netscan/install 
	$(INSTALL_DIR) $(1)/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/netscan $(1)/sbin/netscan
endef



$(eval $(call BuildPackage,skysoft_netscan))
