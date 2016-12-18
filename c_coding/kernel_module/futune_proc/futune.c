#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/proc_fs.h>
#include <linux/string.h>
#include <linux/vmalloc.h>
#include <asm/uaccess.h>

MODULE_LICENSE("GPL");

MODULE_DESCRIPTION("Fortune Cookie Kernel Module");
MODULE_AUTHOR("Nick.Li");
#define MAX_COOKIE_LENGTH       PAGE_SIZE

static struct proc_dir_entry * proc_dir = NULL;
static struct proc_dir_entry * proc_entry = NULL;

static char *cookie_pot;  // Space for fortune strings
static int cookie_index;  // Index to write next fortune
static int next_fortune;  // Index to read next fortune

//static struct proc_dir_entry *proc_file = NULL;

ssize_t fortune_write( struct file *filp, const char __user *buff,
                        unsigned long len, void *data )
{
  int space_available = (MAX_COOKIE_LENGTH-cookie_index)+1;
  if (len > space_available) {
    printk(KERN_INFO "fortune: cookie pot is full!\n");
    return -ENOSPC;
  }
  if (copy_from_user( &cookie_pot[cookie_index], buff, len )) {
    return -EFAULT;
  }
  cookie_index += len;
  cookie_pot[cookie_index-1] = 0;
  return len;
}
ssize_t fortune_read( char *page, char **start, off_t off,
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
    .read = fortune_read,
    .write = fortune_write,
    .owner = THIS_MODULE,
};

int init_fortune_module( void )
{
  int ret = 0;
  cookie_pot = (char *)vmalloc( MAX_COOKIE_LENGTH );
  if (!cookie_pot) {
    ret = -ENOMEM;
  } else {
    memset( cookie_pot, 0, MAX_COOKIE_LENGTH );
    proc_entry = proc_create( "fortune", 0644, proc_dir,&proc_fops);
    if (proc_entry == NULL) {
      ret = -ENOMEM;
      vfree(cookie_pot);
      printk(KERN_INFO "fortune: Couldn't create proc entry\n");
    } else {
      cookie_index = 0;
      next_fortune = 0;
      printk(KERN_INFO "fortune: Module loaded.\n");
    }
  }
  return ret;
}

void cleanup_fortune_module( void )
{
  remove_proc_entry("fortune", proc_entry);
  vfree(cookie_pot);
  printk(KERN_INFO "fortune: Module unloaded.\n");
}
module_init( init_fortune_module );
module_exit( cleanup_fortune_module );