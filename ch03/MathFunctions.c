/*
 *  MathFunctions.c
 *  
 *
 *  Created by Jamie Atkinson on 24/10/2010.
 *  Copyright 2010 Jabbslad. All rights reserved.
 *
 */

#include "MathFunctions.h"

int sum(int values[], int count) {
	int i = 0;
	int total = 0;
	
	for(i=0; i<count; i++) {
		total+= values[i];
	}
	return total;
}

float average(float values[], int count) {
	int i = 0;
	float total = 0.0;

	for(i=0; i<count; i++) {
		total += values[i];
	}

	float average = (total/count);
	return average;
}