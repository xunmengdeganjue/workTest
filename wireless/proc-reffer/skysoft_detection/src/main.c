/*
**  Copyright (c) 2014 Michael Liu(michael.liu.point@gmail.com).
**
**  Project: Gateway Unified Management Platform
**  File:      main.c
**  Author:  Michael
**  Date:    08/04/2014
**
**  Purpose:
**    system detec implement.
*/

/* Include files. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include <fcntl.h>
#include <signal.h>
#include <unistd.h>
#include <syslog.h>
#include "suci.h"
#include "main.h"

int CPU = 0, MEM = 0, RESULT = 0, PING = 0, TRYNUM = 0;
int cpunum = 0, memnum = 0, dnsnum = 0;

void save_reboot_resaon(char * rea, char* tim){
	char tembuf[16] = {0};
	int ret = 0;
	do_uci_add("rebootInfo", "record", tembuf);
	if(strlen(rea) > 1)
	   do_uci_set(SAVER,rea);
	if(strlen(tim) > 1)
	   do_uci_set(SAVET,tim);
	if(do_uci_get("rebootInfo.@record[100]",tembuf) == 0){
		do_uci_delete("rebootInfo.@record[0]", NULL);
		}
	do_uci_commit("rebootInfo");	
}
void set_reboot_resaon(){
	char str[16] = {0};
	char cmd[64] = {0}, rea[16] = {0};
       unsigned long tv;
	struct tm *tblock;

	
	do_uci_delete(BOOTTIME, NULL);
	exec_cmd(GETR,str);
	if(str[0] == '\0'){
                 strcpy(rea,puma3);
                 goto output;			
	}
	str[strlen(str)-2] = '\0';
	if(strstr(str,"77665500") )
		strcpy(rea,puma0);
	else if(strstr(str,"77665501") )
		strcpy(rea,puma1);
	else if(strstr(str,"77665502") )
		strcpy(rea,puma2);
	else if(strstr(str,"77665503") )
		strcpy(rea,puma3);
	else if(strstr(str,"77665504") )
		strcpy(rea,puma4);
	else if(strstr(str,"77665505") )
		strcpy(rea,puma5);
	else if(strstr(str,"77665506") )
		strcpy(rea,puma6);
	else if(strstr(str,"77665507") )		
		strcpy(rea,puma7);
	else if(strstr(str,"77665508") )		
		strcpy(rea,puma8);
	else if(strstr(str,"77665509") )		
		strcpy(rea,puma9);
	else{ 
                 strcpy(rea,puma3);
                   goto output;
		}
	memset(str,0,16);
	exec_cmd(GETT,str);
	tv = strtoul(str,0,16);
	if(tv > 0x1){
	tblock=localtime(&tv);
	sprintf(cmd,"%02d:%02d:%02d/%4d-%02d-%02d",tblock->tm_hour,tblock->tm_min,tblock->tm_sec,
		                                                               tblock->tm_year+1900,tblock->tm_mon+1,tblock->tm_mday);
		}
output:
	do_uci_set(BOOTRES,rea);
	if(strcmp(cmd,"") != 0){
		do_uci_set(BOOTTIME,cmd);
	}
	do_uci_commit("detection");
	if (access(tmpFILE, F_OK) == -1) {
		exec_cmd(creatFILE,NULL);
		save_reboot_resaon(rea,cmd);
		syslog(LOG_ERR,"reboot reason %s %s\n",rea, cmd);
	}
	
}

int exec_cmd(char *cmd, char *val)
{
	FILE *fp;
	int ret;
	
	fp = popen(cmd, "r");
	if(val != NULL)	
		fgets(val,16,fp);	
	 ret = pclose(fp);
	
	 return ret;
}


int check_dns(){
	char tmpbuf[16]={0};
	char ipbuf[16]={0}, ttlbuf[16]={0}, sizebuf[16]={0};
	char cmd[128]={0};
	char h[8] = {0};
	int num = 0;
	
	do_uci_get(IPDEST,ipbuf);
	do_uci_get(TTL,ttlbuf);
	do_uci_get(SIZE,sizebuf);
	
	if(strlen(ipbuf) <= 6 || strcmp(ipbuf,"0.0.0.0") == 0){
		memset(ipbuf,0,16);
		exec_cmd(DNS_INFO,ipbuf);
		if(strcmp(ipbuf,"") == 0){		 
			return 0; //dns is empty
		}
		else 	
			ipbuf[strlen(ipbuf)-1] = '\0';
	}
	
		sprintf(cmd,DNS_PING,ipbuf,ttlbuf,sizebuf);
		exec_cmd(cmd,tmpbuf);
		tmpbuf[strlen(tmpbuf)-1] = '\0';
		num = atoi(tmpbuf);		
		if(num == 100)
			dnsnum++;
		else			
			dnsnum = 0;
		sprintf(h,"%d",dnsnum);
		do_uci_set("detection.@detect[0].miss",h);	
		if(dnsnum >= TRYNUM)
		    RESULT = 3;
		do_uci_commit("detection");
		return 1;  
}


void init_data(){
	char tmpbuf[64]={0};
	pid_t pid = 0;
	
	do_uci_get(THRECPU,tmpbuf);
	CPU = atoi(tmpbuf);
	do_uci_get(THREMEM,tmpbuf);
	MEM = atoi(tmpbuf);	
	memset(tmpbuf,0,64);
	do_uci_get(THRETRY,tmpbuf);
	TRYNUM = atoi(tmpbuf);
	
	exec_cmd(get24G,tmpbuf);
	tmpbuf[strlen(tmpbuf)-1] = '\0';
	if(atoi(tmpbuf) != 0)
		do_uci_set(CURCHAN2,tmpbuf);

	exec_cmd(get5G,tmpbuf);
	tmpbuf[strlen(tmpbuf)-1] = '\0';
	if(atoi(tmpbuf) != 0)
		do_uci_set(CURCHAN5,tmpbuf);
	
	pid = getpid();
	sprintf(tmpbuf,"echo %d > %s", pid,tmpPID);
	exec_cmd(tmpbuf,NULL);
	do_uci_commit("detection");
}

int init_timer(){	
	struct itimerval value;
	char tmpbuf[16]={0};
	int inter = 0 , on = 0;
	
	do_uci_get(ON_OFF,tmpbuf);
	on = atoi(tmpbuf);
	memset(tmpbuf,0,16);
	do_uci_get(TIMEOUT,tmpbuf);
	inter = atoi(tmpbuf);

  value.it_value.tv_sec = inter;
  value.it_value.tv_usec = 0;
  value.it_interval = value.it_value;
  if(on)
    setitimer(ITIMER_REAL, &value, NULL);
  return on;
}

void cleanTimer(){
	struct itimerval value;
	
  value.it_value.tv_sec = 0;
  value.it_value.tv_usec = 0;
  value.it_interval.tv_sec = 0;
  value.it_interval.tv_usec = 0;
  setitimer(ITIMER_REAL, &value, NULL);
	
}
void sighandle(int num){
	char value[16] = {0};
	char curath0[16] = {0} ,curath1[16] = {0};
	char cmd[64]={0},buf[64] = {0};
	time_t tt;
	struct tm * timeinfo;
	
	do_uci_get(CURCHAN2,curath1);
	do_uci_get(CURCHAN5,curath0);
	
	tt = time(0);
	timeinfo = localtime ( &tt ); 
	sprintf(cmd,"%02d:%02d:%02d/%4d-%02d-%02d",timeinfo->tm_hour,timeinfo->tm_min,timeinfo->tm_sec,
		           timeinfo->tm_year+1900,timeinfo->tm_mon+1,timeinfo->tm_mday);
	exec_cmd(get24G,value);
	value[strlen(value)-1] = '\0';
	if(atoi(value) != 0 && atoi(value) != atoi(curath1)){
		sprintf(buf,"2.4G channel change from %s to %s",curath1,value);
		exec_cmd("/etc/init.d/mail stop &",NULL);
		do_uci_set(CURCHAN2,value);	
		do_uci_add("mail","tuple",NULL);
		do_uci_set("mail.@tuple[-1].event","channel"); 
		do_uci_set("mail.@tuple[-1].txt","2.4G channel has been changed"); 
		do_uci_set("mail.@tuple[-1].date",cmd);
		do_uci_add("detection","statistic",NULL);
		do_uci_set("detection.@statistic[-1].msg",buf); 
		do_uci_set("detection.@statistic[-1].date",cmd);
		do_uci_commit("mail");
		do_uci_commit("detection");
		exec_cmd("/etc/init.d/mail start &",NULL);
	}
	exec_cmd(get5G,value);
	value[strlen(value)-1] = '\0';
	if(atoi(value) != 0 && atoi(value) != atoi(curath0)){
		sprintf(buf,"5G channel change from %s to %s",curath0,value);
		exec_cmd("/etc/init.d/mail stop &",NULL);
		do_uci_set(CURCHAN5,value);	
		do_uci_add("mail","tuple",NULL);
		do_uci_set("mail.@tuple[-1].event","channel"); 
		do_uci_set("mail.@tuple[-1].txt","5G channel has been changed"); 
		do_uci_set("mail.@tuple[-1].date",cmd);
		do_uci_add("detection","statistic",NULL);
		do_uci_set("detection.@statistic[-1].msg",buf); 
		do_uci_set("detection.@statistic[-1].date",cmd);
		do_uci_commit("mail");
		do_uci_commit("detection");
		exec_cmd("/etc/init.d/mail start &",NULL);
	}
}

void sigtimeout(){
	char value[16] = {0};
	int infocpu = 0 , infomem = 0;
		
  exec_cmd(CPU_INFO,value);
  value[strlen(value)-1] = '\0';
  infocpu = atoi(value);

  memset(value,0,16);
  exec_cmd(MEM_INFO,value);
  value[strlen(value)-1] = '\0';
  infomem = atoi(value);
  
	if( infocpu < CPU )
		cpunum++;
      else
		cpunum = 0;
       if( infomem < MEM )
		memnum++;
       else
	   	memnum = 0;
if(cpunum >= TRYNUM) 
	RESULT = 1;
else if(memnum >= TRYNUM) 
	RESULT = 2;
else
	PING = 1;
}

int main(int argc, char *argv[])
{
	int sw = 0;
	int quit = 0;

	signal(SIGALRM, sigtimeout);
	signal(SIGUSR1, sighandle);
	
	init_data();
	set_reboot_resaon();
	sw = init_timer();	

while(1){
  while(sw)
   {
     switch (RESULT) 
     {
      case 1: 
		     exec_cmd(REBOOT5,NULL);
		     quit = 1;
		     break;
      case 2:
		     exec_cmd(REBOOT6,NULL);
		     quit = 1;
		     break;
      case 3:
		     exec_cmd(REBOOT7,NULL);
		     quit = 1;
		     break;
      default:
      	if(!PING)
      	 	sleep(600);
      	 break;	
      }	     
		if(quit == 1)
			break;	
		if(PING){
			check_dns();	
			PING = 0;		
		}		   	         
  }
  sleep(600);
}

	cleanTimer();

  return 0;

}
 
