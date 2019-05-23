#include "buttons.h"
#include "lcd.h"
#include "pwm.h"

void closedLoop(void){

    // read the current motor speed
    motorFeedbackValue = readMotorSpeed();

    Serial.print("Motor Speed = ");
    Serial.println(motorFeedbackValue);

    // get the speed the motor should be at
    if (motorSpeed > STOPPED+7){  // since motor soes not spin for 50, 53 or 56
        targetSpeed = 31*desiredSpeed - 1802;
    } else{
        targetSpeed = 0;
    }
    speedError = targetSpeed - motorFeedbackValue;
    //Serial.print("Speed Error = ");
    //Serial.println(speedError);

    int nextSpeed;
    nextSpeed = (int) motorSpeed + Kp*speedError;

    if(nextSpeed <= UPPER && nextSpeed >= STOPPED){
        motorSpeed = nextSpeed;
        updatePwm();
    }else{
        if(nextSpeed >= UPPER){
            Serial.println("Too High! Tried to Reach a Speed above UPPER PWM");
        }else{
            Serial.println("Too Low! Tried to reach a speed below STOPPED PWM in closed loop");
        }
    }

}
