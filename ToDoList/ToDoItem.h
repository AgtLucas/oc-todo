//
//  ToDoItem.h
//  ToDoList
//
//  Created by Lucas on 1/24/15.
//  Copyright (c) 2015 AWLKA. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
