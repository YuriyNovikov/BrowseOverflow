//
//  MockStackOverflowManagerDelegate.h
//  BrowseOverflow
//
//  Created by MacUser on 09.12.13.
//  Copyright (c) 2013 MacUser. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>
#import "StackOverflowManager.h"

@interface MockStackOverflowManagerDelegate : NSObject <StackOverflowManagerDelegate>

@property (strong) NSError *fetchError;

@end
