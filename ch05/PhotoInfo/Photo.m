//
//  Photo.m
//  PhotoInfo
//
//  Created by Jamie Atkinson on 24/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import "Photo.h"


@implementation Photo

- (id) init {
	
    if ( self = [super init] ) {
		
        [self setCaption:@"Default Caption"];
        [self setPhotographer:@"Default Photographer"];
    }
    
    return self;
}

+ (Photo*) photo {
	
    Photo* newPhoto = [[Photo alloc] init];
    return [newPhoto autorelease];
}

- (NSString*) caption {
	return caption;
}

- (NSString*) photographer {
	return photographer;
}

- (void) setCaption: (NSString*)input {
	
	[caption autorelease];
	caption = [input retain];
}

- (void) setPhotographer: (NSString*)input {
	
	[photographer autorelease];
	photographer = [input retain];
}

- (id) copyWithZone:(NSZone *)zone {
	Photo* newPhoto = [[Photo allocWithZone:zone] init];
	newPhoto.caption = self.caption;
	newPhoto.photographer = self.photographer;
	return newPhoto;
}

- (void) dealloc {
    
    [self setCaption:nil];
    [self setPhotographer:nil];
    
    [super dealloc];
}

@end
