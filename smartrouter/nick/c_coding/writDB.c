#include<stdio.h>
#include<stdlib.h>
#include<db.h>
#include<string.h>

#define DATABASE "demo.db"
#define OPENFORWR "0664"
#define OPENFORRD "0"

int openDB(DB **dbp, char *num )
{
	int ret = 0;	 
	if ( (ret = db_create(dbp,NULL,0)) != 0 )
        {
                printf("create the database failed!\n");
                exit(1);
        }
        if ( (ret = (*dbp)->open(*dbp,NULL,DATABASE,NULL,DB_BTREE,DB_CREATE,atoi(num))) != 0 )
        {
                (*dbp)->err(*dbp,ret,"$s",DATABASE);
                exit(1);
        }
	return 0;

}
int write_DB(DB *dbp, char *keyvalue, char *datavalue)
{
	DBT key,data;
	int ret = 0;
	
	memset(&key,0,sizeof(DBT));
        memset(&data,0,sizeof(DBT));
        
	key.data = keyvalue;
        key.size = strlen(keyvalue)+1;
        data.data = datavalue;
        data.size = strlen(datavalue)+1;
        
	if((ret = dbp->put(dbp,NULL,&key,&data,0)) == 0)
        {
                printf("dbp:%s:key stored\n",(char*)key.data);/* 特别要注意数据结构DBT的字段data为void *型，所以在对data赋值和取值时，要做必要的类型转换。 */
        }
        else
        {
                dbp->err(dbp,ret,"DB->put");
        }
	return 0;

}

int  read_DB(DB *dbp, char *keyvalue,char *datavalue)
{
	DBT key,data;
        int ret = 0;

	memset(&key,0,sizeof(key));
	memset(&data,0,sizeof(data));
	key.data = keyvalue;
	key.size = strlen(keyvalue)+1;

	if((ret = dbp->get(dbp,NULL,&key,&data,0))!=0)
	{
		dbp->err(dbp,ret,"DB->get");
	}
	else 
	{
		printf("data.data is :%s \n\n",(char *)data.data);
	}
	strcpy(datavalue,data.data);
	return 0;

}
void usage(char *program )
{
	 printf("USAGE:\n");
         printf("\t\t%s -[w/r] keyvalue datavalue\n",program);
}

int main(int argc,char **argv)
{

	DB *dbp;
	u_int32_t flags;
	char *keyvalue,*datavalue;
	int ret = 0;
	//create a standlone database
	
	if( argc < 3 || !strcmp(argv[1],"-h") ) 
	{
		//printf("USAGE:\n");
		//printf("\t\t%s -[w/r] keyvalue datavalue\n",argv[0]);
		usage(argv[0]);
	}
	else
	{	
		
		if(strcmp(argv[1],"-w")==0)
		{
			if(argc != 4)
			{
				printf("parameters wrong, please check first!\n");
				printf("use \"%s -h\" for help\n",argv[0]);
				
			}
			else
			{
				char *keyvalue=argv[2];
				char *datavalue=argv[3];
			
				openDB(&dbp,OPENFORWR);
				write_DB(dbp,keyvalue,datavalue);
				dbp->close(dbp,0);
			}
	
		}
		else if(strcmp(argv[1],"-r")==0)
		{
			//char result[32]={0};
			char * result =(char *)malloc(32*sizeof(char)) ;
			char *keyvalue=argv[2];
			char *datavalue=argv[3];
			
			openDB(&dbp,OPENFORRD);
			read_DB(dbp,keyvalue,result);
			dbp->close(dbp,0);
			printf("The result of the %s is %s\n",keyvalue,result);
			
		}
	}

	return 0;

}
