#include "buttons.h"
#include "lcd.h"
#include "pwm.h"

void closedLoop(void){

    int Kp = 1; // closed loop proportional feedback gain.

    int motorFeedbackValue = 0; // stores the actual measured speed of the motor
    int targetSpeed = 0;        // stores the target speed the motor should be at
    int speedError = 0;         // error between target and measured

    // read the current motor speed
    motorFeedbackValue = analogRead(motorFeedbackPin);

    // get the speed the motor should be at
    if (motorSpeed > 55){
        targetSpeed = 26*desiredSpeed - 1390;
    } else{
        targetSpeed = 0;
    }
    speedError = targetSpeed - motorFeedbackValue;

    motorSpeed = motorSpeed + Kp*speedError;

}

