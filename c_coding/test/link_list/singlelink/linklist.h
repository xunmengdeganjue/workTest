#ifndef _LIST_LINK_H_
#define _LIST_LINK_H_
typedef int data_t;
typedef struct node_t {
    data_t data;            /* 节点数据域 */
	char name[10];
    struct node_t * next;    /* 节点的后继指针域 */
}linknode_t, * linklist_t;
/* 链表操作函数*/
// 创建一个空链表
linklist_t CreateEmptyLinklist();
// 销毁链表
void DestroyLinklist(linklist_t list);
// 清空链表
void ClearLinklist(linklist_t list);
// 是否为空链表
int IsEmptyLinklist(linklist_t list);
// 链表长度
int LengthLinklist(linklist_t list);
// 获去链表节点数据
int GetLinklist(linklist_t list, int at, data_t * x);
// 设置链表节点数据
int SetLinklist(linklist_t list, int at, data_t x);
// 插入节点
int InsertLinklist(linklist_t list, int at, data_t x,char *name);
// 删除节点
int DeleteLinklist(linklist_t list, int at);
// 链表转置
linklist_t ReverseLinklist(linklist_t list);
// 打印链表
int Display(linklist_t list);
#endif // _LIST_LINK_H_