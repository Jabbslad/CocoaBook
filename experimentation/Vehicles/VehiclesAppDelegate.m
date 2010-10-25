//
//  VehiclesAppDelegate.m
//  Vehicles
//
//  Created by Jamie Atkinson on 25/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import "VehiclesAppDelegate.h"
#import "Vehicle.h"

@implementation VehiclesAppDelegate

@synthesize window;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
	Vehicle* vehicle = [[Vehicle alloc] init];
	[vehicle setWheels:4];
	NSLog(@"Wheels: %i", vehicle.wheels);
	[vehicle release];
}

@end
