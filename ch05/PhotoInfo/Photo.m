//
//  Photo.m
//  PhotoInfo
//
//  Created by Jamie Atkinson on 24/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import "Photo.h"

@interface Photo (Private)
+ (NSString *) defaultCaption;
- (void) logPhotographer;
- (id) currentObject;
- (void) checkObjectType;
@end


@implementation Photo

@synthesize caption;
@synthesize photographer;

- (id) init {
	
    if ( self = [super init] ) {
		
        [self setCaption:[[self class] defaultCaption]];
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

+ (NSString *) defaultCaption {
	return @"Untitled Photo";
}

- (void) logPhotographer {
	NSLog(@"Photographer: %@", photographer);
}

- (id) currentObject {
	return [Photo photo];
}

- (void) checkObjectType {
	id object = [self currentObject];
	BOOL isPhoto = [object isMemberOfClass:[Photo class]];
	
	if (isPhoto) {
		NSLog(@"object is an instance of photo");
	}
}

@end
