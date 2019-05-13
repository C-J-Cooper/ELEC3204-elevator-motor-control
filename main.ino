#include "buttons.h"
#include "lcd.h"
#include "pwm.h"
#include "closedLoop.h"

void setup() {

  setupButtons();
  setupLcd();
  setupPwm();
  updatePwm();
  Serial.begin(9600);

}

void loop() {

  // print the speed and mode to the LCD 
  lcdPrintSpeedAndMode();

  // if operating in closed loop control
  //if(mode == 1){
    //closedLoop();
  //}


}