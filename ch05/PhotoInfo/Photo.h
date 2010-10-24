//
//  Photo.h
//  PhotoInfo
//
//  Created by Jamie Atkinson on 24/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface Photo : NSObject {
	NSString* caption;
	NSString* photographer;
}

+ (Photo*) photo;

- (NSString*) caption;
- (NSString*) photographer;

- (void) setCaption: (NSString*) input;
- (void) setPhotographer: (NSString*) input;

@end
