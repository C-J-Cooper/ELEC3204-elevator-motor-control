#include "sensor.h"

#define SIZE2 16

int avgDistance(void){
	
	
	long dist;

  int i;
  
  do{
  
    dist = 0;
    i = 0;
  
    do{
       dist = distance();
    }while(dist < prevDistance);
        
  }while( abs(dist-prevDistance) > 5 );

  dist = (int) dist;
  prevDistance = dist;
  
	return dist;
}
