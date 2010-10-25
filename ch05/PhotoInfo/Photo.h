//
//  Photo.h
//  PhotoInfo
//
//  Created by Jamie Atkinson on 24/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface Photo : NSObject

+ (Photo*) photo;

@property (retain) NSString* caption;
@property (retain) NSString* photographer;

@end
