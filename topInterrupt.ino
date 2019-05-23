#include "buttons.h"
#include "sensor.h"

// moves the elevator to the top floor
// connected to pin 20
void topInterrupt(void){


  if(millis() - prevButtonPress > 200){

    desiredSpeed = 50+18;
    motorSpeed = desiredSpeed;
    updatePwm();
    
    prevButtonPress = millis();
  } 

  }
