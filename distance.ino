#include "sensor.h"

int distance(void){

	digitalWrite(trigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
	long duration = pulseIn(echoPin, HIGH);
	int distance = duration / 29 / 2;
	return distance;

}