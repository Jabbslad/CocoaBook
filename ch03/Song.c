/*
 *  Song.c
 *  
 *
 *  Created by Jamie Atkinson on 24/10/2010.
 *  Copyright 2010 Jabbslad. All rights reserved.
 *
 */

#include "Song.h"
#include <stdio.h>

Song createSong(char* title, int length, int year) {
	Song mySong;
	mySong.title = title;
	mySong.lengthInSeconds = length;
	mySong.yearRecorded = year;
	
	displaySong(mySong);
	return(mySong);
}
void displaySong(Song theSong) {
	printf("'%s' is %i seconds long", theSong.title, theSong.lengthInSeconds);
	printf("and was recorded in %i\n", theSong.yearRecorded);
}