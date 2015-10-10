#include<db.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DATABASE "demo.db"
int main(int argc,char **argv)
{
	DB *dbp;
	DBT key,data;
	int ret = 0;

	if((ret=db_create(&dbp,NULL,0)) != 0)
	{
		printf("create database failed!\n");
	}
	if((ret = dbp->open(dbp,NULL,DATABASE,NULL,DB_BTREE,DB_CREATE,0)) != 0)
	{
		dbp->err(dbp,ret,"%s",DATABASE);
		exit(1);
	}		
	memset(&key,0,sizeof(key));
	memset(&data,0,sizeof(data));
	key.data = "sport";
	key.size = sizeof("sport");
	if((ret = dbp->get(dbp,NULL,&key,&data,0))!=0)
	{
		dbp->err(dbp,ret,"DB->get");
	}
	printf("the data is %s\n",(char *)key.data);
	dbp->close(dbp,0);
	return 0;

}
