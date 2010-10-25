//
//  DCDataGroup.h
//  DataCollector
//
//  Created by Jamie Atkinson on 25/10/2010.
//  Copyright 2010 Jabbslad. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol DCDataItem <NSObject>
- (id) contents;
- (NSString *) typeName;
- (NSString*) title;
@optional
- (NSString*) author;
@end


@interface DCDataGroup : NSObject

@property (copy) NSString* name;
@property (retain, readonly) NSMutableArray* items;
@property (assign, readonly) int itemCount;

+ (id) runningApplicationsDataGroup;
- (void) addItem:(id <DCDataItem>)newItem;

@end
