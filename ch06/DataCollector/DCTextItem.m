//
//  DCTextItem.m
//  DataCollector
//
//  Created by Jamie Atkinson on 25/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import "DCTextItem.h"

@interface DCTextItem () 
@property (copy, readwrite) NSString* typeName;
+ (NSString*) defaultTitle;
+ (NSString*) defaultAuthor;
@end


@implementation DCTextItem

@synthesize contents;
@synthesize title;
@synthesize typeName;
@synthesize author;

- (id) init {
	if (self = [super init]) {
		self.contents = nil;
		self.title = [[self class] defaultTitle];
		self.typeName = @"Text";
		self.author = [[self class] defaultAuthor];
	}
	return self;
}

- (void) dealloc {
	self.contents = nil;
	self.title = nil;
	self.typeName = nil;
	self.author = nil;
	[super dealloc];
}

- (NSString*) description {
	return [NSString stringWithFormat:
			@"%@: %@", self.title, self.contents];
}

+ (NSString*) defaultTitle {
	return @"Untitled";
}

+ (NSString*) defaultAuthor {
	return @"Unattributed";
}

@end
