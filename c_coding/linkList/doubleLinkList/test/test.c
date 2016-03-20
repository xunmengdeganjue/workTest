#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
  
#include "dlist.h"  
  
typedef struct Cuboid_  
{  
    int length;  
    int width;  
    int height;  
}Cuboid;  
  
Cuboid *cube_instance(const int length, const int width, const int height)  
{  
    Cuboid *cb_ptr;  
    cb_ptr = (Cuboid *)malloc(sizeof(Cuboid));  
    if( cb_ptr == NULL )  
        return NULL;  
  
    cb_ptr->length = length;  
    cb_ptr->width = width;  
    cb_ptr->height = height;  
  
    return cb_ptr;  
}  
  
/*destroy */  
void destroy(void *data)  
{  
    free(data);  
    return;  
}  
  
  
/* main */  
int main(int argc, char **argv)  
{  
    int i;  
    DList dlist_exp;  
    DListElmt *p = NULL;  
    Cuboid *cb1_ptr, *cb2_ptr, *cb3_ptr, *cb4_ptr, *cb5_ptr;  
    Cuboid *cb_ptr;  
  
    //cb1_ptr ~ cb5_ptr are the data of the 5 elements.  
    cb1_ptr = cube_instance(1,2,3);  
    cb2_ptr = cube_instance(6,10,8);  
    cb3_ptr = cube_instance(5,20,30);  
    cb4_ptr = cube_instance(17,100,25);  
    cb5_ptr = cube_instance(3,6,9);  
  
    //init the double linked list.  
    dlist_init(&dlist_exp, destroy);  
  
    //insert the 5 elements into the dlist   
    dlist_ins_next(&dlist_exp, NULL, (void *)cb1_ptr );  //insert data:cb1  
    p = dlist_head(&dlist_exp); //get the address of the first element  
    dlist_ins_next(&dlist_exp, p , (void *)cb2_ptr );   //insert data:cb2    cb1- cb2  
    p = dlist_next(p);          //pointer to the element containing the data cb2.  
    dlist_ins_prev(&dlist_exp, p, (void *)cb3_ptr );    //insert data:cb3   cb1- cb3- cb2  
    dlist_ins_prev(&dlist_exp, p, (void *)cb4_ptr );    //insert data:cb4   cb1- cb3- cb4- cb2  
    p = dlist_prev(p);          //pointer to the element conatining the data cb4.  
    dlist_ins_prev(&dlist_exp, p, (void *)cb5_ptr );      //insert data:cb5   cb1- cb3- cb5- cb4- cb2  
  
    //now the sequence is: head->cb1->cb3->cb5->cb4->cb2  
    printf("traverse and print:\n");  
    p = dlist_head(&dlist_exp); //get the head element;  
    for( i = 0; i < dlist_size(&dlist_exp); i++ )  
    {  
        cb_ptr = (Cuboid *)dlist_data(p); //get the element's data, every data is a Cuboid's pointer.  
        printf("i = %d: ",i);  
        printf("length = %d, width = %d, height = %d\n",  
                cb_ptr->length,  
                cb_ptr->width,  
                cb_ptr->height);  
        p = dlist_next(p); //pointer to next element;  
    }  
  
    //we'll remove the third element:that's containing the data of cb5(3,6,9)  
    p = dlist_head(&dlist_exp);  
    p = dlist_next(p);  
    p = dlist_next(p);  
    dlist_remove(&dlist_exp, p, (void **)&cb_ptr);  
    printf("the data of the third element: length = %d, width = %d, height = %d\n",  
            cb_ptr->length,  
            cb_ptr->width,  
            cb_ptr->height);  
    destroy(cb_ptr); //free the memory  
  
    //now we'll show you the remained elements,the sequence is :(head)cb1->cb3->cb4->cb2(tail)  
    printf("after remove the third elements:\n");  
    p = dlist_head(&dlist_exp);  
    for(i = 0; i < dlist_size(&dlist_exp); i++ )  
    {  
        cb_ptr = (Cuboid *)dlist_data(p);  
        printf("i = %d: ",i);  
        printf("length = %d, width = %d, height = %d\n",  
                cb_ptr->length,  
                cb_ptr->width,  
                cb_ptr->height);  
        p = dlist_next(p);  
    }  
  
    //destroy the double linked list  
    dlist_destroy(&dlist_exp);  
    printf("after destroy the list,its size = %d\n", dlist_size(&dlist_exp));  
    return 0;  
}  