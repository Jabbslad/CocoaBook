/*
 *  SongTest.c
 *  
 *
 *  Created by Jamie Atkinson on 24/10/2010.
 *  Copyright 2010 Jabbslad. All rights reserved.
 *
 */


#include "Song.h"
#include <stdio.h>

main() {
	Song allSongs[3];

	allSongs[0] = createSong ( "Hey Jude", 210, 2004 );
	allSongs[1] = createSong ( "Jambi", 256, 1992 );
	allSongs[2] = createSong ( "Lightning Crashes", 223, 1997 );
}