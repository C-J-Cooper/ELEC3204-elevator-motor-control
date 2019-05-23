#ifndef SENSOR_H
#define SENSOR_H

const int trigPin = 53; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 52; // Echo Pin of Ultrasonic Sensor

// variables to track which level the user input
bool isLevel = false;
bool isTop = false;

const int TOP_FLOOR = 8; // Top floor is 10 cm from the sensor
const int BOTTOM_FLOOR = 47; // Bottom floor is 45 cm from the sensor

// functions used for ultrasonic sensor and floor level control
int prevDistance = 0;
int distance(void);
void readFirstDistance(void);
int getDistance(void);
void setupSensor(void);
void level(void);

#endif
