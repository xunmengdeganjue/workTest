#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct student{

	int score;
	char *name;
	struct student *Next;

}Student,*StudentNode;

StudentNode createList( void)
{
	int number = 0;
	int i = 0;
	StudentNode Shead=(StudentNode)malloc(sizeof(Student));
	StudentNode Stail=Shead;
	char * student_name = (char *)malloc(64);
	int student_score = 0;
	
	Shead->Next = Stail;
	Stail->Next = NULL;


	printf("please enter the number of the list you want to create!\n");
	scanf("%d",&number);
	
	for(i=0;i<number;i++)
	{
		StudentNode Stmp = (StudentNode)malloc(sizeof(Student));
		
		printf("Please input the %d student's name:\n",i);
		scanf("%s",student_name);
		printf("Please input the %d student's score:\n",i);
		scanf("%d",&student_score);
		
		Stmp->score=student_score;
		Stmp->name=student_name;
		//strcpy(Stmp->name,student_name);//can't and there is no need to do so.
		Stail->Next=Stmp;
		Stail=Stmp;
		Stmp->Next=NULL;
	
	}
	//free(student_name);//can't do this,or the student's name will be lost.
	return Shead;

}
void scanList(StudentNode Shead)
{
	StudentNode Snode;
	int i = 0;
	Snode=Shead->Next;
	while(Snode){
		printf("the %d student name is %s,core is [%d]\n",i,Snode->name,Snode->score);
		i++;
		Snode=Snode->Next;
	}


}
int main()
{
	StudentNode Phead;
	
	Phead=createList();
	
	scanList(Phead);

	return 0;

}
