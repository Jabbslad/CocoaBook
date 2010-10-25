//
//  DCDataGroup.m
//  DataCollector
//
//  Created by Jamie Atkinson on 25/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import "DCDataGroup.h"
#import "NSRunningApplication-DCDataItem.h"

@interface DCDataGroup ()

@property (retain, readwrite) NSMutableArray* items;

+ (NSString*) defaultName;
@end


@implementation DCDataGroup

@synthesize name;
@synthesize items;

- (id) init {
	if (self = [super init]) {
		self.name = [[self class] defaultName];
		self.items = [NSMutableArray array];
	}
	return self;
}

- (void) dealloc {
	self.name = nil;
	self.items = nil;
	[super dealloc];
}

- (int) itemCount {
	return self.items.count;
}

+ (id) runningApplicationsDataGroup {
	DCDataGroup* newDataGroup = [[DCDataGroup alloc] init];
	newDataGroup.name = @"Application Items";
	
	NSWorkspace* ws = [NSWorkspace sharedWorkspace];
	NSArray* apps = [ws runningApplications];
	
	for (int i = 0; i < apps.count; i ++) {
		NSRunningApplication* app = [apps objectAtIndex:i];
		[newDataGroup addItem:app];
	}
	return [newDataGroup autorelease];
}

- (void) addItem:(id <DCDataItem>)newItem {
	[self.items addObject:newItem];
}

+ (NSString*) defaultName {
	return @"Untitled Group";
}

- (NSString*) description {
	return [NSString stringWithFormat:
			@"Data Group: %@ %@", self.name, self.items];
}

@end
