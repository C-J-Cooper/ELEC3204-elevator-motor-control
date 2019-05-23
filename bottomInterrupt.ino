#include "buttons.h"
#include "sensor.h"

// moves the elevator to the ground floor
// connected to pin 21
void bottomInterrupt(void){


  if(millis() - prevButtonPress > 200){
  
    isLevel = true;
    
    prevButtonPress = millis();
  } 

  
}
