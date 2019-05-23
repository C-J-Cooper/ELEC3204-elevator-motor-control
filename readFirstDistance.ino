#include "sensor.h"
#define SIZE 64

void readFirstDistance(void){

	int dists[SIZE];
	
	// declare some local variables
    int i=0 , j=0 , temp=0;
	
	
	while(i < SIZE){
		dists[i] = distance();
		i = i+1;
	}
	
	
	// sort the array
	i = 0;
    for(i=0 ; i<SIZE ; i++)
    {
        for(j=0 ; j<SIZE-1 ; j++)
        {
            if(dists[j]>dists[j+1])
            {
                temp        = dists[j];
                dists[j]    = dists[j+1];
                dists[j+1]  = temp;
            }
        }
    }

	// get the median as the first distance
	int median=0;
	median = dists[SIZE/2];

	prevDistance = median;

}
