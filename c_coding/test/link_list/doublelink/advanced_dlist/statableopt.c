#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dlist.h"
#include "statableopt.h"

DLIST_HEAD(re_header); /*define and initialize a double linked-list named 'sta_header' */

/*
*    Function Name    : sta_node_alloc
*    Description      : malloc for the station node,and init it for the dlist.
*    Param  Input     : void.
*    Return Code      : the pointer point to a new station node.
*/
static STA_NODE *sta_node_alloc()
{
    STA_NODE *sta;
    sta  = (STA_NODE *)malloc(STA_NODE_SIZE);
    if (sta == NULL)
        return NULL;
    DLIST_HEAD_IN_STRUCT_INIT(sta->stalist);
    return sta;
}

static RE_NODE *re_node_alloc()
{
    RE_NODE *re;
    re  = (RE_NODE *)malloc(RE_NODE_SIZE);
    if (re == NULL)
        return NULL;
    DLIST_HEAD_IN_STRUCT_INIT(re->relist);
    return re;
}


static void sta_node_free(STA_NODE *sta)
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
static STA_NODE *_lookup_sta_node(DlistNode *staHeader, unsigned char *stamac)
{
    STA_NODE *sta;
    //int ret;

    if (stamac == NULL)
        return NULL;
    dlist_for_each_entry(sta, staHeader, stalist)
    {
    	printf("trace:function:%s,line:%d,stamac[%x]\n",__FUNCTION__,__LINE__,*stamac);
        if (memcmp(sta->stamac, stamac, MAC_SIZE) == 0)
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
static RE_NODE *_lookup_re_node(DlistNode *staHeader, unsigned char *remac)
{

    RE_NODE *re;

    if (remac == NULL)
        return NULL;
    dlist_for_each_entry(re, staHeader, relist)
    {
    	printf("trace:function:%s,line:%d\n",__FUNCTION__,__LINE__);
        if (memcmp(re->remac, remac, MAC_SIZE) == 0)
            return re;
    }
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
static CmsRet _sta_node_add(DlistNode *staHeader, STA_NODE *newsta)
{
    STA_NODE *sta;

    if (newsta == NULL)
        return CMSRET_INVALID_PARAMETER;
    printf("\033[32mtrace:function:%s,line:%d\033[0m\n",__FUNCTION__,__LINE__);
    sta = _lookup_sta_node(staHeader, newsta->stamac);
    if (sta)
    {
        printf("\033[31mThis MAC[%x] had been existed,stamac=[%x]\033[0m\n", *newsta->stamac,*sta->stamac);
        return CMSRET_SUCCESS;
    }

    dlist_append(&newsta->stalist, staHeader);
    return CMSRET_SUCCESS;
}

static CmsRet _node_del(DlistNode *staHeader, unsigned char *stamac, int node_type)
{
    CmsRet ret = CMSRET_SUCCESS;
    STA_NODE *sta;
	RE_NODE *re;
	if(node_type == 0){
	    sta = _lookup_sta_node(staHeader, stamac);
		if(sta){
		
			dlist_unlink(&sta->stalist);
			sta_node_free(sta);
			//_node_del(staHeader,stamac,node_type);
	
		}else{
			ret = CMSRET_RE_NOT_EXISTED ;
		}
	}else{
		re = _lookup_re_node(staHeader, stamac);
		if(re){
		
			dlist_unlink(&re->relist);
			sta_node_free(re);
			//_node_del(staHeader,stamac,node_type);
		
		}else{
			ret = CMSRET_RE_NOT_EXISTED ;
		}
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

static CmsRet _sta_node_del(DlistNode *staHeader, unsigned char *stamac){

	return _node_del(staHeader, stamac, STA_NORMAL);

}
/*
*    Function Name    : re_node_del
*    Description      : Delete a node from the station table reffer to the 'remac' of the station node.
*    Param  Input    1: struct dlist_node pointer, point to the head of the station table.
*					 2: a char pointer, point to the station's remac.
*    Return Code     0:success
*				  9060:parameter invalid.
*/
static CmsRet _re_node_del(DlistNode *staHeader, unsigned char *stamac){

	return _node_del(staHeader, stamac, STA_RE);

}

/*
*    Function Name    : sta_node_replace
*    Description      : Replace the node of the dlist.
*    Param  Input    1: struct sta_node pointer, point to the old station node.
*					 2: struct sta_node pointer, point to the nes station node.
*    Return Code     0:success
*				  9060:parameter invalid.
*/
static CmsRet sta_node_replace(STA_NODE *old, STA_NODE *new){

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

void sta_node_clear(){
	RE_NODE *re;
	DlistNode *pos,*next;
	int i = 0;
	
    list_for_each_safe(pos, next,&re_header)
    {
    	printf("free the re[%d]\n",i);
        re = dlist_entry(pos, struct re_node, relist); 
        dlist_unlink(pos); 
        free(re); 
    }

}

/*
*    Function Name    : sta_node_del
*    Description      : Delete a node from the station table reffer to the 'stamac' of the station node.
*    Param  Input    1: a char pointer, point to the station's stamac.
*    Return Code     0:success
*				  9060:parameter invalid.
*/
CmsRet sta_node_del(unsigned char *stamac)
{

	return _sta_node_del(&re_header, stamac);

}

/*
*    Function Name    : sta_node_del
*    Description      : Delete a node from the station table reffer to the 'stamac' of the station node.
*    Param  Input    1: a char pointer, point to the RangeExtender's stamac.
*    Return Code     0:success
*				  9060:parameter invalid.
*/
CmsRet re_node_del(unsigned char *remac)
{

	return _re_node_del(&re_header, remac);

}

/*
*    Function Name    : lookup_sta_node
*    Description      : Delete a node from the station table reffer to the 'remac' of the station node.
*    Param  Input    1: struct dlist_node pointer, point to the head of the station table.
*					 2: a char pointer, point to the station's remac.
*    Return Code     0:success
*				  9060:parameter invalid.
*/
int lookup_sta_node(unsigned char *stamac, unsigned char *remac)
{
	STA_NODE *sta;
	RE_NODE *re;
	
    if (stamac == NULL || remac == NULL)
        return 0;
    dlist_for_each_entry(re, &re_header, relist)
    {
      	if(!memcmp(re->remac, remac, MAC_SIZE) )
      	{
			dlist_for_each_entry(sta,&re->relist, stalist){
				if(!memcmp(sta->stamac,stamac, MAC_SIZE)){
					return 1;
				}
			}
		}
    }
	
    return 0;

}

void display_sta_table(){

	STA_NODE *sta;
	RE_NODE *re;
	int i = 0;
	dlist_for_each_entry(re, &re_header, relist)
	{
		if(re){
			printf("table [%d]REMAC:%02x:%02x:%02x:%02x:%02x:%02x\n", i, 
				re->remac[0],re->remac[1],re->remac[2],re->remac[3],re->remac[4],re->remac[5]);
			dlist_for_each_entry(sta,&re->relist,stalist){
				if(sta)
					printf("table [%d]STAMAC:%02x:%02x:%02x:%02x:%02x:%02x\n", i, 
							sta->stamac[0],sta->stamac[1],sta->stamac[2],sta->stamac[3],sta->stamac[4],sta->stamac[5]);

			}
			i++;
			//if(i>=10)
			//	return;
		}
	}
	
}

/*
*    Function Name    : lookup_sta_node
*    Description      : Delete a node from the station table reffer to the 'remac' of the station node.
*    Param  Input    1: struct dlist_node pointer, point to the head of the station table.
*					 2: a char pointer, point to the station's remac.
*    Return Code     0: success
*				  9060: parameter invalid.
*/

CmsRet sta_node_add(unsigned char *stamac, unsigned char*remac, unsigned char contype)
{
	CmsRet ret = 0;
 	RE_NODE *re;
	STA_NODE *newsta;
 	
    if (stamac == NULL ||remac == NULL )
        return CMSRET_INVALID_PARAMETER;

    re= _lookup_re_node(&re_header, remac);
    if (re)
    {
    	printf("\033[31mThis MAC[%2x:%2x:%2x:%2x:%2x:%2x] had been existed\033[0m\n",
		remac[0],remac[1],remac[2],remac[3],remac[4],remac[5]);
		
		DLIST_HEAD_IN_STRUCT_INIT(re->relist);
		
		newsta = sta_node_alloc();
		memcpy(newsta->stamac, stamac, MAC_SIZE);
		//memcpy(newsta->remac, remac, MAC_SIZE);
		newsta->con_type = contype;
	    // dlist_append(&newsta->stalist, &sta_header);
	    dlist_append(&newsta->stalist, &re->relist);	
        return CMSRET_SUCCESS;
    }else{
		RE_NODE *newre;
		newre = re_node_alloc();


		
		//memcpy(newsta->stamac, stamac, MAC_SIZE);
		memcpy(newre->remac, remac, MAC_SIZE);
	    dlist_append(&newre->relist, &re_header);

		newsta = sta_node_alloc();
		memcpy(newsta->stamac, stamac, MAC_SIZE);
		dlist_append(&newsta->stalist, &newre->relist);
		//DLIST_HEAD_IN_STRUCT_INIT(newre->relist);
	
    }
	
	return ret;
}









