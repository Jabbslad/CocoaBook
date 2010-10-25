//
//  NSRunningApplication-DCDataItem.m
//  DataCollector
//
//  Created by Jamie Atkinson on 25/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import "NSRunningApplication-DCDataItem.h"


@implementation NSRunningApplication (DCDataItemMethods)

- (id) contents {
	return self.bundleURL;
}

- (NSString*) typeName {
	return @"Application";
}

- (NSString*) title {
	return self.localizedName;
}

- (NSString*) description {
	return [NSString stringWithFormat:
			@"%@: %@", self.title, self.contents];
}

@end
