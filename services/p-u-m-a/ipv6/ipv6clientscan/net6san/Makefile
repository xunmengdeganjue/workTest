include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/package.mk

PKG_NAME:=skysoft_net6scan
PKG_VERSION:=1
PKG_BUILD_DIR:= $(BUILD_DIR)/$(PKG_NAME)

define Package/skysoft_net6scan
  SECTION:=Skysoft
  CATEGORY:=Skysoft Proprietary software
  TITLE:=Skysoft Net6 Scan
  DEPENDS:=
endef 

define Package/skysoft_net6scan/Description
  This package contains skysoft application for QCA,which is write to collect the 
  ipv6 clients of the router.
endef


define Build/Prepare 
	mkdir -p $(PKG_BUILD_DIR) 
	$(CP) ./src/* $(PKG_BUILD_DIR)/ 
endef 

define Package/skysoft_net6scan/install 
	$(INSTALL_DIR) $(1)/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/net6scan $(1)/sbin/net6scan
	$(INSTALL_DIR) $(1)/etc/init.d
	$(INSTALL_BIN) ./files/net6scan.init $(1)/etc/init.d/net6scan
	
endef



$(eval $(call BuildPackage,skysoft_net6scan))
