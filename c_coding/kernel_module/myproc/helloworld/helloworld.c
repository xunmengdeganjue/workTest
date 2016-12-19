/*
 *  helloworld.c -  create a "helloworld" in /proc
 *  
 *
 */

#include <linux/module.h>	/* Specifically, a module */
#include <linux/kernel.h>	/* We're doing kernel work */
#include <linux/proc_fs.h>	/* Necessary because we use the proc fs */
#include <linux/version.h>  /* For the LINUX_VERSION_CODE*/
#include <linux/string.h>   /* For the sprintf*/
  
#define procfs_name "helloworld"

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MY Proc Test Kernel Module");
MODULE_AUTHOR("Nick.Li");

/**
 * This structure hold information about the /proc file
 *
 */
static struct proc_dir_entry *Our_Proc_File;

/* Put data into the proc fs file.
 * 
 * Arguments
 * =========
 * 1. the struct represent a file that will be used by the module.
 * 2. the user space buffer to read to
 * 3. the maximum number of bytes to read
 * 4. the current position in the buffer.
 *
 * Usage and Return Value
 * ======================
 * A return value of zero means you have no further
 * information at this time (end of file). A negative
 * return value is an error condition.
 *
 * For More Information
 * ====================
 * The way I discovered what to do with this function
 * wasn't by reading documentation, but by reading the
 * code which used it. I just looked to see what uses
 * the get_info field of proc_dir_entry struct (I used a
 * combination of find and grep, if you're interested),
 * and I saw that  it is used in <kernel source
 * directory>/fs/proc/array.c.
 *
 * If something is unknown about the kernel, this is
 * usually the way to go. In Linux we have the great
 * advantage of having the kernel source code for
 * free - use it.
 
		* simple_read_from_buffer - copy data from the buffer to user space
		* @to: the user space buffer to read to
		* @count: the maximum number of bytes to read
		* @ppos: the current position in the buffer
		* @from: the buffer to read from
		* @available: the size of the buffer
		*
		* The simple_read_from_buffer() function reads up to @count bytes from the
		* buffer @from at offset @ppos into the user space address starting at @to.
		*
		* On success, the number of bytes read is returned and the offset @ppos is
		  * advanced by this number, or negative value is returned on error.
 */
ssize_t procfile_read(struct file *file, char __user *buf,size_t count, loff_t *ppos)
{
	char val[1016] = {0};
	
	printk(KERN_INFO "procfile_read (/proc/%s) called\n", procfs_name);
	sprintf(val,"hello world !\n");
	return simple_read_from_buffer(buf, count, ppos, val, strlen(val));
	
}


static const struct file_operations proc_fops=
{
    .read = procfile_read,
    .owner = THIS_MODULE,
};

static int __init my_init_module(void)
{
	//Our_Proc_File = create_proc_entry(procfs_name, 0644, NULL);
	Our_Proc_File = proc_create(procfs_name,0644,NULL,&proc_fops);
	if (Our_Proc_File == NULL) {
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,26)
		remove_proc_entry(procfs_name, NULL);
#else
		remove_proc_entry(procfs_name, &proc_root);
#endif
		printk(KERN_ALERT "Error: Could not initialize /proc/%s\n",
		       procfs_name);
		return -ENOMEM;
	}
	printk(KERN_INFO "/proc/%s created\n", procfs_name);	
	return 0;	/* everything is ok */
}

static void __exit my_cleanup_module(void)
{
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,26)
	remove_proc_entry(procfs_name, NULL);
#else
	remove_proc_entry(procfs_name, &proc_root);
#endif
	printk(KERN_INFO "/proc/%s removed\n", procfs_name);
}

/* Declare entry and exit functions */
module_init( my_init_module );
module_exit( my_cleanup_module );
