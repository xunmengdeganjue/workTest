#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#include <unistd.h>
#include "mysend.h"
#include "suci.h"
#include <sys/wait.h>
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

int pre_send(char * cmd){
	char tmpbuf[64]={0};
	if(do_uci_get("mail.@mymail[0].from",tmpbuf) != 0)
  		 return 0;
	else sprintf(cmd,"sendmail -f %s ",tmpbuf);
	
	memset(tmpbuf,0,64);
	if(do_uci_get("mail.@mymail[0].to",tmpbuf) != 0)
   		return 0;
	else sprintf(cmd+strlen(cmd),"-t %s ",tmpbuf);
	
	memset(tmpbuf,0,64);
	if(do_uci_get("mail.@mymail[0].smtp",tmpbuf) != 0)
  		 return 0;
	else sprintf(cmd+strlen(cmd),"-S %s ",tmpbuf);
	
	memset(tmpbuf,0,64);	
	do_uci_get("mail.@mymail[0].name",tmpbuf);
	sprintf(cmd+strlen(cmd),"-au%s ",tmpbuf);
	
	memset(tmpbuf,0,64);	
	do_uci_get("mail.@mymail[0].passwd",tmpbuf);
	sprintf(cmd+strlen(cmd),"-ap%s ",tmpbuf);

	sprintf(cmd+strlen(cmd)," < %s",MYMAIL);
	
      do_uci_get("mail.@mymail[0].enable",tmpbuf);
      return atoi(tmpbuf);
}

void mailfile(char * dir)
{
	char cmd[64]={0};
	sprintf(cmd,"cat %s >> %s",dir,MYMAIL);
	exec_cmd(cmd,NULL);
}

int mailevent(char * event)
{
	char tmpbuf[16]={0};
	char cmd[32] = {0};

	sprintf(cmd,"mail.@onoff[0].%s",event);
	do_uci_get(cmd,tmpbuf);
	return atoi(tmpbuf);
}

void mailcontent(char * ss)
{	char tmpbuf[128]={0};

	sprintf(tmpbuf,"echo %s >> %s",ss,MYMAIL);
	exec_cmd(tmpbuf,NULL);
}

void mailformat(){
	char tmpbuf[64]={0};
	char cmd[128]={0};
	if(do_uci_get("mail.@mymail[0].subject",tmpbuf) != 0)
  		 sprintf(cmd,"echo Subject:%s >> %s","RT4230W",MYMAIL);
	else 
		sprintf(cmd,"echo Subject:%s >> %s",tmpbuf,MYMAIL);
	exec_cmd(cmd,NULL);
	memset(tmpbuf,0,64);
	memset(cmd,0,128);
	if(do_uci_get("mail.@mymail[0].cc",tmpbuf) == 0){
		sprintf(cmd,"echo cc:%s >> %s",tmpbuf,MYMAIL);
		exec_cmd(cmd,NULL);
	}
	sprintf(cmd,"echo  >> %s",MYMAIL);
	exec_cmd(cmd,NULL);
}

int main(int argc, char **argv){
	char buf[256]={0};
	int i = 0 ,k = 1;
	
	if(pre_send(buf) == 0)
		return 1;
	 mailformat();
	 if(strcmp(argv[1],"-f") == 0)
	 	mailfile(argv[2]);
	 else 		
	     for(i=1;i<argc;i++)
        	    mailcontent(argv[i]);

	 k = exec_cmd(buf,NULL);
	 exec_cmd(DELMAIL,NULL);
	return WEXITSTATUS(k);
}