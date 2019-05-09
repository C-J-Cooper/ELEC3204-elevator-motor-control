#include "pwm.h"

// stops the motor on button press
void stopInterrupt(){
  
    if(millis() - prevButtonPress > 200){
	
		motorSpeed = 50;
		updatePwm();
		prevButtonPress = millis();
  } 
  
  }

