/*
 ******************************************************************************
 *
 *    Copyright (C) 2015-2016 by Nick Li. All rights reserved.
 *    All source codes is distributed under the U-License.
 *
 *    CPU               :   
 *    OS                :   Ubuntu-14.04
 *    Version           :   0.10
 *    Released by Nick Li
 *                      2016.3.30
 *
 *
 *
 *       File Name      : func.c
 *       Create Date    : 2016/03/30
 *       Author         : Nick Li 
 *       Description    : 
 ******************************************************************************
*/
/****************************************************************************
 *  modify history(TransPlant-1st)                                         	*
 *  NO.     modify reason              modify date      modify person       *
 *<--1-->                      
*****************************************************************************/

#include <stdio.h>
#include <string.h>
#include <malloc.h>

#include "doubleLinkList.h"

#if 0
void *destroy(void *data){
	if(strlen(data)){
		memset(data,0x00,strlen(data));
	}
	free(data);
	return ;
}
#endif

void destroy(void *data)  
{  
    free(data);  
    return;  
} 

void list_init(devList *list,void (*destroy)(void *data)){
	
	list->size = 0;
	list->destroy = destroy;
	list->head=NULL;
	list->tail=NULL;
	
}


/*list destory*/
void list_destroy(devList *list){
	
	void *data;
	while(list_size(list) > 0){
		if(list_remove(list,list_tail(list),(void **)&data) == 0 
				&& list->destroy != NULL ){
			list->destroy(data);
		}
		
	}
	memset(list,0x00,sizeof(devList));
	return ;
}
/*remove the destination element of the list*/
int list_remove(devList * list, devNode *element,void **data){
	//don't deal with the NULL or a empty list.
	if((element == NULL )||( list_size(list) == 0)){
		return -1;
	}
	/*remove the element of the list*/
	*data = element->data;
	
	if( element == list->head)
	{
		list->head = element->next;
		if(list->head ==NULL){
			list->tail = NULL;
		}else{
			element->next->prev = NULL;
		}
	}else{
		element->prev->next = element->next;
		if( element->next == NULL) //deal with the last element.
		{
			list->tail = element->prev;
		}else{
			element->next->prev = element->prev;
		}
	}
	/*free the memery*/
	free(element);
	/*adjust the size*/
	list->size--;
	
	return 0;
	
}
//#if 0
devList *fill_default_list(){

	int i = 0;
	devList *org_list,*tail_list;
	devNode *tmp_list;
	
	org_list = (devList *)malloc(sizeof(devList));
	tail_list = (devList *)malloc(sizeof(devList));
	
	org_list = tail_list;
	for(i=0;i<3;i++){
		tmp_list=(devNode *)malloc(sizeof(devNode));
		if(i == 0){
			tmp_list->data = "shubiao";
		}else if(i == 1){
			tmp_list->data = "jianpan";
		}else{
			tmp_list->data = "xianshiqi";
		}
		tmp_list->next = tail_list->tail;
		tmp_list->prev = tail_list->head;
		tail_list->tail = tmp_list;
		tail_list->size++;
	}
	//tail_list->tail = org_list->head;
	//org_list->head = tail_list->tail;
	
	return org_list;

}
//#endif

int list_show(devList *list){
	
	if(list_size(list) == 0){
		printf("the list is empty!\n");
		return -1;
	}
	while((list->tail !=NULL) && (list->tail != list->tail->next)){
		printf("the device name is %s\n",list->tail->data);
		list->tail = list->tail->next;
	}
	
	return 0;
}






