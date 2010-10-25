//
//  DCTextItem.h
//  DataCollector
//
//  Created by Jamie Atkinson on 25/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "DCDataGroup.h"


@interface DCTextItem : NSObject <DCDataItem>

@property (copy) NSString* contents;
@property (copy, readonly) NSString* typeName;
@property (copy) NSString* title;
@property (copy) NSString* author;

@end
