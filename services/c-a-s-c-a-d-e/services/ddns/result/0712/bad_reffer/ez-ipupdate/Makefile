# 
# Copyright (C) 2006 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#
# $Id: Makefile,v 1.1.2.2 2006/12/06 00:48:30 ronger Exp $

include $(TOPDIR)/rules.mk

PKG_NAME:=ez-ipupdate
PKG_VERSION:=3.0.10
PKG_RELEASE:=2

#PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
#PKG_SOURCE_URL:=$(DNI_DL_WEB) @SF/bridge
#PKG_MD5SUM:=6505c9d18ef6b5ce13fe2a668eb5724b
#PKG_CAT:=zcat

PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)

PKG_GIT_TREEISH:=ez-ipupdate-v3.0.10-dni21

include $(INCLUDE_DIR)/package.mk

define Package/ez-ipupdate
  SECTION:=net
  CATEGORY:=Network
  SUBMENU:=IP Addresses and Names
  TITLE:=Dynamic DNS application
  URL:=http://ez-ipupdate.com/
endef

define Build/Compile
	$(MAKE) -C $(PKG_BUILD_DIR)
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef

define Package/ez-ipupdate/install
	install -m0755 -d $(1)/usr/sbin
	install -m0755 $(PKG_BUILD_DIR)/ez-ipupdate $(1)/usr/sbin/
	#install -m0755 -d $(1)/sbin
	#install -m0755 ./files/cmd_ddns $(1)/sbin/
	install -m0755 -d $(1)/etc
	install -m0755 ./files/ez-ipupdate.script $(1)/etc/ez-ipupdate.script
	$(INSTALL_DIR) $(1)/etc/init.d $(1)/etc/config
	$(INSTALL_BIN) ./files/ez-ipupdate.init $(1)/etc/init.d/ez-ipupdate
	$(INSTALL_BIN) ./files/ez-ipupdate.config $(1)/etc/config/ez-ipupdate

endef

$(eval $(call BuildPackage,ez-ipupdate))
