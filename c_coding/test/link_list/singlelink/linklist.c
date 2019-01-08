#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linklist.h"
//Creat an empty linklist
linklist_t CreateEmptyLinklist()
{
	linklist_t list;
	list = (linklist_t)malloc(sizeof(linknode_t));
	if(NULL != list) {
		list->next = NULL;
	}
	return list;
}
//Create a new empty link list.
void DestroyLinklist(linklist_t list)
 {
     if(NULL != list) {
         ClearLinklist(list);
         free(list);
     }
 }
//Clear the link list.
void ClearLinklist(linklist_t list)
 {
     linknode_t * node; /* pointer to the node to be remove */
     if(NULL == list)
		 return;
     while(NULL != list->next) {
         node = list->next;
         list->next = node->next; //��ʱnode->next�ǵڶ�node�ڵ�Ԫ����������
         free(node);
     }
     return;
 }
 //是否为空链表
int IsEmptyLinklist(linklist_t list)
 {
     if(NULL != list) {
         if(NULL == list->next)  //there is only the head node.
             return 1; //it's an empty linklist
         else
             return 0; //the linklist is not empty.
     } else
         return -1;    //error.
 }
 // 链表长度
int LengthLinklist(linklist_t list)
 {
     int len = 0;
     linknode_t * node; //Traverse the pointer.
     if(NULL == list) return -1;
     node = list->next; // The node pointer points to the first node.
     while(NULL != node) {
         len++;
         node = node->next;
     }
     return len;
 }
//获取一个链表指定节点数据域的数据值
int GetLinklist(linklist_t list, int at, data_t * x)
{
	linknode_t *node;   //Traversing the pointer of a node
	int pos;            //For traversal comparison
	if(NULL == list) 
		return -1;
	/*at ����Ҫ >= 0*/
	if(at < 0)
		return -1;
	/* �ӵ�һ��Ԫ�ؿ�ʼ */
	node = list->next; // nodeָ��ָ��һ��Ԫ��
	pos = 0;
	while(NULL != node) {
		if(at == pos) {
			if(NULL != x)
				*x = node->data;
			return 0;
		}
		// ��һ��Ԫ��
		node = node->next;
		pos++;
	}
	return -1;
}
 // ����һ��ָ������ڵ��������ֵ
int SetLinklist(linklist_t list, int at, data_t x)
 {
     linknode_t * node; // ��������
     int pos;
     int found = 0;
     if(!list) return -1;
     /*at ���� >= 0*/
     if(at < 0) return -1;
     /* nodeָ��ָ���һ��Ԫ�� */
     node = list->next;
     pos = 0;
     while(NULL != node) {
         if(at == pos) {
             found = 1; // �ҵ���λ��
             node->data = x;
             break;
         }
         /*�����ƶ�Ԫ��*/
         node = node->next;
         pos++;
     }
     if(1 == found)
         return 0;
     else
         return -1;
 }
//����ڵ�
int InsertLinklist(linklist_t list, int at, data_t x,char *name)
 {
     /*
      * node_at and pos_at are used to locate the position of node_at.
      * node_prev follows the node_at and always points to previous node
      *    of node_at.
      * node_new is used to point to the new node to be inserted.
      */
     linknode_t      * node_prev, * node_at, * node_new;
     int             pos_at;
     int             found = 0;
     if(NULL == list) return -1;
     /* at ���� >= 0 */
     if(at < 0) return -1;
     node_new = malloc(sizeof(linknode_t));
     if(NULL == node_new)
         return -1;
     node_new->data = x; // assigned value
	 memcpy(node_new->name,name,strlen(name));
	 
     node_new->next = NULL;
	 
     node_prev = list; // head
     node_at = list->next; //node_atָ��ָ���һԪ��
     pos_at = 0;
     while(NULL != node_at) {
         if(pos_at == at) {
             found = 1; // found the node ��at'
             break;
         }
         /* move to the next pos_at */
         node_prev = node_at;
         node_at = node_at->next;
         pos_at++;
     }
     if(found) {
         /* insert */
         node_new->next = node_at;
         node_prev->next = node_new;
     } else{
         /*
          * If not found,means the provided 'at'
          * exceeds the upper limit of the list, just
          * append the new node to the end of the list
          */
         node_prev->next = node_new;
     }
     return 0;
 }
 // ɾ���ڵ�
int DeleteLinklist(linklist_t list, int at)
 {
    /*
     * node_at and pos_at are used to locate the position of node_at.
     * node_prev follows the node_at and always points to previous node
     *    of node_at.
     */
     linknode_t      * node_prev, * node_at;
     int             pos_at;
     int             found = 0;
     if(!list) return -1;
     if(at < 0) return -1;
     node_prev = list; // node_prevָ��ָ������ͷ
     node_at = list->next; // node_atָ��ָ���һԪ��
     pos_at = 0;
     while(NULL != node_at) {
         if(pos_at == at) {
             // found the node 'at'
             found = 1;
             break;
         }
         // move to the next pos_at
         node_prev = node_at;
         node_at = node_at->next;
         pos_at++;
     }
     if(found) {
         // remove
         node_prev->next = node_at->next;
         free(node_at);
         return 0;
     }else
         return -1;
 }
 // ����ת��
linklist_t ReverseLinklist(linklist_t list)
 {
     linknode_t * node;       // iterator
     linknode_t * node_prev;  // previous node of iterator
     linknode_t * node_next;  /* next node of iterator
                              * used to backup next of iterator
                              */
     if(NULL == list) return NULL;
     node_prev = NULL;
     node = list->next; // nodeָ��ָ���һ��Ԫ��
     while(NULL != node) {
         /*
          * step1: backup node->next
          * due to the next of iterator will be
          * modified in step2
          */
         node_next = node->next;
         /*
          * when iterator reaches the last node
          * of original list, make the list head
          * point to the last node, so the original
          * last one becomes the first one.
          */
         if(NULL == node_next)
             list->next = node;
         /*
          * step2: reverse the linkage between nodes
          * make the node pointer to the previous node,
          * not the next node
          */
         node->next = node_prev;
         /*
          * step3: move forward
          */
         node_prev = node;
         node = node_next;
     }
     return list;
 }
 // ��ӡ����
int Display(linklist_t list)
 {
     linknode_t * node;
     if(NULL == list) return -1;
     //node = list->next;
	 node = list->next;
     while(node != NULL) {
         printf("number:[%d],name:[%s]\n", node->data,node->name);
         node = node->next;
     }
     printf("\n");
     return 0;
 }
int main(int argc, char * argv[])
{
	int i;
	data_t x;
	linklist_t p;
	/*��������*/
	p = CreateEmptyLinklist();
	Display(p);
	//data_t a[10] = {1,3,5,7,9,11,13,15,17,19};
	data_t a[5] = {1,3,5,7,9};
	char *name[5] = {"xiaoming","xiaozhang","xiaoxiao","xiaoli","xiaohua"};
	for(i = 0; i < 5; i++) {
		/*��������*/
		InsertLinklist(p, i, a[i], name[i]);
	}
	Display(p);
	/*����ת��*/
	ReverseLinklist(p);
	/*������*/
	printf("The length of the list is [%d]\n", LengthLinklist(p));
	Display(p);
	/*��ȡ�ض��ڵ�ֵ*/
	GetLinklist(p, 4, &x);
	printf("The No.4 of this list is [%d]\n", x);
	
	/*�����ض��ڵ��ֵ*/
	SetLinklist(p, 4, 100);
	GetLinklist(p, 4, &x);
	
	InsertLinklist(p, 0, 500,"lijian");
	
	printf("After updating! The No.4 of this list is [%d]\n", x);
	Display(p);
	
	/*ɾ���ڵ�*/
	DeleteLinklist(p,5);
	printf("After delete��The length of list is [%d]\n", LengthLinklist(p));
	Display(p);
	
	/*�������*/
	ClearLinklist(p);
	
	if(IsEmptyLinklist(p))
		printf("This list is empty!\n");
	/*��������*/
	DestroyLinklist(p);
	printf("This list is destroyed!\n");
	return 0;
}
