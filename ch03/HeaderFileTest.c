/*
 *  HeaderFileTest.c
 *  
 *
 *  Created by Jamie Atkinson on 24/10/2010.
 *  Copyright 2010 Jabbslad. All rights reserved.
 *
 */

#include <stdio.h>
#include "MathFunctions.h"

main () {
	int wholeNumbers[5] = {2,3,5,7,9};
	int theSum = sum(wholeNumbers, 5);
	printf("The sum is: %i ", theSum);
	
	float fractionalNumbers[3] = {16.9, 7.86, 3.4};
	float theAverage = average(fractionalNumbers, 3);
	printf("and the average is: %f \n", theAverage);
}