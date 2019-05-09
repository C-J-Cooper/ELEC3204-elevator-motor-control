#include "buttons.h"

int updatePwm(void){
		analogWrite(11, motorSpeed);     // positive pwm signal
		analogWrite(3, motorSpeed);      // complimentary PWM signal
}
