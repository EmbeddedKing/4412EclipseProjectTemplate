/*
 * wdt.c
 *
 *  Created on: 2018年6月3日
 *      Author: EmbeddedKing
 */

#include "wdt.h"

inline void wdt_init()
{
	/* 关闭定时器，给寄存器写权限 */
	WTCON &= ~(0x01 << 5);

	/* 设置第一次预分频 */
	WTCON &= ~(0xff << 8);
	WTCON |= (249 << 8);

	/* 设置第二次预分频 */
	WTCON &= ~(0x03 << 3);
	WTCON |= (0x02 << 3);

	/* 开启复位 */
	WTCON |= (0x01 << 2);
	WTCON |= (0x01 << 0);

	/* 开启定时器 */
	WTCON |= (0x01 << 5);
}
