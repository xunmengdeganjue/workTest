#include <stdio.h>

#include "dlist.h"
#include "re.h"

//DLIST_HEAD(sta_header); /*define and initialize a double linked-list named 'sta_header' */

STA_NODE *sta_node_alloc()
{
    STA_NODE *sta;
    sta  = malloc(STA_NODE_SIZE);
    if (sta == NULL)
        return NULL;
    DLIST_HEAD_IN_STRUCT_INIT(sta->stalist);
    return sta;
}

void sta_node_free(STA_NODE *sta)
{
    if (sta)
        free(sta);
}

/* lookup sta node reffer to the stamac address.*/
STA_NODE *lookup_sta_node(DlistNode *staHeader, char *stamac)
{
    STA_NODE *sta;
    int ret;

    if (stamac == NULL)
        return NULL;
    dlist_for_each_entry(sta, staHeader, stalist)
    {
    	printf("trace:function:%s,line:%d\n",__FUNCTION__,__LINE__);
        if (strncmp(sta->stamac, stamac, strlen(stamac)) == 0)
            return sta;
    }
    return NULL;
}

/* lookup sta node reffer to the stamac address.*/
STA_NODE *lookup_re_node(DlistNode *staHeader, char *remac)
{

    STA_NODE *sta;
    int ret;

    if (remac == NULL)
        return NULL;
    dlist_for_each_entry(sta, staHeader, stalist)
    {
    	printf("trace:function:%s,line:%d\n",__FUNCTION__,__LINE__);
        if (strncmp(sta->remac, remac, strlen(remac)) == 0)
            return sta;
    }
	printf("exit:function:%s,line:%d\n",__FUNCTION__,__LINE__);
    return NULL;     
}

CmsRet sta_node_add(DlistNode *staHeader, const STA_NODE *newsta)
{
    STA_NODE *sta;

    if (newsta == NULL)
        return CMSRET_INVALID_PARAMETER;
    printf("\033[32mtrace:function:%s,line:%d\033[0m\n",__FUNCTION__,__LINE__);
    sta = lookup_sta_node(staHeader, newsta->stamac);
    if (sta)
    {
        printf("\033[31mThis MAC[%s] had been existed,remac=[%s]\033[0m\n", newsta->stamac,sta->remac);
        return CMSRET_SUCCESS;
    }

    dlist_append(&newsta->stalist, staHeader);
    return CMSRET_SUCCESS;
}

CmsRet node_del(DlistNode *staHeader, const char *stamac, int node_type)
{
    CmsRet ret = CMSRET_SUCCESS;
    STA_NODE *sta;
	if(node_type == 0)
	    sta = lookup_sta_node(staHeader, stamac);
	else
		sta = lookup_re_node(staHeader, stamac);
	if(sta){
		
		dlist_unlink(&sta->stalist);
		sta_node_free(sta);
	
	}else{
		ret = CMSRET_RE_NOT_EXISTED ;
	}
    return ret;
}

CmsRet sta_node_del(DlistNode *staHeader, const char *stamac){

	return node_del(staHeader, stamac, STA_NORMAL);

}

CmsRet re_node_del(DlistNode *staHeader, const char *stamac){

	return node_del(staHeader, stamac, STA_RE);

}
CmsRet sta_node_replace(STA_NODE *old, STA_NODE *new){
	dlist_replace(&old->stalist,&new->stalist);
}

void display_sta_table(DlistNode *staHeader){
	STA_NODE *sta;
	int i = 0;
	dlist_for_each_entry(sta, staHeader, stalist)
	{
		printf("table [%d]STAMAC:%s\n", i, sta->stamac);
		printf("table [%d]REMAC:%s\n", i, sta->remac);
		printf("table [%d]ConType:%d\n", i, sta->con_type);
		i++;
	}
	
}

void sta_node_clear(DlistNode *staHeader){
	STA_NODE *sta;
	int i = 0;
#if 0	


	dlist_for_each_entry(sta,staHeader,stalist)
	{
		if(sta){
			printf("free the sta[%d]\n",i);
			dlist_unlink(&sta->stalist);
			//sta_node_free(sta);
			i++;
		}
	}
#endif

	struct dlist_node *pos,*next;
    list_for_each_safe(pos, next,staHeader)
    {
    	printf("free the sta[%d]\n",i);
        sta = dlist_entry(pos, struct sta_node, stalist); 
        dlist_unlink(pos); 
        free(sta); 
    }

	
	//free(staHeader);
}


