/*
 *  DynamicStrings.c
 *  
 *
 *  Created by Jamie Atkinson on 24/10/2010.
 *  Copyright 2010 Jabbslad. All rights reserved.
 *
 */

#include <stdio.h>

char* myFunction();

main() {
	char* fullName;
	
	asprintf(&fullName, "Albert Einstein");
	printf("%s \n", fullName);
	free(fullName);
	
	int total = 81;
	float ratio = 1.618;
	char* result;
	asprintf(&result, "total: %i, ratio: %f", total, ratio);
	printf("%s \n", result);
	free(result);
	
	char* greeting = myFunction();
	printf("%s \n", greeting);
	free(greeting);
}

char* myFunction() {
	char* greeting;
	asprintf(&greeting, "Hello World!");
	return greeting;
}