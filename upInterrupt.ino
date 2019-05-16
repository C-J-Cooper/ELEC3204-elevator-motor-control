#include "pwm.h"

// increases the speed on button press
// connected to pin 3
void upInterrupt(void) {

  // check if the button press was due to noise or 'bounce'
  if(millis() - prevButtonPress > 200){
    
    if(desiredSpeed + motorStep <= 90){
      desiredSpeed = desiredSpeed + motorStep;
	  updatePwm();
    }

    prevButtonPress = millis();
  } 
} 