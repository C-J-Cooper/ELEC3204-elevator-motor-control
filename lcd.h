#ifndef LCD_H
#define LCD_H

#include <LiquidCrystal.h>

const int rs = 9, en = 8, d4 = 7, d5 = 6, d6 = 5, d7 = 4; // setting pins used
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setupLcd(void);              // setup LCD
int prevMode = 0;                 // to check if the mode has changed
int prevDesiredSpeed = STOPPED;   // variable to check if the speed has changed
void lcdPrintSpeedAndMode(void);  // prints motor speed and mode to the lcd

#endif
