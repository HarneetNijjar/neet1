/*
===============================================================================
 Name        : proj_toggle.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

#include <cr_section_macros.h>
void my_delay_func(const uint32_t delay_val);

// TODO: insert other include files here

// TODO: insert other definitions and declarations here

int main(void) {

#if defined (__USE_LPCOPEN)
    // Read clock settings and update SystemCoreClock variable
    SystemCoreClockUpdate();
#if !defined(NO_BOARD_LIB)
    // Set up and initialize all required blocks and
    // functions related to the board hardware
    Board_Init();
    // Set the LED to the state of "On"
    bool on_l=false;
    bool off_l=true;
    Board_LED_Set(Red,off_l);
    Board_LED_Set(Green,off_l);
    Board_LED_Set(Blue,off_l);
    //Turn on/off red led
    Board_LED_Set(Red,on_l);
    //Turn on/off green led
     Board_LED_Set(Green,on_l);
     //Turn on/off blue led
      Board_LED_Set(Blue,on_l);




    //Board_LED_Set(0, true);
#endif
#endif

    // TODO: insert code here

    // Force the counter to be placed into memory

    //volatile static uint32_t j = 0 ;
    // Enter an infinite loop, just incrementing a counter
    while(1) {
    	Board_LED_Toggle(Red,off_l);
    	 my_delay_func(2e6);
    	    Board_LED_Toggle(Green,on_l);
    	    my_delay_func(2e6);
    	    Board_LED_Toggle(Blue,off_l);
    	my_delay_func(2e6);

    return 1 ;

}
    void my_delay_func(const uint32_t delay_val){
	  // Force the counter to be placed into memory

	    volatile static uint32_t j = 0 ;
	    //delay loop
	    for(j=0;j<delay_val;j++);
}
}
