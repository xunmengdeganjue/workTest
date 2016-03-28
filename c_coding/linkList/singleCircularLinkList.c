#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct device{

	char *dev_name;
	char *dev_driver;
	int dev_number;
	struct device *prev,*next;

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
			//tail = tmp;
			tmp->dev_name="shubiao";
			tmp->dev_driver="shubiao_driver";
			//tmp->next = tmp;
		}else if(i == 1){
			tmp->dev_name="jianpan";
			tmp->dev_driver="jianpan_driver";		

		}else if(i == 2){
			tmp->dev_name="xianshiqi";
			tmp->dev_driver="xianshiqi_driver";		
		}
		tmp->dev_number = i+1;
		tmp->next = tail->next;
		tail->next = tmp;
		tail = tmp;

	}
	tmp->next = Dhead;

	return Dhead;

}



int main()
{
	
	printf("device initiallation!\n");

	pNode DevNode=(pNode)malloc(sizeof(deviceNode));
	pNode cur;


	DevNode = device_init();
	
	printf("scan all of the devices!\n");
	
	for(cur = DevNode->next; cur->dev_name != NULL;){
		printf("Device name is :%s\n",cur->dev_name);
		printf("Device driver is :%s\n",cur->dev_driver);
		printf("Device number is %d\n",cur->dev_number);
		if(cur->next != DevNode)
			cur = cur->next;
		else
			break;

	}
	
	return 0;

}
