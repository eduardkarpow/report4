
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	i = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	// click on button
	if(but1 == 1){
		LEDS[0] = 1;
	} else {
		LEDS[0] = 0;
	}
	if(but2 == 1){
		LEDS[1] = 1;
	} else {
		LEDS[1] = 0;
	}
	if(but3 == 1){
		LEDS[2] = 1;
	} else {
		LEDS[2] = 0;
	}
	if(but4 == 1){
		LEDS[3] = 1;
	} else {
		LEDS[3] = 0;
	}
		//blinking
		if(BlinkingButton == 1){
			if(i%5 == 0){
				LEDS[0] = 1;
			}
			if(i%5 == 1){
				LEDS[1] = 1;
			}
			if(i%5 == 2){
				LEDS[2] = 1;
			}
			if(i%5 == 3){
				LEDS[3] = 1;
			}
			if(i%5==4){
				for(j = 0; j < 4; j++){
					LEDS[j] = 0;
				}	
			}
			i++;
		}
	}

void _EXIT ProgramExit(void)
{

}

