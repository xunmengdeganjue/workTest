#ifndef __BASE_DATA_H__
#define __BASE_DATA_H__

#include <stdio.h>	/*输入输出函数文件*/
#include <string.h>	/*字符串函数文件*/
#include <stdlib.h>	/*标准函数库文件*/

typedef struct scorenode{

	int number;		/*学号*/
	char name[10];	/*name of the student*/
	int xiaofei;	/*consumption*/
	struct scorenode *next;
	
} score;

#define LEN sizeof(struct scorenode)
#define DEBUG 

int n,k;
void menu();
score *creat(void);
score *load(score *head);
score *search(score *head);
score *del(score *head);
score *add(score *head,score *stu);
void print(score *head);
score *save (score *pl);


#endif
