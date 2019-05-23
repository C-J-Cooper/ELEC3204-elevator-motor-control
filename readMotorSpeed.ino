#include "closedLoop.h"
#define SIZE 200

int readMotorSpeed(void){

	
	long motorSpeed = 0;
	
	int i = 0;
	
	while(i<SIZE){
		motorSpeed = motorSpeed + analogRead(motorFeedbackPin);
		
		++i;
	}

	motorSpeed = motorSpeed / SIZE;

  motorSpeed = (int) motorSpeed;
  
	return motorSpeed;

}
