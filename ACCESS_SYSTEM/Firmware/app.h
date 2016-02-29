#ifndef __APP_H__
#define __APP_H__


#include "board.h"
#include "config.h"



enum
{
	CMD_GET_STATUS = 0x80
};


enum
{
	PASS = 0x80,
	FAIL = 0x81
};


void APP_init(void);

void APP_task(void);

UINT8 APP_comCallBack( UINT8 *rxPacket, UINT8* txCode, UINT8** txPacket);

#endif