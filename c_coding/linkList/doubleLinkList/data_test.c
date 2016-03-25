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
 *                      2016.3.31
 *
 *
 *
 *       File Name      : data_test.c
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
#include "data_test.h"

/*define the array-pointer to contain all the device name*/
char *devices[DevNumber]={
	"shubiao",
	"jianpan",
	"xianshiqi",
	"cd-player"
};

/*
Add the default data to the tail of the list.
*/
int fill_default_list(devList *list){

	int i = 0;
	devNode *tmp_node;
	int size = 0;
	
	if(list == NULL){
		return -1;
	}
	
	//list = (devList *)malloc(sizeof(devList));
#ifdef DOUBLE_CIRCULAR_LINK /*循环链表*/
	printf("fileName:%s--funcName:%s()--line:\033[32m%d\033[0m \
\033[32m You have defined the DOUBLE_CIRCULAR_LINK_LIST macro\033[0m\n",__FILE__,__func__,__LINE__);
#else/*非循环链表*/
		printf("fileName:%s:--funcName:%s()--line:\033[32m%d\033[0m \
\033[31m You have not defined the DOUBLE_CIRCULAR_LINK_LIST parameter!\033[0m\n",__FILE__,__func__,__LINE__);
#endif

	for(i=0; i < DevNumber; i++){
		tmp_node = (devNode *)malloc(sizeof(devNode));
		size = strlen(devices[i]);
		tmp_node->data = malloc(size);
		strcpy(tmp_node->data,devices[i]);
		
#ifdef DOUBLE_CIRCULAR_LINK
		//printf("fileName:%s--funcName:%s()--line:\033[32m%d\033[0m \
		//	\033[32m You have defined the DOUBLE_CIRCULAR_LINK_LIST macro\033[0m\n",__FILE__,__func__,__LINE__);
			
#ifdef BACK_INSERT   /*后向插入*/
		/*将元素从List的后向插入时，tail指针的前驱的next指针 = tail的前驱 = 要添加的元素节点；反之如果从头部
		插入，则是head的后驱的前驱=head的后驱=要添加的元素节点*/
		/*inset the element into the tail of the list*/
		sky_dbg("Insert the data into the tail of the link list!\n");	
		tmp_node->next = list->tail;
		tmp_node->prev = list->tail->prev;
		list->tail->prev->next = tmp_node;
		list->tail->prev = tmp_node;
	
#else   /*前向插入*/
		sky_dbg("Insert the data into the head of the link list!\n");
	    /*insert the element into the head of the list*/
		tmp_node->next = list->head->next;
		tmp_node->prev = list->head;
		list->head->next->prev = tmp_node;
		list->head->next = tmp_node;
	
#endif

#else/*非循环链表插入数据*/
		//printf("fileName:%s:--funcName:%s()--line:\033[32m%d\033[0m \
		//	\033[31m You have not defined the DOUBLE_CIRCULAR_LINK_LIST parameter!\033[0m\n",__FILE__,__func__,__LINE__);
#ifdef BACK_INSERT
		if(list->tail == NULL){
			tmp_node->next = NULL;
			tmp_node->prev = NULL;
			list->tail = tmp_node;
		}else{
			tmp_node->next = list->tail->next;
			tmp_node->prev = list->tail;
			list->tail->next = tmp_node;	
		}			

#else
	   /*insert the element into the head of the list*/
		if(list->head == NULL){
			tmp_node->next = NULL;
			tmp_node->prev = NULL;
			list->head = tmp_node;
		}else{
			tmp_node->next = list->head->next;
			tmp_node->prev = list->head->prev;
			list->head->prev = tmp_node;
		}

		
#endif

#endif	
		list->size++;
	}

	return 0;
}
//#endif
int list_show( devList *list){
	
	if(list_size(list) == 0){
		printf("the list is empty!\n");
		return -1;
	}

	//devList *content = list;
	
	
#ifdef DOUBLE_CIRCULAR_LINK
	devNode *search = list->head->next;//
	while(search->next != list->head->prev){
		printf("the device name is %s\n",search->data);
		search = search->next;
	}
#else

#ifdef BACK_INSERT

	while((list->tail != NULL)/* && (list->tail != list->tail->next)*/){
			/*通过list->tail != NULL 来判断，因为此时双向链表并非循环的*/
		printf("the device name is %s\n",list->tail->data);
		list->tail = list->tail->next;

	}
#else /*前向插入数据后的读法*/

	while((list->head != NULL)/* && (list->tail != list->tail->next)*/){
			/*通过list->tail != NULL 来判断，因为此时双向链表并非循环的*/
		printf("the device name is %s\n",list->head->data);
		list->head = list->head->prev;

	}	


#endif
	
#endif	

	return 0;
}
