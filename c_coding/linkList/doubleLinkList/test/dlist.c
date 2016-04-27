/* 
 * filename: dlist.c 
 * author:zhm 
 * date: 2012-12-08 
 */  
  
#include <stdlib.h>  
#include <string.h>  
#include "dlist.h"  
  
/* dlist_init */  
void dlist_init(DList *list, void (*destroy)(void *data))  
{  
    list->size = 0;  
    list->destroy = destroy;  
    list->head = NULL;  
    list->tail = NULL;  
  
    return;  
}  
/* dlist_destroy */  
void dlist_destroy(DList *list)  
{  
    void *data;  
    while(dlist_size(list) > 0)  
    {  
        if( dlist_remove(list, dlist_tail(list), (void **)&data) == 0 //from the head to destroy  
                && list->destroy != NULL )  
        {  
            list->destroy(data);  
        }  
    }  
  
    memset(list, 0, sizeof(DList));  
    return;  
}  
/* dlist_ins_prev */  
int dlist_ins_prev(DList *list, DListElmt *element, const void *data)  
{  
    DListElmt *new_element;  
  
    //Do not allow a NULL unless the list is empty  
    if( element == NULL && dlist_size(list) != 0 )  
        return -1;  
  
    new_element = (DListElmt *)malloc(sizeof(DListElmt));  
    if( new_element == NULL )  
        return -1;  
  
    new_element->data = (void *)data;  
  
    if( dlist_size(list) == 0 )  
    {  
        list->head = new_element;  
        list->tail = new_element;  
        new_element->prev = NULL;  
        new_element->next = NULL;  
    }  
    else  
    {  
        new_element->next = element;  
        new_element->prev = element->prev;  
          
        if( element->prev == NULL )  
        {  
            list->head = new_element;  
        }  
        else  
        {  
            element->prev->next = new_element;  
        }  
          
        element->prev = new_element;  
    }  
  
    /* Adjust the size */  
    list->size++;  
  
    return 0;     
}  
/* dlist_ins_next */  
int dlist_ins_next(DList *list, DListElmt *element, const void *data)  
{  
    DListElmt *new_element;  
  
    //do not allow a NULL unless the list is empty  
    if( element == NULL && dlist_size(list) != 0 )   
        return -1;  
  
    //allocate the memory for the new element.  
    new_element = (DListElmt *)malloc(sizeof(DListElmt));  
    if( new_element == NULL )  
        return -1;  
  
    //fill the data to the element  
    new_element->data = (void *)data;  
  
    //insert the element to the list  
    if( dlist_size(list) == 0 )  
    {  
        //the list is empty  
        new_element->prev = NULL;  
        new_element->next = NULL;  
        list->head = new_element;  
        list->tail = new_element;  
    }  
    else  
    {  
        //the list is not empty  
        if( dlist_next(element) == NULL )  
        {  
            list->tail = new_element;  
        }  
        else  
        {  
            new_element->next->prev = new_element;  
        }  
        new_element->next = element->next;  
        new_element->prev = element;  
          
        element->next = new_element;  
    }  
  
    //adjust the size  
    list->size++;  
    return 0;  
}
/* dlist_remove */  
int dlist_remove(DList *list, DListElmt *element, void **data)  
{  
    //do not allow a NULL or a empty list  
    if( element == NULL || dlist_size(list) == 0 )  
        return -1;  
  
    /* remove the element from the list */  
    *data = element->data;  
      
    if( element == list->head )  
    {  
        list->head = element->next;  
        if( list->head == NULL )  
        {  
            list->tail = NULL;  
        }  
        else  
        {  
            element->next->prev = NULL;  
        }  
    }  
    else  
    {  
        element->prev->next = element->next;  
  
        if( element->next == NULL ) //be care of the last element;  
        {  
            list->tail = element->prev;  
        }  
        else  
        {  
            element->next->prev = element->prev;  
        }  
    }  
  
    /* free the sotrage */  
    free(element);  
  
    /* adjust the size */  
    list->size--;  
  
    return 0;  
}  