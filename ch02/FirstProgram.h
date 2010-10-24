/*
 *  FirstProgram.h
 *  
 *
 *  Created by Jamie Atkinson on 24/10/2010.
 *  Copyright 2010 Jabbslad. All rights reserved.
 *
 */

#include <stdio.h>

int sum(int x, int y);

main () {
	int total = sum(2, 10);
	printf("Total: %i \n", total);
}

int sum(int x, int y) {
	return x + y;
}