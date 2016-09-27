#
# Copyright (C) 2006-2012 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=ez-ipupdate
PKG_VERSION:=3.0.10
PKG_RELEASE:=2

include $(INCLUDE_DIR)/package.mk

define Package/ez-ipupdate
  SECTION:=net
  CATEGORY:=Network
  SUBMENU:=IP Addresses and Names
  TITLE:=Dynamic DNS services client
  URL:=http://ez-ipupdate.com/
endef

# uses GNU configure

#define Build/Compile
#	$(MAKE) -C $(PKG_BUILD_DIR)
#endef

define Build/Prepare
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef

define Package/ez-ipupdate/install
	$(INSTALL_DIR) $(1)/usr/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/ez-ipupdate $(1)/usr/sbin/
	$(INSTALL_DIR) $(1)/etc/init.d $(1)/etc/config
	$(INSTALL_BIN) ./files/ez-ipupdate.init $(1)/etc/init.d/ez-ipupdate
	$(INSTALL_BIN) ./files/ez-ipupdate.config $(1)/etc/config/ez-ipupdate
endef


$(eval $(call BuildPackage,ez-ipupdate))
