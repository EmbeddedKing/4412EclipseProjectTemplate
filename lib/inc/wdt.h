/*
 * wdt.h
 *
 *  Created on: 2018Äê6ÔÂ3ÈÕ
 *      Author: EmbeddedKing
 */

#ifndef LIB_INC_WDT_H_
#define LIB_INC_WDT_H_

#include "sys.h"

#define WTCON     __REG(0x10060000)
#define WTDAT     __REG(0x10060004)
#define WTCNT     __REG(0x10060008)
#define WTCLRINT  __REG(0x1006000c)

inline void wdt_init();

#endif /* LIB_INC_WDT_H_ */
