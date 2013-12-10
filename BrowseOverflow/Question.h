//
//  Question.h
//  BrowseOverflow
//
//  Created by MacUser on 07.12.13.
//  Copyright (c) 2013 MacUser. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Answer;

@interface Question : NSObject {
    NSMutableSet *answerSet;
}

@property (retain) NSDate *date;
@property NSInteger score;
@property (copy) NSString *title;
@property (readonly) NSArray *answers;

- (void)addAnswer:(Answer *)answer;

@end
