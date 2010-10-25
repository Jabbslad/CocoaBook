//
//  DataCollectorAppDelegate.h
//  DataCollector
//
//  Created by Jamie Atkinson on 25/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface DataCollectorAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
