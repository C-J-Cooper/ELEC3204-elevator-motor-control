#ifndef CLOSEDLOOP_H
#define CLOSEDLOOP_H

// pins used in closed loop feedback
const int motorFeedbackPin = A0;

// variable for debouncing the buttons
unsigned long prevButtonPress = 0;

// functions for closed loop operation
void closedLoop(void);
void read(void);

#endif
