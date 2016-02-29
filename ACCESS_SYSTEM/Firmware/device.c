
/*
*------------------------------------------------------------------------------
* device.c
*
* Board specipic drivers module(BSP)
*
* (C)2009 Sam's Logic.
*
* The copyright notice above does not evidence any
* actual or intended publication of such source code.
*
*------------------------------------------------------------------------------
*/

/*
*------------------------------------------------------------------------------
* File				: device.c
* Created by		: Sam
* Last changed by	: Sam
* Last changed		: 14/07/2009
*------------------------------------------------------------------------------
*
* Revision 0.0 14/07/2009 Sam
* Initial revision
*
*------------------------------------------------------------------------------
*/

/*
*------------------------------------------------------------------------------
* Include Files
*------------------------------------------------------------------------------
*/

#include "device.h"
#include "typedefs.h"

/*
*------------------------------------------------------------------------------
* Private Defines
*------------------------------------------------------------------------------
*/

/*
*------------------------------------------------------------------------------
* Private Macros
*------------------------------------------------------------------------------
*/


/*
*------------------------------------------------------------------------------
* Public Variables
*------------------------------------------------------------------------------
*/

/*
*------------------------------------------------------------------------------
* Private Variables (static)
*------------------------------------------------------------------------------
*/


/*
*------------------------------------------------------------------------------
* Public Constants
*------------------------------------------------------------------------------
*/

/*
*------------------------------------------------------------------------------
* Private Constants (static)
*------------------------------------------------------------------------------
*/

/*
*------------------------------------------------------------------------------
* Private Function Prototypes (static)
*------------------------------------------------------------------------------
*/

/*
*------------------------------------------------------------------------------
* Public Functions
*------------------------------------------------------------------------------
*/

/*
*------------------------------------------------------------------------------
* void InitializeBoard(void)

* Summary	: This function configures all i/o pin directions
*
* Input		: None
*
* Output	: None
*
*------------------------------------------------------------------------------
*/
void InitializeBoard(void)
{
	// set all anolog channels as Digital I/O
	ADCON1 = 0x0F;	


MODEL_PORT_0_DIRECTION	=PORT_IN;

MODEL_PORT_1_DIRECTION	=PORT_IN;

MODEL_PORT_2_DIRECTION	=PORT_IN;

MODEL_LAMP_0_DIRECTION	=PORT_OUT;
MODEL_LAMP_1_DIRECTION	=PORT_OUT;
MODEL_LAMP_2_DIRECTION	=PORT_OUT;
MODEL_LAMP_0 = 0;
MODEL_LAMP_1 = 0;
MODEL_LAMP_2 = 0;



SENSOR_PORT_0_DIRECTION	=PORT_IN;

SENSOR_PORT_1_DIRECTION	=PORT_IN;

SENSOR_PORT_2_DIRECTION	=PORT_IN;

SENSOR_PORT_3_DIRECTION	=PORT_IN;

SENSOR_PORT_4_DIRECTION	=PORT_IN;

SENSOR_PORT_5_DIRECTION	=PORT_IN;

SENSOR_PORT_6_DIRECTION	=PORT_IN;


SENSOR_PORT_7_DIRECTION	=PORT_IN;

SENSOR_PORT_8_DIRECTION	=PORT_IN;


SENSOR_PORT_9_DIRECTION	=PORT_IN;

SENSOR_PORT_10_DIRECTION	=PORT_IN;

SENSOR_PORT_11_DIRECTION	=PORT_IN;
SENSOR_PORT_12_DIRECTION	=PORT_IN;

SENSOR_PORT_13_DIRECTION	=PORT_IN;
SENSOR_PORT_14_DIRECTION	=PORT_IN;

SENSOR_PORT_15_DIRECTION	=PORT_IN;


SENSOR_PORT_16_DIRECTION	=PORT_IN;

SENSOR_PORT_17_DIRECTION	=PORT_IN;

SENSOR_PORT_18_DIRECTION	=PORT_IN;

SENSOR_PORT_19_DIRECTION	=PORT_IN;

SENSOR_PORT_20_DIRECTION	=PORT_IN;

SENSOR_PORT_21_DIRECTION	=PORT_IN;


SENSOR_PORT_22_DIRECTION	=PORT_IN;

SENSOR_PORT_23_DIRECTION	=PORT_IN;


SENSOR_PORT_24_DIRECTION	=PORT_IN;

SENSOR_PORT_25_DIRECTION	=PORT_IN;

SENSOR_PORT_26_DIRECTION	=PORT_IN;


LED_PORT_0_DIRECTION	=PORT_OUT;
LED_PORT_1_DIRECTION	=PORT_OUT;

LED_PORT_2_DIRECTION	=PORT_OUT;

LED_PORT_3_DIRECTION	=PORT_OUT;

LED_PORT_4_DIRECTION	=PORT_OUT;

LED_PORT_5_DIRECTION	=PORT_OUT;

LED_PORT_6_DIRECTION	=PORT_OUT;


LED_PORT_7_DIRECTION	=PORT_OUT;

LED_PORT_8_DIRECTION	=PORT_OUT;


LED_PORT_9_DIRECTION	=PORT_OUT;

LED_PORT_10_DIRECTION	=PORT_OUT;

LED_PORT_11_DIRECTION	=PORT_OUT;
LED_PORT_12_DIRECTION	=PORT_OUT;

LED_PORT_13_DIRECTION	=PORT_OUT;
LED_PORT_14_DIRECTION	=PORT_OUT;

LED_PORT_15_DIRECTION	=PORT_OUT;


LED_PORT_16_DIRECTION	=PORT_OUT;

LED_PORT_17_DIRECTION	=PORT_OUT;

LED_PORT_18_DIRECTION	=PORT_OUT;

LED_PORT_19_DIRECTION	=PORT_OUT;

LED_PORT_20_DIRECTION	=PORT_OUT;

LED_PORT_21_DIRECTION	=PORT_OUT;


LED_PORT_22_DIRECTION	=PORT_OUT;

LED_PORT_23_DIRECTION	=PORT_OUT;


LED_PORT_24_DIRECTION	=PORT_OUT;

LED_PORT_25_DIRECTION	=PORT_OUT;

LED_PORT_26_DIRECTION	=PORT_OUT;

LED_PORT_0 = 0;
LED_PORT_1 = 0;
LED_PORT_2 = 0;
LED_PORT_3 = 0;
LED_PORT_4 = 0;
LED_PORT_5 = 0;
LED_PORT_6 = 0;
LED_PORT_7 = 0;
LED_PORT_8 = 0;
LED_PORT_9 = 0;
LED_PORT_10 = 0;
LED_PORT_11 = 0;
LED_PORT_12 = 0;
LED_PORT_13 = 0;
LED_PORT_14 = 0;
LED_PORT_15 = 0;
LED_PORT_16 = 0;
LED_PORT_17 = 0;
LED_PORT_18 = 0;
LED_PORT_19 = 0;
LED_PORT_20 = 0;
LED_PORT_21 = 0;
LED_PORT_22 = 0;
LED_PORT_23 = 0;
LED_PORT_24 = 0;
LED_PORT_25 = 0;
LED_PORT_26 = 0;


PROCESS_PORT_0_DIRECTION = PORT_IN;





PROCESS_INDICATOR_0_DIRECTION = PORT_OUT;





}







/*
*  End of device.c
*/
