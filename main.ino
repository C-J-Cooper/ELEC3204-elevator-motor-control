#include "buttons.h"
#include "lcd.h"
#include "pwm.h"
#include "closedLoop.h"
#include "sensor.h"

void setup() {

  setupButtons();
  setupLcd();
  setupPwm();
  setupSensor();
  updatePwm();
  Serial.begin(9600);

}

void loop() {

  // print the speed and mode to the LCD 
  lcdPrintSpeedAndMode();


  // move to the ground floor if the selects ground floor
  level();

  // if operating in closed loop control
  if(mode == 1){
    closedLoop();
  }


}
