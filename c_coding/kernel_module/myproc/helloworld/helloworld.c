/*
 *  procfs1.c -  create a "file" in /proc
 *
 */

#include <linux/module.h>	/* Specifically, a module */
#include <linux/kernel.h>	/* We're doing kernel work */
#include <linux/proc_fs.h>	/* Necessary because we use the proc fs */
#include <linux/version.h>
  
#define procfs_name "helloworld"

MODULE_LICENSE("GPL");

MODULE_DESCRIPTION("MY LIBACL Kernel Module");
MODULE_AUTHOR("Nick.Li");

/**
 * This structure hold information about the /proc file
 *
 */
struct proc_dir_entry *Our_Proc_File;

/* Put data into the proc fs file.
 * 
 * Arguments
 * =========
 * 1. The buffer where the data is to be inserted, if
 *    you decide to use it.
 * 2. A pointer to a pointer to characters. This is
 *    useful if you don't want to use the buffer
 *    allocated by the kernel.
 * 3. The current position in the file
 * 4. The size of the buffer in the first argument.
 * 5. Write a "1" here to indicate EOF.
 * 6. A pointer to data (useful in case one common 
 *    read for multiple /proc/... entries)
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
 */
int procfile_read(char *buffer,
	      char **buffer_location,
	      off_t offset, int buffer_length, int *eof, void *data)
{
	int ret;
	
	printk(KERN_INFO "procfile_read (/proc/%s) called\n", procfs_name);
	
	/* 
	 * We give all of our information in one go, so if the
	 * user asks us if we have more information the
	 * answer should always be no.
	 *
	 * This is important because the standard read
	 * function from the library would continue to issue
	 * the read system call until the kernel replies
	 * that it has no more information, or until its
	 * buffer is filled.
	 */
	if (offset > 0) {
		/* we have finished to read, return 0 */
		ret  = 0;
	} else {
		/* fill the buffer, return the buffer size */
		ret = sprintf(buffer, "HelloWorld!\n");
	}

	return ret;
}


struct file_operations proc_fops=
{
    .read = procfile_read,
    .write = NULL,
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
