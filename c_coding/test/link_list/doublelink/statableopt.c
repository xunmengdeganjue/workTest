#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dlist.h"
#include "statableopt.h"

//DLIST_HEAD(sta_header); /*define and initialize a double linked-list named 'sta_header' */

/*
*    Function Name    : sta_node_alloc
*    Description      : malloc for the station node,and init it for the dlist.
*    Param  Input     : void.
*    Return Code      : the pointer point to a new station node.
*/
STA_NODE *sta_node_alloc()
{
    STA_NODE *sta;
    sta  = (STA_NODE *)malloc(STA_NODE_SIZE);
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

/*
*    Function Name    : lookup_sta_node
*    Description      : lookup sta node reffer to the stamac address.
*    Param  Input    1: struct dlist_node pointer, point to the header of the station table.
*					 2: char pointer, point to the dest station's mac addr.
*    Return     success : return the pointer point to a new station node.
*				  failed: NULL.
*/
STA_NODE *lookup_sta_node(DlistNode *staHeader, unsigned char *stamac)
{
    STA_NODE *sta;
    //int ret;

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

/*
*    Function Name    : lookup_re_node
*    Description      : lookup sta node reffer to the remac address.
*    Param  Input    1: struct dlist_node pointer, point to the header of the station table.
*					 2: char pointer, point to the dest station's mac addr.
*    Return     success : return the pointer point to a new station node.
*				  failed: NULL.
*/
STA_NODE *lookup_re_node(DlistNode *staHeader, unsigned char *remac)
{

    STA_NODE *sta;

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
/*
*    Function Name    : sta_node_add
*    Description      : Add a new station node to the station table.
*    Param  Input    1: struct sta_node pointer, point to the old station node.
*					 2: struct sta_node pointer, point to the new station node.
*    Return Code     0: success
*				  9060: parameter invalid.
*/

CmsRet sta_node_add(DlistNode *staHeader, STA_NODE *newsta)
{
    STA_NODE *sta;

    if (newsta == NULL)
        return CMSRET_INVALID_PARAMETER;
    printf("\033[32mtrace:function:%s,line:%d\033[0m\n",__FUNCTION__,__LINE__);
    sta = lookup_sta_node(staHeader, newsta->stamac);
    if (sta)
    {
        printf("\033[31mThis MAC[%x] had been existed,stamac=[%x]\033[0m\n", newsta->stamac,sta->stamac);
        return CMSRET_SUCCESS;
    }

    dlist_append(&newsta->stalist, staHeader);
    return CMSRET_SUCCESS;
}

CmsRet node_del(DlistNode *staHeader, unsigned char *stamac, int node_type)
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

/*
*    Function Name    : sta_node_del
*    Description      : Delete a node from the station table reffer to the 'stamac' of the station node.
*    Param  Input    1: struct dlist_node pointer, point to the head of the station table.
*					 2: a char pointer, point to the station's stamac.
*    Return Code     0:success
*				  9060:parameter invalid.
*/

CmsRet sta_node_del(DlistNode *staHeader, unsigned char *stamac){

	return node_del(staHeader, stamac, STA_NORMAL);

}
/*
*    Function Name    : re_node_del
*    Description      : Delete a node from the station table reffer to the 'remac' of the station node.
*    Param  Input    1: struct dlist_node pointer, point to the head of the station table.
*					 2: a char pointer, point to the station's remac.
*    Return Code     0:success
*				  9060:parameter invalid.
*/
CmsRet re_node_del(DlistNode *staHeader, unsigned char *stamac){

	return node_del(staHeader, stamac, STA_RE);

}

/*
*    Function Name    : sta_node_replace
*    Description      : Replace the node of the dlist.
*    Param  Input    1: struct sta_node pointer, point to the old station node.
*					 2: struct sta_node pointer, point to the nes station node.
*    Return Code     0:success
*				  9060:parameter invalid.
*/
CmsRet sta_node_replace(STA_NODE *old, STA_NODE *new){

	CmsRet ret = CMSRET_SUCCESS;
	if(new)
		dlist_replace(&old->stalist,&new->stalist);
	else
		ret = CMSRET_INVALID_PARAMETER;
	return ret;
	
}

/*
*    Function Name    : sta_node_clear
*    Description      : clean all the node of the dlist,free all the memery.
*    Param  Input    1: Struct dlist_node pointer,the head of the double link list.
*    Return Code      : void
*/

void sta_node_clear(DlistNode *staHeader){
	STA_NODE *sta;
	DlistNode *pos,*next;
	int i = 0;
	
    list_for_each_safe(pos, next,staHeader)
    {
    	printf("free the sta[%d]\n",i);
        sta = dlist_entry(pos, struct sta_node, stalist); 
        dlist_unlink(pos); 
        free(sta); 
    }

}

void display_sta_table(DlistNode *staHeader){

	STA_NODE *sta;
	int i = 0;
	dlist_for_each_entry(sta, staHeader, stalist)
	{
		printf("table [%d]STAMAC:%02x:%02x:%0x2:%02x:%02x:%02x\n", i, 
		sta->stamac[0],sta->stamac[1],sta->stamac[2],sta->stamac[3],sta->stamac[4],sta->stamac[5]);
		printf("table [%d]REMAC:%02x:%02x:%0x2:%02x:%02x:%02x\n", i, sta->remac[0],sta->remac[1],sta->remac[2],sta->remac[3],sta->remac[4],sta->remac[5]);
		printf("table [%d]ConType:%d\n", i, sta->con_type);
		i++;
	}
	
}



