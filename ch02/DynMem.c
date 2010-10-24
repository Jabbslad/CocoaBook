/*
 *  DynamicMemory.c
 *  
 *
 *  Created by Jamie Atkinson on 24/10/2010.
 *  Copyright 2010 Jabbslad. All rights reserved.
 *
 */


#include <stdlib.h>

main() {
	// declare an int pointer and create a block of memory
	// to hold 10 int values.
	
	int* numbers;
	numbers = malloc ( sizeof(int) * 10 );
	int* numbersStart = numbers;
	
	// set the first value, move the pointer forward, and
	// set the second value.
	
	*numbers = 100;
	numbers++;
	*numbers = 200;
	
	// this is incorrect. 'numbers' is currently pointing at the
	// second value instead of the first value at the beginning
	// of the memory block.
	
	free ( numbersStart );	
}

