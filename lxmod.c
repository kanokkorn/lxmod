#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("BSD");
MODULE_DESCRIPTION ("Host controller for BAG-1");
MODULE_AUTHOR ("Kanokkorn Kornkankit");


int init_module(void) {
  printk(KERN_INFO "Initializing\n");
  return 0;
}

void cleanup_module(void) {
  printk(KERN_INFO "Exiting\n");
}
