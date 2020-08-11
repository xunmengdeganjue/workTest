#ifndef _LIST_LINK_H_
#define _LIST_LINK_H_
typedef int data_t;
typedef struct node_t {
    data_t data;            /* �ڵ������� */
	char name[10];
    struct node_t * next;    /* �ڵ�ĺ��ָ���� */
}linknode_t, * linklist_t;
/* �����������*/
// ����һ��������
linklist_t CreateEmptyLinklist();
// ��������
void DestroyLinklist(linklist_t list);
// �������
void ClearLinklist(linklist_t list);
// �Ƿ�Ϊ������
int IsEmptyLinklist(linklist_t list);
// ������
int LengthLinklist(linklist_t list);
// ��ȥ����ڵ�����
int GetLinklist(linklist_t list, int at, data_t * x);
// ��������ڵ�����
int SetLinklist(linklist_t list, int at, data_t x);
// ����ڵ�
int InsertLinklist(linklist_t list, int at, data_t x,char *name);
// ɾ���ڵ�
int DeleteLinklist(linklist_t list, int at);
// ����ת��
linklist_t ReverseLinklist(linklist_t list);
// ��ӡ����
int Display(linklist_t list);
#endif // _LIST_LINK_H_