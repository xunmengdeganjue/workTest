#
# Copyright (C) 2006-2010 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=skysoft_ieee1905
PKG_VERSION:=1.0
PKG_RELEASE:=1.0


include $(INCLUDE_DIR)/package.mk

define Package/skysoft_ieee1905
	SECTION:=utils
	CATEGORY:=Utilities
	DEPENDS:=+libpcap +libpthread +libopenssl +librt
	TITLE:=skysoft_ieee1905
endef
define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef

#define Build/Compile

#	$(MAKE) -C $(PKG_BUILD_DIR)
#endef

#TARGET_CFLAGS +="-DDEBUG"

define Package/skysoft_ieee1905/description
	the skysoft_ieee1905 is a test AL,HLE for ieee1905.1a,and is part of the PUMA-router services module.
endef


#define Build/Compile
	#echo "need not compile anything "
#endef

define Package/skysoft_ieee1905/install	
#	$(INSTALL_DIR) $(1)/etc/config
#	$(INSTALL_BIN) ./files/pwd $(1)/etc/config/pwd
	$(INSTALL_DIR) $(1)/etc/init.d
	$(INSTALL_BIN) ./files/ieee1905.init $(1)/etc/init.d/ieee1905
	$(INSTALL_DIR) $(1)/usr/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/output/al_entity $(1)/usr/sbin/
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/output/hle_entity $(1)/usr/sbin/

endef

$(eval $(call BuildPackage,skysoft_ieee1905))


