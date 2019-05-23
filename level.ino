#include "pwm.h"
#include "sensor.h"

void level(void){

	// if the user entered a level
	if(isLevel){
		mode = 0;	// move between floors in open loop control
    int dist;
      readFirstDistance();
			desiredSpeed = 30;
			updatePwm();
			
			dist = avgDistance();
			while(dist < BOTTOM_FLOOR){
			
				dist = avgDistance();
       Serial.print("Lower =");
       Serial.println(dist);
       
			}
			
			desiredSpeed = STOPPED;
			updatePwm();
		
		isLevel = false;
	}

}
