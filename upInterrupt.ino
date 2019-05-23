#include "pwm.h"

// increases the speed on button press
// connected to pin 3
void upInterrupt(void) {

  // check if the button press was due to noise or 'bounce'
  if(millis() - prevButtonPress > 200){

    if(mode == 1){
      if(desiredSpeed + motorStep <= 68){
              desiredSpeed = desiredSpeed + motorStep;
              motorSpeed = desiredSpeed;
              updatePwm();
        }
      }else{
    if(desiredSpeed + motorStep <= UPPER){
      desiredSpeed = desiredSpeed + motorStep;
	  updatePwm();
    }
    }

    prevButtonPress = millis();
  } 
} 
