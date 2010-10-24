/*
 *  Pointers.c
 *  
 *
 *  Created by Jamie Atkinson on 24/10/2010.
 *  Copyright 2010 Jabbslad. All rights reserved.
 *
 */

#include <stdio.h>

main() {
	int number = 4;
	int* numberPointer;
	
	*numberPointer = (int)&number;
	
	printf("number: %i \n", number);
	printf("numberPointer: %i \n\n", *numberPointer);
	
	number = 16;
	
	printf("number: %i \n", number);
	printf("numberPointer: %i \n", *numberPointer);
}