#include "buttons.h"
#include "lcd.h"
#include "pwm.h"

void closedLoop(void){

    // read the current motor speed
    motorFeedbackValue = analogRead(motorFeedbackPin);

    // get the speed the motor should be at
    if (motorSpeed > 10){
        targetSpeed = 26*desiredSpeed - 1390;
    } else{
        targetSpeed = 0;
    }
    speedError = targetSpeed - motorFeedbackValue;

    if(motorSpeed + Kp*speedError <= 90){
        motorSpeed = motorSpeed + Kp*speedError;
        updatePWM();
    }else{
        Serial.print("Gain too High!");
    }

}
