#include <stdio.h>
#include <string.h>
#include "command.h"



int do_cmd(char *cmd)
{
	FILE *fp;
	int ret = 0;



	if((cmd == NULL)||(strlen(cmd)<1))
	{
        goto err;
	}
	printf("cmd [%s]\n", cmd);
	fp = popen(cmd, "r");
    if(NULL == fp)
    {
        goto err;
    }

	ret = pclose(fp);
    if(-1 == ret)
    {
        goto err;
    }


	return ret;
err:
	return -1;
}
