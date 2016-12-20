include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/package.mk

PKG_NAME:=skysoft_wifi_schdule
PKG_VERSION:=1
PKG_BUILD_DIR:= $(BUILD_DIR)/$(PKG_NAME)

define Package/skysoft_wifi_schdule
  SECTION:=Skysoft
  CATEGORY:=Skysoft Proprietary software
  TITLE:=Skysoft Wifi Schdule
  DEPENDS:= +libuci +libsuci
endef

define Package/skysoft_wifi_schdule/Description
  This package contains skysoft application for QCA
endef


define Build/Prepare 
	mkdir -p $(PKG_BUILD_DIR) 
	$(CP) ./src/* $(PKG_BUILD_DIR)/ 
endef 

define Package/skysoft_wifi_schdule/install 
	$(INSTALL_DIR) $(1)/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/wifi_schdule $(1)/sbin/wifi_schdule
endef



$(eval $(call BuildPackage,skysoft_wifi_schdule))
