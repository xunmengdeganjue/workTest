#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct device{

	char *dev_name;
	char *dev_driver;
	struct device *next;

}deviceNode,*pNode;

/*初始化循环单链表
*创建三个节点，分别装“鼠标”，“键盘”，“显示器”三个设备。
*/

pNode device_init(){

	int number=3;
	int i = 0;
	pNode Dhead;
	pNode tail;
	
	Dhead=tail=(pNode)malloc(sizeof(deviceNode));

	pNode tmp;
	for(i=0; i<number; i++){
			
		tmp = (pNode)malloc(sizeof(deviceNode));

		if(i==0){
			tmp->dev_name="shubiao";
			tmp->dev_driver="shubiao_driver";
		}else if(i == 1){
			tmp->dev_name="jianpan";
			tmp->dev_driver="jianpan_driver";		

		}else if(i == 2){
			tmp->dev_name="xianshiqi";
			tmp->dev_driver="xianshiqi_driver";		
		}
		tmp->next = tail->next;
		tail->next = tmp;
		tail = tmp;

	}
	tmp->next = Dhead;

	return Dhead;

}

void scan_list(pNode head){
	
	pNode cur;
	
	for(cur=head->next;cur->dev_name != NULL;){
		printf("The device name is :%s\n",cur->dev_name);
		printf("The device driver is :%s\n",cur->dev_driver);
		if(cur->next != head){
			cur=cur->next;
		}else{
			break;
		}
	}
}


/*
*Insert a node to the place of the node's nodeNumber location. 
*
*/
void insert_node(pNode head,int nodeNumber,pNode newNode){
	
	int i = 1;
	pNode cur = head;
	pNode destNode = newNode;
	/*get the position of the dest node*/
	while(i < nodeNumber){
		cur=cur->next; 
		i++;
	}
	
	destNode->next=cur->next;
	cur->next=destNode;
	
}

void delete_node(pNode head,int nodeNumber){
	
	int i = 1;
	pNode cur = head;
	pNode tmp ;
	while(i < nodeNumber){
		i++;
		cur = cur->next;
		
	}
	tmp = cur->next;
	cur->next = tmp-> next;
	
}

int main()
{
	
	printf("device initiallation!\n");

	pNode DevNode=(pNode)malloc(sizeof(deviceNode));
	pNode cur;


	DevNode = device_init();
	
	printf("scan all of the devices!\n");
	/*scan the list*/
	scan_list(DevNode);
	
	printf("-----------------------add a node to the node list-----------------------------------\n");
	/*insert a new node to the list*/
	pNode newNode = (pNode)malloc(sizeof(deviceNode));
	newNode->dev_name="led";
	newNode->dev_driver="led_driver";
	insert_node(DevNode,2,newNode);
	scan_list(DevNode);
	
	printf("-----------------------add a node to the node list-----------------------------------\n");
//#if 0
	pNode newNode1 = (pNode)malloc(sizeof(deviceNode));
	newNode1->dev_name="ledd";
	newNode1->dev_driver="ledd_driver";
	insert_node(DevNode,7,newNode1);
	scan_list(DevNode);
//#endif
	printf("----------------------delete a node from the node list---------------------------\n");
	delete_node(DevNode,3);
	scan_list(DevNode);
	
	return 0;

}
