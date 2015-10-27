/**
	Copyright(C) 2014 Skysoft Info&Tech Co.,Ltd. All right reserved.
	@file services.h
	@brief service func header file.
	@author Nick Li (nick.li@cdskysoft.com)
	@version 1.0
	@date 2015-05-07(Create)
	@todo Something in plan.
	@details detail description of this file.
**/

#ifndef  __SERVICES_H__
#define  __SERVICES_H__

int getdlnainfo(tcm_session * session, char *name, char *val, char *list);
int setdlnainfo(tcm_session * session, char *name, char *val, char *list);

int getdiskinfo(tcm_session *session, char *name, char *val, char *list);

int getsamba(tcm_session *session, char *name, char *val, char *list);
int enablesamba(tcm_session *session, char *name, char *val, char *list);
int guestsambashare(tcm_session *session, char *name, char *val, char *list);
int setsamba(tcm_session *session, char *name, char *val, char *list);
int getaccounts(tcm_session *session, char *name, char *val, char *list);
int addaccount(tcm_session *session, char *name, char *val, char *list);
int updateaccount(tcm_session *session, char *name, char *val, char *list);
int delaccount(tcm_session *session, char *name, char *val, char *list);
int getsambapermission(tcm_session *session, char *name, char *val, char *list);
int setsambapermission(tcm_session *session, char *name, char *val, char *list);
int addfolder(tcm_session *session, char *name, char *val, char *list);
int updatefolder(tcm_session *session, char *name, char *val, char *list);
int delfolder(tcm_session *session, char *name, char *val, char *list);
//ftp
int getftp(tcm_session *session, char *name, char *val, char *list);
int setftp(tcm_session *session, char *name, char *val, char *list);
int enableftp(tcm_session *session, char *name, char *val, char *list);
int getftppermission(tcm_session *session, char *name, char *val, char *list);
int setftppermission(tcm_session *session, char *name, char *val, char *list);
int anonymftpshare(tcm_session *session, char *name, char *val, char *list);
//iTunes
int  getitunesinfo(tcm_session *session, char *name, char *val, char *list);
int  setitunesinfo(tcm_session *session, char *name, char *val, char *list);

int  addsharecheck(tcm_session *session, char *name, char *val, char *list);
int partsharecheck(tcm_session *session, char *name, char *val, char *list);
#endif 

