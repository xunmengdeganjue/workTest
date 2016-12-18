#include <linux/module.h>
/* Defines the license for this LKM */
MODULE_LICENSE("GPL");

char KERNEL_GOT[128]={0};
int KERNEL_GOT_LENTH=0;


extern int send_data_to_user( char *data,int len);

/* Init function called on module entry */
int my_module_init( void )
{
  printk(KERN_INFO "Nick(skysoft):my_module_init called.  Module is now loaded.\n");
  if(send_data_to_user("hello nickli\n",14)){
	  printk(KERN_INFO "Nick :call the send_data_to_user successfully!\n");
  }else{
	  printk(KERN_INFO "Nick :call the send_data_to_user failed!\n");
  }
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
