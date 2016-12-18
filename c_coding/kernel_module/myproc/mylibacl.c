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

static struct proc_dir_entry * proc_dir = NULL;
static struct proc_dir_entry * proc_entry = NULL;

static char *cookie_pot;  // Space for fortune strings
static int cookie_index;  // Index to write next fortune
static int next_fortune;  // Index to read next fortune

//static struct proc_dir_entry *proc_file = NULL;

char KERNEL_GOT[128]={0};
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


ssize_t libacl_write( struct file *filp, const char __user *buff,
                        unsigned long len, void *data )
{
	len = KERNEL_GOT_LENTH;
	buff = KERNEL_GOT;
  if (copy_from_user( &cookie_pot[cookie_index], buff, len )) {
    return -EFAULT;
  }

  return len;
}
ssize_t libacl_read( char *page, char **start, off_t off,
                   int count, int *eof, void *data )
{
  int len;
  if (off > 0) {
    *eof = 1;
    return 0;
  }
  /* Wrap-around */
  if (next_fortune >= cookie_index) next_fortune = 0;
  len = sprintf(page, "%s\n", &cookie_pot[next_fortune]);
  next_fortune += len;
  return len;
}

struct file_operations proc_fops=
{
    .read = libacl_read,
    .write = libacl_write,
    .owner = THIS_MODULE,
};

int init_libacl_module( void )
{
	int ret = 0;

	proc_entry = proc_create( "libacl", 0644, proc_dir,&proc_fops);
	if (proc_entry == NULL) {
		printk(KERN_INFO "libacl: Couldn't create proc entry\n");
	} else {
		printk(KERN_INFO "libacl: Module loaded.\n");
	}

	return ret;
}

void cleanup_libacl_module( void )
{
  remove_proc_entry("libacl", proc_dir);
  //vfree(cookie_pot);
  printk(KERN_INFO "Nick---libacl: Module unloaded.\n");
}
module_init( init_libacl_module );
module_exit( cleanup_libacl_module );