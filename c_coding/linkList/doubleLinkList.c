#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "doubleLinkList.h"

/*
define a structure which is an element contained by the double link list,
every element contains two kind of the data,one is the real data,
the other type is the point data which include the prev pointer and 
the next pointer.
*/
typedef struct device
{
	char *data;
	struct device *prev,*next;

}devNode;

/* define a structure for the double link list */
typedef struct devList
{
	int size;
	void (*destroy)(void *data);
	devNode *head;
	devNode *tail;
	
}devList;

void *destroy(char *data){
	if(strlen(data)){
		memset(data,0x00,strlen(data));
	}
	free(data);
	return ;
}

void list_init( devList *head,void *destroy(void)){
	
	head->size = 0;
	head->destroy = destroy;
	head->head=NULL;
	head->tail=NULL;
	
}


int list_size(devList *list){
	int size = 0;
	size = list->size;
	return size;
}

devList *list_tail(devList *list){
	return list->tail;
}

int list_remove(devList *list,devNode *node){
	
	return  0;
}

/*list destory*/
void list_destroy(devList *list){
	
	void *data;
	while(list_size(list) > 0){
		if(list_remove(list,list_tail(list),(void **)&data)==0&&list->destroy != NULL ){
			list->destroy(data);
		}
		
	}
	memset(list,0x00,sizeof(devList));
	return ;
}



devList *fill_default_list(){
	int i = 0;
	devList *org_list,*tail_list,*tmp_list;
	org_list = (devList *)malloc(sizeof(devList));
	tail_list = (devList *)malloc(sizeof(devList));
	
	org_list = tail_list;
	for(i=0;i<3;i++){
		tmp_list=(devList *)malloc(sizeof(devList));
		if(i ==0){
			tmp_list->tail->data = "shubiao";
			tmp_list->destroy = destroy;
		}else if(i == 1){
			tmp_list->tail->data = "jianpan";
		}else{
			tmp_list->tail->data = "xianshiqi";
			tmp_list->destroy = destroy;
		}
		tmp_list->tail = tail_list->tail;
		tmp_list->head = tail_list->head;
		tail_list = tmp_list;
		tail_list->size++;
	}
	tail_list->tail = org_list;
	org_list->head = tail_list;
	
	return tail_list;
}




int main()
{
	devList  *devlist;
	list_init(&devlist,destroy);
	devlist = fill_default_list();
	
	devList *tmplist = devlist;
	while(tmplist->tail->data != NULL){
		printf("the data lof the tmplist is %s\n",tmplist->tail->data);
		tmplist = tmplist->tail;		
	}
	
	
	return 0;
}





