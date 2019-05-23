#include "sensor.h"

void setupSensor(void){

   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);

   readFirstDistance();
}
