#include "timer.h"


static UINT32 TimerUpdate_count = 0;
UINT32 AppTimestamp = 0;

typedef struct _TMR
{
	unsigned int reload;
	void (*func)(void);
}TMR;

TMR tmr[2] = { 0 , 0 };


enum 
{
	TIMER_TIMEOUT 	= 10,
	APP_TIMEOUT 	= 1000,
	TIMEOUT_COUNT 	= (APP_TIMEOUT/TIMER_TIMEOUT)
};



/*
*------------------------------------------------------------------------------
* void TMR0_ISR(void)
*
* Summary	: Timer0 ISR for periodi tick for schedular base
*
* Input		: None
*
* Output	: None
*
*------------------------------------------------------------------------------
*/
#pragma code
#pragma interrupt TMR0_ISR
void TMR0_ISR(void)
{
  	/*
   	* Clears the TMR0 interrupt flag to stop the program from processing the
   	* same interrupt multiple times.
   	*/
  	INTCONbits.TMR0IF = 0;
	// Reload value for 5ms overflow
	WriteTimer0(tmr[0].reload);
	(*(tmr[0].func))();

	TimerUpdate_count++;
	if(TimerUpdate_count == TIMEOUT_COUNT)
	{
		AppTimestamp++;
		TimerUpdate_count = 0;
	}
}
#pragma code

/*
*------------------------------------------------------------------------------
* void TMR1_ISR(void)
*
* Summary	: Timer1 ISR for periodi tick for multiplexed display refresh
*
* Input		: None
*
* Output	: None
*
*------------------------------------------------------------------------------
*/
#pragma code
#pragma interrupt TMR1_ISR
void TMR1_ISR(void)
{
  	/*
   	* Clears the TMR0 interrupt flag to stop the program from processing the
   	* same interrupt multiple times.
   	*/
  	PIR1bits.TMR1IF = 0;
	// Reload value for 1ms overflow
	WriteTimer1(tmr[1].reload);
	(*(tmr[1].func))();
}
#pragma code

/*
*------------------------------------------------------------------------------
* void TMR0_init(void)

* Summary	: Initialize timer0 for schedular base
*
* Input		: None
*
* Output	: None
*
*------------------------------------------------------------------------------
*/
void TMR0_init(UINT16 reload , void (*func)(void))
{
	// Enable the TMR0 interrupt,16bit counter
	// with internal clock,No prescalar.
   	OpenTimer0(TIMER_INT_ON & T0_SOURCE_INT & T0_16BIT & T0_PS_1_16);
	// Reload value for 5ms overflow
	WriteTimer0(reload);
	
	tmr[0].reload = reload;
	tmr[0].func = func;
}

UINT32 GetAppTime(void)
{	
	UINT32 temp;

	DISABLE_TMR0_INTERRUPT();
	temp  = AppTimestamp;
	ENABLE_TMR0_INTERRUPT();
	return temp;
}

void ResetAppTime(void)
{
	ENTER_CRITICAL_SECTION();
	AppTimestamp = 0;
	EXIT_CRITICAL_SECTION();
}

/*
*------------------------------------------------------------------------------
* void TMR1_init(void)

* Summary	: Initialize timer1 for display refresh
*
* Input		: None
*
* Output	: None
*
*------------------------------------------------------------------------------
*/
void TMR1_init(unsigned int reload , void (*func)())
{
	// Enagle TMR1 interrrupt,16 bit counter, with internal clock, No prescalar
	OpenTimer1(TIMER_INT_ON & T1_16BIT_RW & T1_SOURCE_INT & T1_PS_1_1 & T1_OSC1EN_OFF & T1_SYNC_EXT_OFF );
	// Reload value for 1ms overflow
	WriteTimer1(reload);
	// Make timer1 interrupt high priority
  	IPR1bits.TMR1IP = 1;

	tmr[1].reload = reload;
	tmr[1].func = func;

}
