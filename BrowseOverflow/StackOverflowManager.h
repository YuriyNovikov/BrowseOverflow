//
//  StackOverflowManager.h
//  BrowseOverflow
//
//  Created by MacUser on 07.12.13.
//  Copyright (c) 2013 MacUser. All rights reserved.
//

#import <UIKit/UIKit.h>

@class StackOverflowCommunicator, Topic;
@protocol StackOverflowManagerDelegate;

extern NSString *StackOverflowManagerError;

enum {
    StackOverflowManagerErrorQuestionSearchCode
};

@interface StackOverflowManager : NSObject

@property (weak, nonatomic) id<StackOverflowManagerDelegate> delegate;
@property (strong) StackOverflowCommunicator *communicator;

- (void)fetchQuestionsOnTopic:(Topic *)topic;
- (void)searchingForQuestionsFailedWithError: (NSError *)error;

@end

@protocol StackOverflowManagerDelegate <NSObject>

- (void)fetchingQuestionsFailedWithError: (NSError *)error;

@end
