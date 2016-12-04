#ifndef _MYSEND_H_
#define _MYSEND_H_



int exec_cmd(char *cmd, char *val);
int pre_send(char * cmd);
void mailfile(char * dir);
void mailcontent(char * ss);
void mailformat();



#define MYMAIL   "/var/my.txt"
#define DELMAIL   "rm /var/my.txt"






































#endif