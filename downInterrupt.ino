#include "pwm.h"

// decreases the speed on button press
// connected to pin 2
void downInterrupt(void){
  
    if(millis() - prevButtonPress > 200){
    
	// if in closed loop operation
	if(mode == 1){
		if(desiredSpeed - desiredSpeed >= 50){
			desiredSpeed = desiredSpeed - motorStep;
			updatePwm();
		}
	}else if(desiredSpeed - desiredSpeed >= 10){
		desiredSpeed = desiredSpeed - motorStep;
		updatePwm();
	}
	
    prevButtonPress = millis();
  } 
  
  }
