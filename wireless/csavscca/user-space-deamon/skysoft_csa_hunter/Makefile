include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/package.mk

PKG_NAME:=skysoft_csa_hunter
PKG_VERSION:=1
PKG_BUILD_DIR:= $(BUILD_DIR)/$(PKG_NAME)

define Package/skysoft_csa_hunter
  SECTION:=Skysoft
  CATEGORY:=Skysoft Proprietary software
  TITLE:=Skysoft csa and cca log capture.
  DEPENDS:=
endef

define Package/skysoft_csa_hunter/Description
  This package contains skysoft application for QCA
endef


define Build/Prepare 
	mkdir -p $(PKG_BUILD_DIR) 
	$(CP) ./src/* $(PKG_BUILD_DIR)/ 
	$(CP) ./files $(PKG_BUILD_DIR)/ -rf
endef 

define Package/skysoft_csa_hunter/install 
	$(INSTALL_DIR) $(1)/usr/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/csa_hunter $(1)/usr/sbin/csahunter
	$(INSTALL_DIR) $(1)/etc/init.d
	$(INSTALL_BIN) ./files/csa_hunter.init $(1)/etc/init.d/csahunter

endef



$(eval $(call BuildPackage,skysoft_csa_hunter))
