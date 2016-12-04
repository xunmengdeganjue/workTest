#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
#include "suci.h"

int exec_cmd(char *cmd, char *val)
{
	FILE *fp;
	int ret = 0;
	
	fp = popen(cmd, "r");
	if(val != NULL)	
		fgets(val,16,fp);	
	ret = pclose(fp);
	return ret;
}

int check_config(){
	char tmpbuf[64] = {0};
	if(do_uci_get("mail.@mymail[0].from",tmpbuf) != 0)
  		 return 0;

	if(do_uci_get("mail.@mymail[0].to",tmpbuf) != 0)
   		return 0;

	if(do_uci_get("mail.@mymail[0].smtp",tmpbuf) != 0)
  		 return 0;
	return 1;
}

int check_onoff(){
	char tmpbuf[16]={0};
	do_uci_get("mail.@mymail[0].enable",tmpbuf);
	if(atoi(tmpbuf) == 0){
  	 while(do_uci_get("mail.@tuple[-1]",tmpbuf) == 0)
   	 do_uci_delete("mail.@tuple[-1]",NULL);
	 do_uci_commit("mail");
	 return 0;
 }
	return atoi(tmpbuf);
}

int getEvent(int i)
{
	char ex_name[32]={0}, cmd[64]={0};
	char tmpbuf[16]={0},txt[32]={0},date[32]={0};
	int ret = 1;
	
		sprintf(ex_name,"mail.@tuple[%d]",i);
		sprintf(cmd,"%s.event",ex_name);
		do_uci_get(cmd,tmpbuf);
		sprintf(cmd,"mail.@onoff[0].%s",tmpbuf);
		do_uci_get(cmd,tmpbuf);
		if(atoi(tmpbuf)){
			sprintf(cmd,"%s.txt",ex_name);
			do_uci_get(cmd,txt);
			sprintf(cmd,"%s.date",ex_name);
			do_uci_get(cmd,date);
			sprintf(cmd,"mysend \"%s\" \"%s\"",txt,date);
		  ret = exec_cmd(cmd,NULL);
		  if(WEXITSTATUS(ret) == 0){
		  	do_uci_delete(ex_name,NULL);
		  	do_uci_commit("mail");
		  }
		  else i++;
		}
		else {
			do_uci_delete(ex_name,NULL);
			do_uci_commit("mail");
		}
    return i;
}


int main(){
	int on = 0, index = 0;
	char name[16] = {0},tmp[16] = {0};
	on = check_config();
	on *= check_onoff();
	while(on){
	 sprintf(name,"mail.@tuple[0]");
	 index = 0;
	 while(do_uci_get(name,tmp) == 0){
	 		index = getEvent(index);
	 		sprintf(name,"mail.@tuple[%d]",index);
	 	}
	 if(do_uci_get("mail.@tuple[0]",tmp) == 0)
	 	sleep(120);
	 else break;
 }


return 0;


}