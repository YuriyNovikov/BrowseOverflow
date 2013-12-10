//
//  MockStackOverflowManagerDelegate.m
//  BrowseOverflow
//
//  Created by MacUser on 09.12.13.
//  Copyright (c) 2013 MacUser. All rights reserved.
//

#import "MockStackOverflowManagerDelegate.h"

@implementation MockStackOverflowManagerDelegate

@synthesize fetchError;

- (void)fetchingQuestionsFailedWithError:(NSError *)error {
    self.fetchError = error;
}

@end
