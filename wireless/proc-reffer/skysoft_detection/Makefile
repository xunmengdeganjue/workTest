include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/package.mk

PKG_NAME:=skysoft_detection
PKG_VERSION:=1
PKG_BUILD_DIR:= $(BUILD_DIR)/$(PKG_NAME)

define Package/skysoft_detection
  SECTION:=Skysoft
  CATEGORY:=Skysoft Proprietary software
  TITLE:=Skysoft detection
  DEPENDS:= +libuci +libpthread +librt
endef

define Package/skysoft_detection/Description
  This package contains skysoft application for QCA
endef


define Build/Prepare 
	mkdir -p $(PKG_BUILD_DIR) 
	$(CP) ./src/* $(PKG_BUILD_DIR)/ 
	$(CP) ./files $(PKG_BUILD_DIR)/ -rf
endef 

define Package/skysoft_detection/install 
	$(INSTALL_DIR) $(1)/usr/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/detec $(1)/usr/sbin/detec
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/mysend $(1)/usr/sbin/mysend
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/mymail $(1)/usr/sbin/mymail
	$(INSTALL_DIR) $(1)/etc/config
	$(INSTALL_BIN) ./files/detection.config $(1)/etc/config/detection
	$(INSTALL_BIN) ./files/mail.config $(1)/etc/config/mail
	$(INSTALL_BIN) ./files/rebootInfo.config $(1)/etc/config/rebootInfo
	$(INSTALL_DIR) $(1)/etc/init.d
	$(INSTALL_BIN) ./files/detection.init $(1)/etc/init.d/detection
	$(INSTALL_BIN) ./files/mail.init $(1)/etc/init.d/mail
endef



$(eval $(call BuildPackage,skysoft_detection))
