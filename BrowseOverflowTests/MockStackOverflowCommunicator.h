//
//  MockStackOverflowCommunicator.h
//  BrowseOverflow
//
//  Created by MacUser on 07.12.13.
//  Copyright (c) 2013 MacUser. All rights reserved.
//

#import "StackOverflowCommunicator.h"

@interface MockStackOverflowCommunicator : StackOverflowCommunicator

- (BOOL)wasAskedToFetchQuestions;

@end
