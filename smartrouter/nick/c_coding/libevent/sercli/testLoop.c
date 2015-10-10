#include "common.h"
#include "ev.h"

#define PORT 57789
#define NONE "none"

typedef void (*task_cb)(EV_P_ ev_io *w,int revents); 

typedef struct TaskNode{
	struct TaskNode *next;
	char taskData[BSIZE];
	void* ownner;
}TaskNode;

typedef struct Task{
	struct ev_loop *loop;
	struct ev_io socket_watcher;
	char subData[BSIZE];
	char ef[BSIZE];
	TaskNode *lastNode;
	TaskNode *curNode;
}Task;

Task taskObj;
int fd;

void runLoop(Task* task,int fd);

void taskCreate(Task* task)
{
	task->loop = EV_DEFAULT;
	strcpy(task->ef,NONE);
	strcpy(task->subData,"\0");
	task->lastNode = NULL;
	task->curNode = NULL;
}

void insertTaskNode(Task* task,TaskNode* tn)
{
	printf("insert task node\n");
	if(task->curNode)
	{
		task->lastNode->next=tn;
		task->lastNode = tn;
		tn->ownner = task;
	}
	else
	{
		task->curNode = tn;
		task->lastNode = tn;
		tn->ownner = task;
	}
}

//just delete the first node of the list
void deleteCurTaskNode(Task* task)
{
	printf("delete task node\n");
	if(task->curNode)
	{
		if(task->curNode == task->lastNode)
		{
			free(task->curNode);
			if(task->curNode)
			{
				task->curNode = NULL;
			}
			if(task->curNode)
			{
				task->lastNode = NULL;
			}
		}
		else
		{
			TaskNode *ptr = task->curNode;
			task->curNode = ptr->next;
			free(ptr);
		}
	}
	printf("delete task node over\n");
}

char* dealWork_A_PART(Task* task)
{
	stpcpy(task->ef,CALL_A_PART);
	//run part loop
	runLoop(task,fd);
		
	strcpy(taskObj.ef,NONE);
	return task->subData;
}

void dealWork_A(Task* task)
{
	printf("deal work A\n");
		
	char* apart = dealWork_A_PART(task);
	printf("deal work a part over , return data: %s\n",apart);
		
	deleteCurTaskNode(task);
}

void dealWork_B(Task* task)
{
	printf("deal work B\n");
		
	deleteCurTaskNode(task);
}

void dealWork_C(Task* task)
{
	printf("deal work C\n");
		
	deleteCurTaskNode(task);
}

void dealTaskList(Task* task)
{
	printf("deal Task List\n");
	char* curData;
	while(task->curNode)
	{
		curData = task->curNode->taskData;
		printf("xxxxxxxxxxxxxxxxxxxxx curData : %s\n",curData);
		if(strcmp(curData,CALL_A) == 0)
			dealWork_A(task);
		if(strcmp(curData,CALL_B) == 0)
			dealWork_B(task);
		if(strcmp(curData,CALL_C) == 0)
			dealWork_C(task);
			
		ev_sleep(1);
	}
}

void taskCb(EV_P_ ev_io *w,int revents)
{
	char buffer[BSIZE];
	if(read(w->fd,buffer,BSIZE) == -1)
	{
		printf("watcher read error!\n");
		return;
	}
	printf("watcher read data: %s\n",buffer);
	if(write(w->fd,buffer,BSIZE) == -1)
	{
		printf("watcher write error!\n");
		return;
	}
	//deal main loop
	if(strcmp(taskObj.ef,NONE) == 0)
	{	
		ev_io_stop(EV_A_ w);
		
		TaskNode* tn = (TaskNode*)malloc(sizeof(TaskNode));
		tn->next = NULL;
		strcpy(tn->taskData,buffer);
			
		printf("insertTaskNode main loop taskData: %s\n",buffer);
		insertTaskNode(&taskObj,tn);
		return;
	}
	else	//deal PART loop
	{
		if(strcmp(buffer,CALL_A_PART) == 0)
		{
			strcpy(taskObj.subData,buffer);
			ev_io_stop(EV_A_ w);
			return;
		}
		else
		{
			TaskNode* tn = (TaskNode*)malloc(sizeof(TaskNode));
			tn->next = NULL;
			strcpy(tn->taskData,buffer);
			
			printf("insertTaskNode part loop taskData: %s\n",buffer);
			insertTaskNode(&taskObj,tn);
		}
	}
}

void runLoop(Task* task,int fd)
{
	printf("run Loop\n");
	ev_io_init(&(task->socket_watcher),taskCb,fd,EV_READ);
	ev_io_start(task->loop,&(task->socket_watcher));
	ev_run(task->loop,0);
}

void main()
{
	int sd = new_socket_server(PORT);
	struct sockaddr_in c_add;
	int sin_size = sizeof(struct sockaddr_in);
	fd = accept(sd,(struct sockaddr *)(&c_add),&sin_size);
	if(fd == -1)
	{
		printf("server accept fail !\r\n");
		return;
	}
	printf("server accept ok! Server start get connect from %#x :%#x\r\n",ntohl(c_add.sin_addr.s_addr),ntohs(c_add.sin_port));
		
	taskCreate(&taskObj);
	while(1)
	{
		dealTaskList(&taskObj);			
		//run main loop
		runLoop(&taskObj,fd);
	}
}
