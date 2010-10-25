//
//  NSRunningApplication-DCDataItem.h
//  DataCollector
//
//  Created by Jamie Atkinson on 25/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "DCDataGroup.h"


@interface NSRunningApplication (DCDataItemMethods) <DCDataItem>
- (id) contents;
- (NSString*) typeName;
- (NSString*) title;

@end
