#include "buttons.h"

int updatePwm(void){

  if(mode == 0){
       motorSpeed = desiredSpeed;
    }
	analogWrite(11, motorSpeed);     // positive pwm signal
  analogWrite(3, motorSpeed);      // complimentary PWM signal
	
}