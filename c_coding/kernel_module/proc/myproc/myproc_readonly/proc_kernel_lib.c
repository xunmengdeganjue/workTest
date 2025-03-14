#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/proc_fs.h>
#include <linux/string.h>
#include <linux/vmalloc.h>
#include <asm/uaccess.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MY LIBACL Kernel Module");
MODULE_AUTHOR("Nick.Li");
//#define MAX_COOKIE_LENGTH       PAGE_SIZE
#define  proc_name "my_proc_lib_test"

static struct proc_dir_entry * proc_dir = NULL;
static struct proc_dir_entry * proc_entry = NULL;

char KERNEL_GOT[512]={0};
//char KERNEL_GOT[PAGE_SIZE]={0};
int KERNEL_GOT_LENTH=0;

int send_data_to_user( char *data,int len){
		
	if(data!=NULL && len!=0){
		KERNEL_GOT_LENTH=len;
		strncpy(KERNEL_GOT,data,KERNEL_GOT_LENTH);
	}else{
		return -1;	
	}
	return 0;
}
EXPORT_SYMBOL(send_data_to_user);

ssize_t libproc_read( struct file *file, char __user *buf,size_t count, loff_t *ppos )
{
	char val[1024] = {0};
	
	printk(KERN_INFO "procfile_read (/proc/%s) called\n", proc_name);
	sprintf(val,KERNEL_GOT);
	return simple_read_from_buffer(buf, count, ppos, val, strlen(val));
}

struct file_operations proc_fops=
{
    .read = libproc_read,
    .owner = THIS_MODULE,
};

int init_libacl_module( void )
{
	int ret = 0;
	printk("PAGE SIZE = %ld\n",PAGE_SIZE);
	proc_entry = proc_create( proc_name, 0644, proc_dir,&proc_fops);
	if (proc_entry == NULL) {
		printk(KERN_INFO "%s: Couldn't create proc entry\n",proc_name);
	} else {
		printk(KERN_INFO "%s: Module loaded.\n",proc_name);
	}

	return ret;
}

void cleanup_libacl_module( void )
{
  remove_proc_entry(proc_name,NULL);
  printk(KERN_INFO "Nick: Module unloaded.\n");
}
module_init( init_libacl_module );
module_exit( cleanup_libacl_module );
