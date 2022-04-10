#ifndef __LX_USB_H__
#define __LX_USB_H__

struct usb_host_endpoint {
  struct usb_endpoint_descriptor desc;
  struct usb_ss_ep_comp_descriptor ss_ep_comp;
  struct usb_ssp_isoc_ep_comp_descriptor ssp_isoc_ep_comp;
  struct list_head urb_list;
  void * hcpriv;
  struct ep_device * ep_dev;
  unsigned char * extra;
  int extralen;
  int enabled;
  int streams;
};

#endif /* _LX_USB_H_ */
