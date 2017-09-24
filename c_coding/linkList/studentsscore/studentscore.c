
#include "studentscore.h"


void menu(){
	printf("\n\n\n");
	printf("\t\t-----------------STUDENT CONSUME-------------------------\n");
	printf("\t\t\t0	exit													\n");
	printf("\t\t\t1	creat													\n");
	printf("\t\t\t2	load													\n");
	printf("\t\t\t3	search													\n");
	printf("\t\t\t4	delete													\n");
	printf("\t\t\t5	add														\n");
	printf("\t\t\t6	show													\n");
	printf("\t\t\t7	save													\n");
	printf("\t\t----------------------------------------------------------\n");
	printf("\t\tchoose(0-7):");
	printf("\n\n\n");
}

score *creat(void){
	score *head;
	score *p1,*p2,*p3,*max;
	char tmpname[10] = {0};
	int tmpxiaofei = 0;
	int i,j;
	
	printf("\033[31mCreat the base information!\033[0m\n");
	p1=p2=p3=(score *)malloc(LEN);
	printf("please input student's information,input 0 exit!\n");
	repeat1: printf("please input student's number(number>0):");/*输入学号，学号应大于0*/
	scanf("   %d",&p1->number);
	
	while(p1->number < 0){
		getchar();
		printf("error,please input number again:");
		scanf( "%d",&(p1->number) );	
	}
	if(p1->number == 0){
		goto end;
	}

	if(p1->number == 0){
		goto end;
	}else{
		p3 = head;
		if(n>0)
		{
			for(i=0;i<n;i++)
			{
				if(p1->number != p3->number)
					p3=p3->next;
				else
				{
					printf("number repeate,please input again!\n");
					goto repeat1;
					/*当输入的学号已经存在，程序报错，返回前面重新输入*/
			}
			}
		}
	}

	printf("please input student's name:");
	scanf("%s",p1->name);/*输入学生姓名*/
	printf("please input student's consume money:");/*输入消费情况;*/
	scanf("%d",&p1->xiaofei);

	while(p1->number != 0)
	{
		n = n + 1;
		if(n == 1)
			head=p1;
		else
			p2->next=p1;
		p2 = p1;
		p1 = (score *)malloc(LEN);
		printf("please input student's information,input 0 exit!\n");
repeat2:
		printf("please input student's number(number>0):");
		scanf("%d",&p1->number);/*输入学号，学号应大于0*/

		while(p1->number < 0)
		{
			getchar();
			printf("error,please input number again:");
			scanf("%d",&p1->number);
		}
		/*输入学号为字符或小于0时，程序报错，提示重新输入学号*/
		if(p1->number == 0)
			goto end;/*当输入的学号为0时，转到末尾，结束创建链表*/
		else
		{
			p3 = head;
			if(n > 0){
				for(i=0; i<n; i++)
				{
					if(p1->number != p3->number)
						p3 = p3->next;
					else
					{
						printf("number repeate,please input again!\n");
						goto repeat2;
						/*当输入的学号已经存在，程序报错，返回前面重新输入*/
					}
				}
			}
		}
		printf("please input student's name:");
		scanf("%s",p1->name);/*输入学生姓名*/
		printf("please input student's consume money:");
		scanf("%d",&p1->xiaofei);/*输入消费情况; */
	}

end:

	p1 = head;
	p3 = p1;
	for( i = 1;i < n ; i++ ){
		for( j = i+1; j <= n ; j++ ){
			max = p1;
			p1 = p1->next;
			if(max->number > p1->number){
				/*交换学号*/
				k = max->number;
				max->number = p1->number;
				p1->number = k;
				/*交换姓名*/
				memset(tmpname,0x00,sizeof(tmpname));
				strcpy(tmpname,max->name);
				strcpy( max->name, p1->name );
				strcpy(p1->name, tmpname);
				/*交换金额*/
				tmpxiaofei = max->xiaofei;
				max->xiaofei = p1->xiaofei;
				max->xiaofei = p1->xiaofei;
			}
		}
		max = head; 
		p1 = head;
	}

	p2->next = NULL;
	printf("input student's num:%d ge!\n",n);
	getchar();

	return head;
	
}
score *load(score *head){
	printf("\033[33mload the information!\033[0m\n");
	
}
score *search(score *head){
	printf("\033[34mload search information!\033[0m\n");

}
score *del(score *head){
	printf("\033[31mdelete the information!\033[0m\n");
	
}
score *add(score *head,score *stu){
	printf("\033[32madd the information!\033[0m\n");
	
}
void print(score *head){
	printf("\033[35mprint the information!\033[0m\n");
	
}
score *save (score *pl){
	printf("\033[36msave the information!\033[0m\n");
	
}













