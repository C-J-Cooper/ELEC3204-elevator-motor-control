#include "buttons.h"

void lcdPrintSpeedAndMode(void){

  //update the LCD if the speed or mode has changed
  if(desiredSpeed != prevDesiredSpeed || prevMode != mode){
    lcd.clear();
  	lcd.setCursor(0, 0);
  	lcd.print("Speed=");
  	lcd.print(desiredSpeed - STOPPED);
  	
  	lcd.setCursor(0, 1);
  	if(mode == 0){
  		lcd.print("Open loop");
  	} else{
  		lcd.print("Closed loop");
  	}

    prevMode = mode;
    prevDesiredSpeed = desiredSpeed;
   
  }
  
}
