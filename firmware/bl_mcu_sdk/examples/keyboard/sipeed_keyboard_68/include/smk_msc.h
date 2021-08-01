#ifndef __SMK_MSC_H
#define __SMK_MSC_H

#include "hal_usb.h"
#include "usbd_core.h"
#include "usbd_msc.h"

#define MSC_IN_EP  0x86
#define MSC_OUT_EP 0x07

void usbd_msc_get_cap(uint8_t lun, uint32_t *block_num, uint16_t *block_size);
int usbd_msc_sector_read(uint32_t sector, uint8_t *buffer, uint32_t length);
int usbd_msc_sector_write(uint32_t sector, uint8_t *buffer, uint32_t length);

#endif