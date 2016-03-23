#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct student{

	int core;
	char *name;
	struct student *Next;

};

struct student *createList( void)
{
	int number = 0;
	int i = 0;
	struct student *Shead=(struct student *)malloc(sizeof(struct student));
	struct student *Stail=Shead;

	Shead->Next = Stail;
	Stail->Next = NULL;


	printf("please enter the number of the list you want to create!\n");
	scanf("%d",&number);
	
	for(i=0;i<number;i++)
	{
		struct student *Stmp = (struct student *)malloc(sizeof(struct student));
		Stmp->core=99;
		Stmp->name="xiaoli";
		Stail->Next=Stmp;
		Stail=Stmp;
		Stmp->Next=NULL;
	
	}
	return Shead;

}
void scanList(struct student *Shead)
{
	struct student *Snode;
	int i = 0;
	Snode=Shead->Next;
	while(Snode){
		printf("the %d student name is %s,core is [%d]\n",i,Snode->name,Snode->core);
		i++;
		Snode=Snode->Next;
	}


}
int main()
{
	struct student *Phead;
	
	Phead=createList();
	
	scanList(Phead);

	return 0;

}
