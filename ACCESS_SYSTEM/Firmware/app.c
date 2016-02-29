#include "app.h"
#include "uart_driver.h"


void APP_init(void)
{
	GREEN_LAMP = 0;
	RED_LAMP = 0;		
}


void APP_task(void)
{
	UINT8 data;
	
	if (UART1_hasData())
	{
		data = UART1_read();
		UART2_write(data);
		UART2_transmit();
	}

}



UINT8 APP_comCallBack( UINT8 *rxPacket, UINT8* txCode, UINT8** txPacket)
{

	UINT8 i;

	UINT8 rxCode = rxPacket[0];
	UINT8 length = 0;

	switch( rxCode )
	{
		case PASS:
			GREEN_LAMP = 1;
			DelayMs(1000);
			GREEN_LAMP = 0;
			
			break;

		case FAIL:
			RED_LAMP = 1;
			DelayMs(1000);
			RED_LAMP = 0;
			
			break;

		default:

			break;

	}

	return length;

}