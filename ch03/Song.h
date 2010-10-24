/*
 *  Song.h
 *  
 *
 *  Created by Jamie Atkinson on 24/10/2010.
 *  Copyright 2010 Jabbslad. All rights reserved.
 *
 */

typedef struct {
	char* title;
	int lengthInSeconds;
	int yearRecorded;
} Song;

Song createSong(char* title, int length, int year);
void displaySong(Song theSong);