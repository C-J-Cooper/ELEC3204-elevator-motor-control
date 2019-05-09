#ifndef LCD_H
#define LCD_H

#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 7, d5 = 6, d6 = 5, d7 = 4; // setting pins used
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setupLcd(void);              // setup LCD
int prevMode = 0;                 
int prevMotorSpeed = 50;          // variables to check if the speed has changed
void lcdPrintSpeedAndMode(void);  // prints motor speed and mode to the lcd

#endif
