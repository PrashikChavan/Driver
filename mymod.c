#include<linux/kernel.h>
#include<linux/module.h>

static int mymod_init(void)
{
 printk("module loaded successfully!");
 return 0;
}
static void mymod_exit(void)
{
 printk("module removed successfully");
}

module_init(mymod_init);
module_exit(mymod_exit);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Prashik");
MODULE_DESCRIPTION("Simple Linux Kernel Module");

