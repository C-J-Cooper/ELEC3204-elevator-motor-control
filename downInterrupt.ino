#include "pwm.h"

// decreases the speed on button press
// connected to pin 2
void downInterrupt(void){
  
    if(millis() - prevButtonPress > 200){
    
	// if in closed loop operation
	if(mode == 1){
		if(desiredSpeed - motorStep >= STOPPED){
			desiredSpeed = desiredSpeed - motorStep;
      motorSpeed = desiredSpeed;
			updatePwm();
		}
	}else if(desiredSpeed - motorStep >= LOWER){
		desiredSpeed = desiredSpeed - motorStep;
		updatePwm();
	}
	
    prevButtonPress = millis();
  } 
  
  }
