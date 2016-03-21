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
#include <stdlib.h>
#include <unistd.h>

#include "doubleLinkList.h"
#include "data_test.h"
#include "sky_log.h"


/*create the double link list*/
void list_init(devList *list,void (*destroy)(void *data)){
	
	if(list == NULL){
		printf("the list is Null,so I must malloc for it at first!\n");
		list = (devList *)malloc(sizeof(devList));
	}

/*begin:the following operation is must or it will lead to the segment error*/	
	list->head =(devNode *)malloc(sizeof(devNode));
	if(list->head == NULL){
		printf("Can't malloc for the list->head!\n");
		exit(1);
	}else{
		memset(list->head,0x00,sizeof(devNode));
	}
	
	list->tail =(devNode *)malloc(sizeof(devNode));
	if(list->tail == NULL){
		printf("Can't malloc for the list->tail!\n");
		exit(1);
	}else{
		memset(list->tail,0x00,sizeof(devNode));
	}
/*over:the upping operation is  must*/		


	list->size = 0;
	list->destroy = destroy;
#ifdef DOUBLE_CIRCULAR_LINK
	/*create a double circular link list*/
	list->head->next = list->tail;
	list->tail->prev = list->head;
#else
	/*create a double link list*/
	list->head=NULL;
	list->tail=NULL;
#endif

}

/*
destroy the target data.
*/
void destroy(void *data)  
{  
    printf("destroy the target data %s\n",(char *)data);
	free(data);  
    return;  
} 


/*list destory*/
void list_destroy(devList *list){
	sky_trace_enter();
	void *data;
	while(list_size(list) > 0){
		sleep(1);
		if(list_remove(list,list_tail(list),(void **)&data) == 0 
				&& list->destroy != NULL ){
			list->destroy(data);
		}
		
	}
	memset(list,0x00,sizeof(devList));
	sky_trace_exit();
	return ;
}
/*remove the destination element of the list*/
int list_remove(devList * list, devNode *element,void **data){
	sky_trace_enter();
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
	sleep(1);
	sky_trace_exit();
	return 0;
	
}









