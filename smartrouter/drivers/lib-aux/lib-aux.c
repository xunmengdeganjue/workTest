/*======================================================================
    A character device driver to kill a process and its children recursively.
======================================================================*/
#include <linux/module.h>
#include <linux/types.h>
#include <linux/proc_fs.h>
#include <linux/errno.h>
#include <linux/sched.h>
#include <linux/signal.h>
#include <linux/version.h>


int channath0 = 0, channath1 = 0;
int killpid = 0;

int lib_send_sig(int chann)
{
	struct task_struct *task = NULL;

	if(chann >= 36)
		 channath0 = chann;
	else channath1 = chann;
	if(killpid == 0)
		return 0;
	for_each_process(task){        
		if(task->pid == killpid)       
			break;           
		}

	if(task->pid == killpid)
		force_sig(10,task);
	else killpid = 0;
	return 0;
}
EXPORT_SYMBOL(lib_send_sig);

static struct proc_dir_entry *parent_chann_entry;
static struct proc_dir_entry *parent_notifipid_entry;

ssize_t proc_read_pid(struct file *file, char __user *buf,size_t count, loff_t *ppos)
{
	char val[16] = {0};
	sprintf(val,"%d\n", killpid);
	return simple_read_from_buffer(buf, count, ppos, val, strlen(val));
}
ssize_t proc_write_pid( struct file *file,const char __user *buffer,size_t len,loff_t *offset )
{
    killpid = simple_strtoul(buffer, NULL, 10);
     return len;
}
ssize_t proc_read_chann(struct file *file, char __user *buf,size_t count, loff_t *ppos)
{
	char val[32] = {0};
	sprintf(val,"2.4G %d 5G %d\n", channath1,channath0);
	return simple_read_from_buffer(buf, count, ppos, val, strlen(val));
}

static const struct file_operations chann_fops = {
	.read = proc_read_chann,
	.llseek = default_llseek,
};
static const struct file_operations pid_fops = {
	.read = proc_read_pid,
	.write = proc_write_pid,
	.llseek = default_llseek,
};
static void create_proc_channel(void)
{
    parent_chann_entry = proc_create_data("curchan", 0644, NULL,&chann_fops,NULL);
    
}
static void create_proc_notifipid(void)
{
    parent_notifipid_entry = proc_create_data("notifipid", 0644, NULL,&pid_fops,NULL);
    
}

static void remove_proc_curchan(void)
{

#if LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,26)
    remove_proc_entry("curchan", NULL);
#else
    remove_proc_entry("curchan", &proc_root);
#endif
}
static void remove_proc_notifipid(void)
{

#if LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,26)
    remove_proc_entry("notifipid", NULL);
#else
    remove_proc_entry("notifipid", &proc_root);
#endif
}
static int __init 
globalmem_init(void)
{
  create_proc_channel();
  create_proc_notifipid();
  return 0;
}


static void __exit
globalmem_exit(void)
{
  remove_proc_curchan();
  remove_proc_notifipid();
}

MODULE_AUTHOR("skysoft Communications, Inc.");
MODULE_DESCRIPTION("skysoft Device Module");

MODULE_LICENSE("Proprietary");


module_init(globalmem_init);
module_exit(globalmem_exit);

