#include "pwm.h"

//changes between open and closed loop on button press
// mode  = 0 is open loop, mode = 1 is closed loop
// connectde to pin 18
void modeInterrupt(void){
  
    if(millis() - prevButtonPress > 200){
    
		if(mode == 1){
			mode = 0;
		} else{
			if(motorSpeed < 50){
				motorSpeed = 50;
				updatePwm();
			}
			mode = 1;
		}
	
    prevButtonPress = millis();
  } 
  
  }