/*
 *  AddressBook.c
 *  
 *
 *  Created by Jamie Atkinson on 24/10/2010.
 *  Copyright 2010 Jabbslad. All rights reserved.
 *
 */

#include <stdio.h>

typedef struct {
	char* name;
	int age;
} Person;

main (int argc, char* argv[]) {
	int nameCount = (argc -1);
	
	if(nameCount > 0) {
		printf("You entered %i names \n", nameCount);
	} else {
		printf("You didn't enter any names\n");
	}
	
	char* formattedNames[nameCount];
	int i;
	for(i=0; i<nameCount; i++) {
		char* currentName = argv[i+1];
		asprintf(&formattedNames[i], "Name %i: %s", i, currentName);
	}
	
	for(i=0; i<nameCount; i++) {
		printf("%s \n", formattedNames[i]);
	}
	
	for(i=0; i< nameCount; i++) {
		free(formattedNames[i]);
	}
	
	Person person;
	person.name = "Jamie";
	person.age = 29;
	
	printf("Name: %s \n", person.name);
	printf("Age: %i \n", person.age);
}