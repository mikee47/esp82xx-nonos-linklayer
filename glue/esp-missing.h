
#ifndef ESP_MISSING_H
#define ESP_MISSING_H

#include <stdarg.h>
#include <stdint.h>
#include <ipv4_addr.h>
#include <sdk/mem.h>

// these declarations are missing from sdk and used by lwip1.4 from sdk2.0.0

uint32_t r_rand (void);

struct netif* eagle_lwip_getif (int netif_index);

#define ets_post system_os_post
#define ets_task system_os_task

#endif
