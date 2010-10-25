//
//  PhotoInfoAppDelegate.m
//  PhotoInfo
//
//  Created by Jamie Atkinson on 24/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import "PhotoInfoAppDelegate.h"
#import "Photo.h"

@implementation PhotoInfoAppDelegate

@synthesize window;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
	Photo* photo1 = [[Photo alloc] init];
	
	NSLog(@"photo1 caption: %@", photo1.caption);
	NSLog(@"photo1 photographer: %@", photo1.photographer);
	
	photo1.caption = @"Overlooking the Golden Gate Bridge";
	photo1.photographer = @"Jamie Atkinson";
	
	NSLog(@"photo1 caption: %@", photo1.caption);
	NSLog(@"photo1 photographer: %@", photo1.photographer);
	
	Photo* photo2 = [photo1 copy];
	[photo1 release];
	
	NSLog(@"photo2 caption: %@", photo2.caption);
	NSLog(@"photo2 photographer: %@", photo2.photographer);
	
	photo2.caption = @"Moffett Field";
	photo2.photographer = @"Helen Atkinson";
	
	NSLog(@"photo2 caption: %@", photo2.caption);
	NSLog(@"photo2 photographer: %@", photo2.photographer);
	
	SEL checkObjectTypeSelector = @selector(checkObjectType);
	if ([photo2 respondsToSelector:checkObjectTypeSelector]) {
		NSLog(@"Performing selector: %@", NSStringFromSelector(checkObjectTypeSelector));
		[photo2 performSelector:checkObjectTypeSelector];
	}
	
	[photo2 release];
	
}

@end
