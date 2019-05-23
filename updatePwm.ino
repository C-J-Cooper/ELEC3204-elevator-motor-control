#include "buttons.h"

int updatePwm(void){

  int temp = 0;
  if(mode == 0){
    motorSpeed = desiredSpeed;
  }
  temp = (int)motorSpeed;
  temp = constrain(temp,LOWER,UPPER);

  OCR1A = temp; //duty of PWM for pin9 is from output compare register A 
  TCCR1A |= _BV(COM1A1) | _BV(COM1A0); //set output to low level

  OCR1B = temp;//duty of PWM for pin10 is from output compare register B
  TCCR1A |= _BV(COM1B1); //set output to high level

  TCCR1B |= _BV(WGM13); //
  TCCR1A |= _BV(WGM11); //Set ICR1 phas correct mode

}
