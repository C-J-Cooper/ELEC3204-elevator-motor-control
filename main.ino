#include "buttons.h"
#include "lcd.h"

void setup() {

  setupButtons();
  setupLcd();
  Serial.begin(9600);

}

void loop() {

  // print the speed and mode tothe 
  lcdPrintSpeedAndMode();


}
