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
	/*做成循环双链表*/
	/*create a double circular link list*/
	list->head->next = list->tail;
	list->tail->prev = list->head;
#else
	/*做成非循环双链表*/
	/*create a double link list*/
	list->head = NULL;
	list->tail = NULL;

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

/*remove the destination element from the list*/
int list_remove_element(devList * list, devNode *element,void **data){
	sky_trace_enter();
	//don't deal with the NULL or a empty list.
	if((element == NULL )||( list_size(list) == 0)){
		return -1;
	}
	/*remove the element of the list*/
	//*data = element->prev->data;
	sky_dbg("the content of the deleted node is %s\n",element->data);
#ifdef DOUBLE_CIRCULAR_LINK
/*head tail节点中并没有数据*/
	/*循环双向链表*/
	if( element == list->head){
		*data = element->next->data;
		//list->head = element->next;
		//if(list->head == NULL){
		//	list->tail = NULL;
		//}else{
			//list->head->next = list->head->next->next;
			list->head->next->next->prev = list->head->next->prev;
			list->head->next = list->head->next->next;
		//}
	}else if(element == list->tail){
		*data = element->prev->data;
		sky_trace_line();
		list->tail->prev->prev->next = list->tail;
		list->tail->prev = list->tail->prev->prev;
	}else{
		list_prev(element)->next = list_next(element);
		list_next(element)->prev = list_prev(element);
	}	

#else
	/*非循环双向链表*/
	if( element == list->head)//the element is the head node
	{
		list->head = element->next;
		if(list->head ==NULL){//the element->next==NULL
			list->tail = NULL;
		}else{
			element->next->prev = NULL;//throw out the element 
		}
	}else  //if the element is not the head node.
	{
		if(element == list->tail ){
			list->tail = element->next;
		}else{
			list_next(element)->prev = list_prev(element);
			list_prev(element)->next = list_next(element);
			
		}
		/*
		element->prev->next = element->next;
		if( element->next == NULL) //deal with the last element.
		{
			list->tail = element->prev;
		}else{
			element->next->prev = element->prev;
		}*/
	}
	
#endif

	/*free the memery*/
	free(element);
	/*adjust the size*/
	list->size--;
	
	sleep(1);
	
	sky_trace_exit();
	
	return 0;
	
}




void list_clear(devList *list){
	devNode *scan = NULL;
	if(list->head->next == NULL){
		return ;
	}
#ifdef ALLOW_RECURSION
	/*使用递归方式删除节点*/
	if(list->head->next != list->tail)
		list_clear(list);
#else
	/*使用非递归的方式*/
	do{
		scan = list->head->next;
		list->head->next  = scan->next;
		free(scan);
	}while( list->head->next  !=  list->tail );//不要删除尾节点
#endif

}

#ifdef DOUBLE_CIRCULAR_LINK 
/*销毁循环双链表*/
void list_destroy(devList *list){
	sky_trace_enter();
	
	devList *p = list;
	
	if (NULL == p)
	    return;
	
	list_clear(p);
	
	free(p->head);
	free(p->tail);
	free(p);
	
	list = NULL;
	
	sky_trace_exit();
	
	return ;
}

#else
/*销毁非循环双链表*/	
/*list destory*/
void list_destroy(devList *list){
	sky_trace_enter();
	void *data;
	devNode *element;
	int size = 0;
	while( ( size = list_size(list) ) > 0 ){
		sleep(1);
		element = list_tail(list);
		if(list_remove_element(list,element,(void **)&data) == 0 
				&& list->destroy != NULL ){
			list->destroy(data);
		}
		
	}
	memset(list,0x00,sizeof(devList));
	sky_trace_exit();
	return ;
}
#endif

int list_insert(devList *list,devNode *element){

#ifdef DOUBLE_CIRCULAR_LINK	
	#ifdef BACK_INSERT
	/*insert the element into the tail*/
	element->next = list->tail;
	element->prev = list->tail->prev;
	list->tail->prev->next = element;
	list->tail->prev = element;
	#else	
	/*insert the element into the head*/
	element->prev = list->head;
	element->next = list->head->next;
	list->head->next->prev = element;
	list->head->next = element;
	#endif
#else
	#ifdef BACK_INSERT
	element->next = list->tail->next;
	element->prev = list->tail;
	list->tail->next = element;
	
	#else
	element->next = list->head;
	element->prev = list->head->prev;
	list->head->prev = element;
	
	#endif

#endif
	
	list->size++;
	return 0;	
}



