#include<linux/init.h>
#include<linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");
static int hello_world(){
	printk(KERN_ALERT "Hello, world\n");
	return 0;
}
static int bye_world(){
	printk(KERN_ALERT "Good bye, cruel world\n");
	return 0;
}

module_init(hello_world);
module_exit(bye_world);
