#include <stdio.h>

/*for  struct stat statbuf*/
#include <sys/types.h>
#include <sys/stat.h>

#include <string.h>
#include <fcntl.h> /*for the _O_RDONLY */
//#include <io.h>
//#include <FCNTL.H>

#if 0
int getfilesize()
{
	int iresult;
	struct _stat buf;
	iresult = _stat(__FILE__,&buf);
	if(iresult == 0)
	{
		return buf.st_size;
	}
	return NULL;
}

int getfilesize01()
{
	int fp;
	fp=_open(__FILE__,_O_RDONLY);
	if(fp==-1) 
		return NULL;
	return _filelength(fp);
	//return NULL;
}

int getfilesize02()
{
	int fp;
	fp=_open(__FILE__,_O_RDONLY);
	if(fp==-1) 
		return NULL;
	return _lseek(fp,0,SEEK_END);
	//return NULL;
}

int getfilesize03()
{
	int fp;
	fp=_open(__FILE__,_O_RDONLY);
	if(fp==-1) 
	return NULL;
	return _lseek(fp,0,SEEK_END);
	//return NULL;
}
#endif

int getfilesize03()
{
    struct stat statbuf;
    stat(__FILE__,&statbuf);
    int size=statbuf.st_size;
    return size;
}

int getfilesize04()
{
	FILE *fp;
	if((fp=fopen(__FILE__,"r"))==NULL)
		return 0;
	fseek(fp,0,SEEK_END);
	return ftell(fp); //return NULL;
}

int getfilesize05()
{
	FILE *fp;
	char str[1];
	int i = 0;
	if((fp=fopen(__FILE__,"rb"))==NULL)
		return 0;
	for(i = 0;!feof(fp);i++)
	{
		fread(&str,1,1,fp); 
	}
	return i - 1; //return NULL;
}

int main(int argc, char* argv[])
{ 
/*	printf("getfilesize()=%d\n",getfilesize());
	printf("getfilesize01()=%d\n",getfilesize01());
	printf("getfilesize02()=%d\n",getfilesize02());
*/	printf("getfilesize03()=%d\n",getfilesize03());


	long sizelimit = 1024*1024;
	int filesize= 0;
	filesize = getfilesize04();
	if (filesize >= sizelimit){
		printf("the file is to huge,it belong the %ld!\n",sizelimit);
	}else{
		printf("the limit size if [%ld]\n",sizelimit);
		printf("the size of the file [%s] is [%d]byte\n",__FILE__,filesize);
	}
	printf("getfilesize04()=%d of the file [%s]\n",getfilesize04(),__FILE__);
	printf("getfilesize05()=%d of the file [%s]\n",getfilesize05(),__FILE__);
	return 0;
}
