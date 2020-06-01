//
//  DList.c
//  Algorithms&Data_structures
//
//  Created by TTc on 15-2-2.
//  Copyright (c) 2015年 TTc. All rights reserved.
//
 
#include "dlist.h"
#include <stdlib.h>
#include <string.h>
 
 
void
dlist_init(Dlist *dlist,void(*destroy)(void *data)){
    dlist->size = 0;
    dlist->head = NULL;
    dlist->tail = NULL;
    dlist->destroy = destroy;
}
 
void
dlist_destroy(Dlist *dlist){
    void *data;
    /*remove each  element*/
    while (dlist_size(dlist) > 0) {
        if((dlist_remove(dlist, dlist_tail(dlist), (void**) &data) == 0)
                && dlist->destroy != NULL){
            dlist->destroy(data);
        }
    }
    //清空dlist 结构体
    memset(dlist, 0, sizeof(Dlist));
}
 
/*1:  将新元素插入到双链表中 由参数element所指向的元素 之后
  2： 同单链表最大的区别在于：除了要管理next
 指针外，还必须管理prev指针，以保证链表的 反向链接关系 正确
 */
/* 插入成功返回0 ，反之返回 -1 */
/* O(1)*/
int
dlist_ins_next(Dlist *dlist,DlistElmt *element,const void *data){
    DlistElmt *new_element;
    //do not allow a NULL unless the list is empty
    if(element == NULL && dlist_size(dlist) != 0){
        return -1;
    }
    if((new_element = (DlistElmt*)malloc(sizeof(DlistElmt))) == NULL){
        return -1;
    }
    //fill the data to the element
    new_element->data = (void*)data;
    //如果当前链表为 空表，再插入新元素 的情况
    if(dlist_size(dlist) == 0){
        new_element->prev = NULL; //链表的头元素 的 前驱指针 指向NULL
        new_element->next = NULL; //链表的头元素 的 后驱指针 指向NULL(当前情况 链表中只要这一个元素)
        dlist->head = new_element;
        dlist->tail = new_element;//链表的尾指针也指向 当前元素
    } else {
        //如果当前链表为 非空表，再插入新元素 的情况
 
        if(element->next == NULL){
            dlist->tail = new_element;
        } else{
            //否则 将当前目标元素的 后一位置的元素 的 前驱指针 指向 要插入的元素
            element->next->prev = new_element;
        }
 
        new_element->next = element->next; //要插入的元素的 next指针 指向 当前目标元素 后一位置 元素
        new_element->prev = element;//要插入元素的 前驱函数 指向 当前目标元素
        //如果 当前目标元素的 是当前链表的 尾元素,则 将 链表的尾元素 置为 新插入的元素（把链表的尾指针 tail 指向 要插入的元素）
        //当前目标元素 的后驱指针 指向 要初入的元素
        element->next = new_element;
    }
    dlist->size ++;
    return 0;
}
 
/*1:  将新元素插入到双链表中 由参数element所指向的元素 之前
  2： 同单链表最大的区别在于：除了要管理next
     指针外，还必须管理prev指针，以保证链表的 反向链接关系 正确
 3: 若element = NULL， 则双向链表应该为空，否则退出并返-1;
 若element != NULL，则需要在element->prev位置插入元素，插入的新元素的数据域为第三个参数data.另外还需要考虑当element为head结点时的情况。
 */
/* 插入成功返回0 ，反之返回 -1 */
/* O(1)*/
int
dlist_ins_prev(Dlist *dlist,DlistElmt *element,const void *data){
    DlistElmt *new_element;
      //Do not allow a NULL unless the list is empty
    if(element == NULL && dlist_size(dlist) != 0){
        return -1;
    }
    if((new_element = (DlistElmt*)malloc(sizeof(DlistElmt))) == NULL){
        return -1;
    }
    new_element->data = (void*)data;
    //如果当前链表为 空表，再插入新元素 的情况
    if(dlist_size(dlist) == 0){
        dlist->head = new_element;
        dlist->tail = new_element;//链表的尾指针也指向 当前元素
        new_element->prev = NULL; //链表的头元素 的 前驱指针 指向NULL
        new_element->next = NULL;//链表的头元素 的 后驱指针 指向NULL(当前情况 链表中只要这一个元素)
    } else {
        new_element->next = element;
        new_element->prev = element->prev;
        if(element->prev == NULL){
            dlist->head = new_element;
        }
        else{
            element->prev->next = new_element;
        }
        element->prev = new_element;
    }
 
    dlist->size++;
 
    return 0;
}
 
/* 1: remove操作将指定得元素从 双链表中删除；同单链表最大的区别在于：除了要管理next
       指针外，还必须管理prev指针，以保证链表的 反向链接关系 正确
   2: 对于双链表还有一个不同于 单链表 的地方在于 :该接口 移除当前指定的元素，而不是移除指定元素之后的那个元素，因为每个元素都有一个指向其前驱的指针
  3: element代表 目标节点， 删除操作针对 element节点
 */
/* 删除成功返回0 ，反之返回 -1 */
/* O(1)*/
int dlist_remove(Dlist *dlist,DlistElmt *element, void **data){
    /*  Don't allow a NULL element or  removal from an empty  dlist */
    if(element == NULL || dlist_size(dlist) == 0){
        return -1;
    }
    *data = element->data;
    /*  handle  removal from the head of the dlist */
    // 若为 删除节点为 链表的 头节点
    if(element == dlist->head){
        //将链表头节点的 指针 指向 目标元素的 next指针（目标元素的下一个位置 元素）
        dlist->head = element->next;
        //若链表的head指针 指向NULL 则 tail 也必须指向NULL，删除元素后，可能为空表
        if(dlist->head == NULL){
            dlist->tail = NULL;
        } else{
            //若 head 指针 不为NULL ，则将必须将 目标元素的 前驱指针的 prev指向NULL(其实这个时候 element->next 就是 链表的 第一个元素 ，这个时候 第一元素的 前驱指针必须置为 NULL)
            element->next->prev = NULL;
        }
    } else {
        /*  handle  removal from other than the head of the dlist */
        //将 当前要删除的元素的 前一个位置的元素 的 next指针 指向 当前元素的 next指针（也就是当前位置元素 的后一个位置的 元素）
        element->prev->next = element->next;
        //
        if(element->next == NULL){
            dlist->tail = element->prev;
        }else{
            //将 当前位置要删除元素的 后一个位置的元素 的前驱指针prev 指向 当前元素的前驱指针（也就是当前元素的 前一个位置的元素）
            element->next->prev = element->prev;
        }
    }
    free(element);
    dlist->size --;
    return 0;
}

