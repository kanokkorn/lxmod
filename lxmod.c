#ifdef __linux__
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/types.h>
#elif defined(__FreeBSD__)

/* BSD code */
#endif

MODULE_LICENSE("BSD 2");
MODULE_DESCRIPTION ("kernel module for custom device");
MODULE_AUTHOR ("Kanokkorn Kornkankit");


int init_module(void) {
  printk(KERN_INFO "Initializing\n");
  return 0;
}

void cleanup_module(void) {
  printk(KERN_INFO "Exiting\n");
}
