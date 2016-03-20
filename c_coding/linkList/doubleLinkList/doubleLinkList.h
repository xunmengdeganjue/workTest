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

#ifndef _DOUBLE_LINK_LIST_H_
#define _DOUBLE_LINK_LIST_H_

#include <stdio.h>
#include <string.h>
#include <malloc.h>
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
typedef struct devopt
{
	int size;
	void (*destroy)(void *);
	devNode *head;
	devNode *tail;
	
}devList;


#define list_size(list) ((list)->size) 				//get the size of the list
#define list_tail(list) ((list)->tail) 					//get the tail of the list
#define list_head(list) ((list)->head) 				//get the head of the list
#define list_is_head(element) ((element)->prev == NULL ?  1 : 0) 			//judge if the element is in the head node.
#define list_is_tail(element) ((element)->next ==NULL ? 1 : 0) 				//jubge if the element is in the tail node.
#define list_data(element) ((element)->data)		//get the data of the element
#define list_prev(element) ((element)->prev)		//get the prev element
#define list_next(element) ((element)->next)		//get the next element




void destroy(void *data);
void list_init( devList *list,void (*destroy)(void *data));
int list_remove(devList * list, devNode *element,void **data);
void list_destroy(devList *list);
devList *fill_default_list();

#endif
