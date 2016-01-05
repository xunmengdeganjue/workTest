include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/package.mk

PKG_NAME:=skysoft_netinfo_notify
PKG_VERSION:=1
PKG_BUILD_DIR:= $(BUILD_DIR)/$(PKG_NAME)

define Package/skysoft_netinfo_notify
  SECTION:=Skysoft
  CATEGORY:=Skysoft Proprietary software
  TITLE:=Skysoft Net6 Scan
  DEPENDS:=
endef 

define Package/skysoft_netinfo_notify/Description
  This package contains skysoft application for QCA.
endef


define Build/Prepare 
	mkdir -p $(PKG_BUILD_DIR) 
	$(CP) ./src/* $(PKG_BUILD_DIR)/ 
endef 

define Package/skysoft_netinfo_notify/install 
	$(INSTALL_DIR) $(1)/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/netinfo_notify $(1)/sbin/netinfo_notify
	$(INSTALL_DIR) $(1)/etc/init.d
	$(INSTALL_BIN) ./files/netinfo_notify.init $(1)/etc/init.d/netinfo_notify
	
endef



$(eval $(call BuildPackage,skysoft_netinfo_notify))
