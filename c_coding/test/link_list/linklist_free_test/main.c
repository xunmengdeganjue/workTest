#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAC_LENGTH 6

typedef struct re_node{
	unsigned char MacAddr[MAC_LENGTH];
	unsigned char Active;
	struct re_node *next;
}RE_NODE;

RE_NODE *renode = NULL;

/*
*create a linklist with special number node,and set the default value.
*/
void re_node_init(){

//init 3 node information
	
	RE_NODE *node;
	RE_NODE *cutnode;

	int default_num = 4;
	int i = 0;

	for(i = 0; i < default_num; i++){

		node=(RE_NODE *)malloc( sizeof(RE_NODE) );
		memcpy(node->MacAddr,"\xaa\xbb\xcc\xdd\xee\xff",MAC_LENGTH);
		node->Active = (i % 2);
		node->next= NULL;
		
		printf("[%d]\n",i);

		if( renode ){
			printf("renode is not NULL\n");
			cutnode->next = node;
			//cutnode = node;
		}else{
			printf("renode is NULL\n");
			renode = node;/*at first the renode is NULL,so just make the renode point to the node as the head.*/
			//cutnode = renode;
		}
		cutnode = node;//the current node always point to the last node.

	}
	//cutnode->next = NULL;


}
/*
*show all node of the linklist.
*/
void re_node_display(){

	RE_NODE *node;
	int i = 0;

	for(node = renode; node; node = node->next){
		printf("The [%d] Macaddr[%02X:%02X:%02X:%02X:%02X:%02X],Active[%d]\n",i,node->MacAddr[0],
			node->MacAddr[1],node->MacAddr[2],node->MacAddr[3],node->MacAddr[4],node->MacAddr[5],node->Active);
		i++;
	}


}

/*
*free the memery of the linklist,and destroy it.
*/
void re_node_destroy(){
	RE_NODE *node, *m;
	for(node = renode; node; node = node->next){
		m=node;
		free(m);

	}
	renode = NULL;
}


int main(int argc,char**argv){

	
	re_node_init();
	re_node_display();

	printf("free the memery of the link list\n");
	re_node_destroy();
	printf("now the content of the lin list is as following:\n");
	re_node_display();
	

	return 0;

}



