//
//  DList.h
//  Algorithms&Data_structures
//
//  Created by TTc on 15-2-2.
//  Copyright (c) 2015年 TTc. All rights reserved.
//
 
#ifndef __Algorithms_Data_structures__DList__
#define __Algorithms_Data_structures__DList__
 
#include <stdlib.h>
 
/* define  a  structure for doubly_linked list */
typedef struct DlistElmt_{
    void *data;
    struct DlistElmt_ *prev;
    struct DlistElmt_ *next;
}DlistElmt;
 
typedef struct Dlist_{
    int size;
    int(*match)(void *key1,void *key2);
    void(*destroy)(void *data);
    DlistElmt *head;
    DlistElmt *tail;
}Dlist;
 
 
/* public Interfaces*/
 
void dlist_init(Dlist *dlist,void(*destroy)(void *data));
 
void dlist_destroy(Dlist *dlist);
 
int dlist_ins_next(Dlist *dlist,DlistElmt *element,const void *data);
 
int dlist_ins_prev(Dlist *dlist,DlistElmt *element,const void *data);
 
int dlist_remove(Dlist *dlist,DlistElmt *element, void **data);
 
 
#define dlist_size(dlist)  ((dlist)->size)
#define dlist_head(dlist)  ((dlist) ->head)
#define dlist_tail(dlist)  ((dlist) ->tail)
 
#define dlist_is_head(dlist)  ((element) ->prev == NULL? 1:0)
#define dlist_is_tail(dlist)  ((element) ->next == NULL? 1:0)
 
 
#define dlist_data(dlist)  ((dlist) ->data)
#define dlist_next(dlist)  ((dlist) ->next)
#define dlist_prev(dlist)  ((dlist) ->prev)
 
#endif /* defined(__Algorithms_Data_structures__DList__) */
