/*
 * wdt.c
 *
 *  Created on: 2018��6��3��
 *      Author: EmbeddedKing
 */

#include "wdt.h"

inline void wdt_init()
{
	/* �رն�ʱ�������Ĵ���дȨ�� */
	WTCON &= ~(0x01 << 5);

	/* ���õ�һ��Ԥ��Ƶ */
	WTCON &= ~(0xff << 8);
	WTCON |= (249 << 8);

	/* ���õڶ���Ԥ��Ƶ */
	WTCON &= ~(0x03 << 3);
	WTCON |= (0x02 << 3);

	/* ������λ */
	WTCON |= (0x01 << 2);
	WTCON |= (0x01 << 0);

	/* ������ʱ�� */
	WTCON |= (0x01 << 5);
}
