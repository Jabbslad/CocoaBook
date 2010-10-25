//
//  DataCollectorAppDelegate.m
//  DataCollector
//
//  Created by Jamie Atkinson on 25/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import "DataCollectorAppDelegate.h"
#import "DCDataGroup.h"
#import "DCTextItem.h"

@implementation DataCollectorAppDelegate

@synthesize window;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
	NSString* q1;
    q1 = @"We are a way for the universe to know itself.";
    
    NSString* q2;
    q2 = @"Heard melodies are sweet, but those unheard are sweeter.";
    
    NSString* q3;
    q3 = @"I owe my success to the fact that I never had a clock in my workroom.";
	
	DCDataGroup* textDataGroup = [[DCDataGroup alloc] init];
	textDataGroup.name = @"Text Items";
	
	DCTextItem* textItem1 = [[DCTextItem alloc] init];
	textItem1.contents = q1;
	textItem1.title     = @"Carl Sagan On the Universe";
    textItem1.author    = @"Carl Sagan";
	
	[textDataGroup addItem:textItem1];
	[textItem1 release];
	
	// text item 2.
    DCTextItem* textItem2 = [[DCTextItem alloc] init];
    textItem2.contents  = q2;
    textItem2.title     = @"John Keats on What is Heard";
    textItem2.author    = @"John Keats";
	
    [textDataGroup addItem:textItem2];
    [textItem2 release];
    
    // text item 3.
    DCTextItem* textItem3 = [[DCTextItem alloc] init];
    textItem3.contents  = q3;
    textItem3.title     = @"Thomas Edison on Clocks";
    textItem3.author    = @"Thomas Edison";
    
    [textDataGroup addItem:textItem3];
    [textItem3 release];
    
    
    // create the applications data group.
    DCDataGroup* appGroup = [DCDataGroup runningApplicationsDataGroup];
    
    // display the result in the console.
    NSLog ( @"%@", textDataGroup  );
    NSLog ( @"%@", appGroup );
	
    // all done.
    [textDataGroup release];
}

@end
