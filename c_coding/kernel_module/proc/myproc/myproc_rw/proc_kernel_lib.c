#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/proc_fs.h>
#include <linux/string.h>
#include <linux/vmalloc.h>
#include <asm/uaccess.h>
#include <linux/signal.h>
#include <linux/sched.h> /*For the for_each_process*/

MODULE_LICENSE("GPL");
//MODULE_LICENSE("Proprietary");
MODULE_DESCRIPTION("MY LIBACL Kernel Module");
MODULE_AUTHOR("Nick.Li");
//#define MAX_COOKIE_LENGTH       PAGE_SIZE

#define PROCCSA_NAME "myproc_message"  	/*The proc file contain all the csa or the cca information*/
#define PROCPID_NAME "message_hunter" 	/*The pid of the user space deamon.*/

static struct proc_dir_entry * proc_pid = NULL;
static struct proc_dir_entry * proc_csa = NULL;


//static struct proc_dir_entry *proc_file = NULL;

char KERNEL_GOT[512]={0};
int KERNEL_GOT_LENTH=0;
int csa_hunter_pid = 0;


int send_data_to_user( char *data,int len){
	
	struct task_struct *task = NULL;
	
	/*Deal with the data*/	
	if(data!=NULL && len!=0){
		KERNEL_GOT_LENTH=len;
		memset(KERNEL_GOT,0x00,sizeof(KERNEL_GOT));
		strncpy(KERNEL_GOT,data,KERNEL_GOT_LENTH);
	}else{
		return -1;	
	}
	
	/*Deal with the signal*/
	if(csa_hunter_pid == 0){
		return 0;
	}
	for_each_process(task){        
		if(task->pid == csa_hunter_pid)       
			break;           
	}

	if(task->pid == csa_hunter_pid)
		force_sig(10,task);/*发送信号，如kill -USR1 message_hunter <=> kill -10 message_hunter */
	else 
		csa_hunter_pid = 0;
	
	return 0;
}
EXPORT_SYMBOL(send_data_to_user);

ssize_t libcsa_pid_read( struct file *file, char __user *buf,size_t count, loff_t *ppos )
{
	char val[32] = {0};
	printk(KERN_INFO "procfile_read (/proc/%s) called\n", PROCPID_NAME);
	sprintf(val,"%d\n",csa_hunter_pid);
	return simple_read_from_buffer(buf, count, ppos, val, strlen(val));
}

ssize_t libcsa_write_pid( struct file *file,const char __user *buffer,size_t len,loff_t *offset )
{
    csa_hunter_pid = simple_strtoul(buffer, NULL, 10);
    return len;
}

struct file_operations proc_pid_fops=
{
    .read = libcsa_pid_read,
	.write = libcsa_write_pid,
    .owner = THIS_MODULE,
};

ssize_t libcsa_read(struct file *file, char __user *buf,size_t count, loff_t *ppos )
{
	char val[1016] = {0};
	
	printk(KERN_INFO "procfile_read (/proc/%s) called\n", PROCCSA_NAME);
	sprintf(val,KERNEL_GOT);
	return simple_read_from_buffer(buf, count, ppos, val, strlen(val));
}

struct file_operations proc_csa_fops=
{
    .read = libcsa_read,
    .owner = THIS_MODULE,
};

int init_lib_module( void )
{
	int ret = 0;
	
	proc_pid = proc_create_data(PROCPID_NAME, 0644, NULL,&proc_pid_fops,NULL);
	if (proc_pid == NULL) {
		printk(KERN_INFO "proclib: Couldn't create proc entry %s\n",PROCPID_NAME);
		ret = -1;
	} else {
		printk(KERN_INFO "proclib: Module loaded %s.\n",PROCPID_NAME);
	}
	
	proc_csa = proc_create(PROCCSA_NAME, 0644, NULL,&proc_csa_fops);
	if (proc_csa == NULL) {
		printk(KERN_INFO "proclib: Couldn't create proc entry %s\n",PROCCSA_NAME);
		ret = -1;
	} else {
		printk(KERN_INFO "proclib: Module loaded %s.\n",PROCCSA_NAME);
	}
	
	return ret;

}

void cleanup_lib_module( void )
{
  remove_proc_entry(PROCCSA_NAME,NULL);
  remove_proc_entry(PROCPID_NAME,NULL);
  printk(KERN_INFO "Nick-proclib: Module unloaded.\n");
  
}
module_init( init_lib_module );
module_exit( cleanup_lib_module );