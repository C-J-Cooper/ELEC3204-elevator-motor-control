#ifndef BUTTONS_H
#define BUTTONS_H

// varibles for the speed and mode of operation
int mode = 0;   		// 0 = open loop, 1 = closed loop,
int motorSpeed = 127;    // PWM driving the motor. 50 =  no rotation
int desiredSpeed = 127;  // desired speed input by the user
int motorStep = 6;		// increment when up/down speed button is pressed

// variable for debouncing the buttons
unsigned long prevButtonPress = 0;

// interrupts for user input buttons
void setupButtons(void);
void upInterrupt(void);
void downInterrupt(void);
void modeInterrupt(void);
void stopInterrupt(void);

#endif