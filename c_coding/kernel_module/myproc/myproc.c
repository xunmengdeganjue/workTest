#include <linux/module.h>
/* Defines the license for this LKM */
MODULE_LICENSE("GPL");

char KERNEL_GOT[128]={0};
int KERNEL_GOT_LENTH=0;

int send_data_to_user( char *data,int len){
		
	if(data!=NULL && len!=0){
		KERNEL_GOT_LENTH=len;
		strncpy(KERNEL_GOT,data,KERNEL_GOT_LENTH);
	}
}
EXPORT_SYMBOL(send_data_to_user);

/* Init function called on module entry */
int my_module_init( void )
{
  printk(KERN_INFO "Nick(skysoft):my_module_init called.  Module is now loaded.\n");
  return 0;
}
/* Cleanup function called on module exit */
void my_module_cleanup( void )
{
  printk(KERN_INFO "Nick(skysoft)my_module_cleanup called.  Module is now unloaded.\n");
  return;
}
/* Declare entry and exit functions */
module_init( my_module_init );
module_exit( my_module_cleanup );
