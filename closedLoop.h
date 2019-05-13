#ifndef CLOSEDLOOP_H
#define CLOSEDLOOP_H

const int motorFeedbackPin = A0; // pin for analog input of motor speed
const int Kp = 1;               // closed loop proportional feedback gain.
int motorFeedbackValue = 0; // stores the actual measured speed of the motor
int targetSpeed = 0;        // stores the target speed the motor should be at
int speedError = 0;         // error between target and measured


// functions for closed loop operation
void closedLoop(void);

#endif
