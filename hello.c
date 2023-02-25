#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ANATOLIY");
MODULE_DESCRIPTION("Hav i ever be free?");

static int __init hello_init(void){
	printk(KERN_ALERT "Dyussembin Asylkhan Zverev Anatoliy Akhmetov Kalizhan Zhydebayev Adil Smagulov Dastan\n Metal Gear Rising Revengence will destroy you\n");
	return 0;
}

static void __exit hello_exit(void){
	printk(KERN_ALERT "Good bye teacher");
}

module_init(hello_init);
module_exit(hello_exit);
