/*
 *  LocalGlobalVariable.c
 *  
 *
 *  Created by Jamie Atkinson on 24/10/2010.
 *  Copyright 2010 Jabbslad. All rights reserved.
 *
 */


#include <stdio.h>

int globalCount = 0;

void addToGlobal();

main () {
	printf("global: %i \n", globalCount);
	addToGlobal();
	printf("global: %i \n", globalCount);
}

void addToGlobal() {
	int localCount = 100;
	globalCount = globalCount + localCount;
}