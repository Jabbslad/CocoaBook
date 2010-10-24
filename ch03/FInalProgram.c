/*
 *  FInalProgram.c
 *  
 *
 *  Created by Jamie Atkinson on 24/10/2010.
 *  Copyright 2010 Jabbslad. All rights reserved.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "MathFunctions.h"
#include "Song.h"

int yearCount = 12;
int* allYears;

void setupYears();
int randomSongYear();

main(int argc, char* argv[]) {
	int songCount = (argc - 1);
	
	if (songCount > 0) {
		printf("You entered %i song names \n", songCount);
	} else {
		printf("Didn't enter any song names \n");
		exit(1);
	}
	
	setupYears();
	
	sranddev();
	int randomNumber = rand() % 500;
	
	Song allSongs[songCount];
	int songLengths[songCount];

	int i;
	for (i = 0; i < songCount; i++) {
		int length = rand() % 500;
		int year = randomSongYear();
		
		char* songName = argv[i+1];
		
		allSongs[i] = createSong(songName, length, year);
		
		songLengths[i] = length;
	}
	
	int combinedLength = sum(songLengths, songCount);
	printf("The total of all songs is %i seconds\n", combinedLength);
	
	float songLengthsAsFloats[songCount];
	
	for(i = 0; i < songCount; i++) {
		songLengthsAsFloats[i] = songLengths[i];
	}
	
	float averageLength = average(songLengthsAsFloats, songCount);
	printf("The average length is: %.2f seconds\n", averageLength);
	
	free(allYears);
}

void setupYears() {
	allYears = malloc(sizeof(int) * yearCount);
	
	int oneYear = 2000;
	int i;
	for (i=0; i < yearCount; i++) {
		oneYear++;
		allYears[i] = oneYear;
	}
}

int randomSongYear() {
	int yearIndex = rand() % (yearCount - 1);
	
	int year = allYears[yearIndex];
	return year;
}
		

