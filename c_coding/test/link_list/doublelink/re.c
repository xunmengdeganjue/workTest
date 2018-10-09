#include <stdio.h>

#include "dlist.h"
#include "re.h"


DLIST_HEAD(sta_header);

STA_NODE *sta_node_alloc()
{
    STA_NODE *sta;

    sta  = malloc(STA_NODE_SIZE);
    if (sta == NULL)
        return NULL;
    DLIST_HEAD_IN_STRUCT_INIT(sta->nextre);
    sta->re_flag = STA_NORMAL;
    return sta;
}

void sta_node_free(STA_NODE *sta)
{
    if (sta)
        free(sta);
}


/* lookup sta from all stas */
STA_NODE *lookup_sta_node(DlistNode staHeader, char *stamac)
{
    STA_NODE *sta;
    int ret;

    if (stamac == NULL)
        return NULL;
    dlist_for_each_entry(sta, &staHeader, stalist)
    {
        if (strncmp(sta->mac, stamac, strlen(stamac)) == 0)
            return sta;
        else if (sta->re_flag == STA_RE)
            sta = lookup_sta_node(sta->nextre, stamac);
    }
    return NULL;
}

/* lookup sta from designated RE */
STA_NODE *lookup_sta_node2(DlistNode staHeader, char *stamac)
{
    STA_NODE *sta;
    int ret;

    if (stamac == NULL)
        return NULL;
    dlist_for_each_entry(sta, &staHeader, stalist)
    {
        if (strncmp(sta->mac, stamac, strlen(stamac)) == 0)
            return sta;
    }
    return NULL;     
}

CmsRet sta_node_add(DlistNode staHeader, const STA_NODE *newsta)
{
    STA_NODE *sta;

    if (newsta == NULL)
        return CMSRET_INVALID_PARAMETER;
    
    sta = lookup_sta_node2(staHeader, newsta->mac);
    if (sta)
    {
        STA_NODE *re;

        re = (STA_NODE *)staHeader;
        cprintf("This MAC[%s] had been existed in RE[%s]\n", newsta->mac, re->mac);
        return CMSRET_SUCCESS;
    }
    if (dlist_empty(&(staHeader)))
    {
        dlist_append((DlistNode *)newsta, &staHeader);
        return CMSRET_SUCCESS;
    }

    dlist_append((DlistNode *)newsta, &staHeader);
    return CMSRET_SUCCESS;    
}


CmsRet sta_node_del(DlistNode staHeader, const char *stamac)
{
    CmsRet ret = CMSRET_SUCCESS;
    STA_NODE *sta;

    sta = lookup_sta_node
    return ret;
}


