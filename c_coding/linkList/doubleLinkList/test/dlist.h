
/* 
 * filename: dlist.h 
 * author: zhm 
 * date: 2012-12-08 
 */  
  
#ifndef _DLIST_H  
#define _DLIST_H  
  
#include <stdlib.h>  
  
/* define a structure for the list element*/  
typedef struct DListElmt_  
{  
    void *data;  
    struct DListElmt_ *prev;  
    struct DListElmt_ *next;  
}DListElmt;  
/* define a structure for the double linked list */  
typedef struct DList_  
{  
    int size;  
    void (*destroy)(void *data);  
    void (*match)(const void *key1, const void *key2);  
    DListElmt *head;  
    DListElmt *tail;  
}DList;  

/* define public interface */  
void dlist_init(DList *list, void (*destroy)(void *data));  
void dlist_destroy(DList *list);  
int dlist_ins_prev(DList *list, DListElmt *element, const void *data);  
int dlist_ins_next(DList *list, DListElmt *element, const void *data);  
int dlist_remove(DList *list, DListElmt *element, void **data);  
  
#define dlist_size(list) ((list)->size) //get the size of the list.  
#define dlist_head(list) ((list)->head) //get the head element  
#define dlist_tail(list) ((list)->tail) //get the tail element  
#define dlist_is_head(element) ((element)->prev == NULL ? 1 : 0) //whether the element is head or not  
#define dlist_is_tail(element) ((element)->next == NULL ? 1 : 0) //whether the element is tail or not  
#define dlist_data(element) ((element)->data) //get the data of the element  
#define dlist_prev(element) ((element)->prev) //get the prev element  
#define dlist_next(element) ((element)->next) //get the next element  
  
#endif  