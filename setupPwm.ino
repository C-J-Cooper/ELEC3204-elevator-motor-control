int setupPwm(void){
		TCCR2A = TCCR2A | 0x30;   // complimentary PWM of pins 11 and 3. 11 is the positive pwm signal, 3 is the complimentary pwm signal
}
