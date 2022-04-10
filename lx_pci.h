#ifndef __LX_PCI_H__
#define __LX_PCI_H__

#ifdef PCI_INTERFACE
#include <linux/pci.h>
#endif

typedef struct {
#ifdef LM_INTERFACE
  struct lm_device *lmdev;
#elif PCI_INTERFACE
  int rsrc_start;
  int rsrc_len;
#endif
}

#endif /* _LX_PCI_H */
