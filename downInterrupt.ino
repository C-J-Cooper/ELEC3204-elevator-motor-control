#include "pwm.h"

// decreases the speed on button press
// connected to pin 2
void downInterrupt(void){
  
    if(millis() - prevButtonPress > 200){
    
	// if in closed loop, cannot go negative
	if(mode == 1){
		if(motorSpeed - motorStep >= 50){
			motorSpeed = motorSpeed - motorStep;
			updatePwm();
		}
	}else if(motorSpeed - motorStep >= 10){
		motorSpeed = motorSpeed - motorStep;
		updatePwm();
	}
	
    prevButtonPress = millis();
  } 
  
  }
