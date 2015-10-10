#include<stdio.h>
#include<stdlib.h>
#include<db.h>
#include<string.h>

#define DATABASE "demo.db"

int main(int argc,char **argv)
{

	DBT key;
	DBT data;
	DB *dbp;
	u_int32_t flags;
	int ret = 0;
	//create a standlone database
	
	if ( (ret = db_create(&dbp,NULL,0)) != 0 )
	{
		printf("create the database failed!\n");
		exit(1);
	}
	if ( (ret = dbp->open(dbp,NULL,DATABASE,NULL,DB_BTREE,DB_CREATE,0664)) != 0 )
	{
		dbp->err(dbp,ret,"$s",DATABASE);
		exit(1);
	}
	printf("the database created successfully!\n");

	memset(&key,0,sizeof(DBT));
	memset(&data,0,sizeof(DBT));
	
	key.data = "sport";
	key.size = sizeof("sport");
	data.data = "football";
	data.size = sizeof("football");
	if((ret = dbp->put(dbp,NULL,&key,&data,0)) == 0)
	{
		printf("dbp:%s:key stored\n",(char*)key.data);
	}
	else
	{
		dbp->err(dbp,ret,"DB->put");
	}
	
	memset(&key,0,sizeof(key));
        memset(&data,0,sizeof(data));
        key.data = "sport";
        key.size = sizeof("sport");
        if((ret = dbp->get(dbp,NULL,&key,&data,0))!=0)
        {
                dbp->err(dbp,ret,"DB->get");
		exit(1);
        }
	else 	
	{
		printf("ok");
		printf("the data is %s\n:",(char *)key.data);
	}

	dbp->close(dbp,0);
	return 0;


}
