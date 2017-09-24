#include "studentscore.h"

int main(int argc ,char **argv){

	int num = 0;
	score *head = 0,*stu = 0;
	
	menu();
	scanf("%d",&num);
	
	while(1){
		switch(num){
			case 1:
				head=creat();
				break;
			case 2:
				head=load(head);
				break;
			case 3:
				head=search(head);
				break;
			case 4:
				head=del(head);
				break;
			case 5:
				head=add(head,stu);
				break;
			case 6:
				print(head);
				break;
			case 7:
				head=save(head);
				break;
			default:
				printf("Input error,please do again!\n");
				break;			

		}
		menu();
		scanf("%d",&num);

	}

	return 0;

}
