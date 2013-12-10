//
//  FakeQuestionBuilder.m
//  BrowseOverflow
//
//  Created by MacUser on 09.12.13.
//  Copyright (c) 2013 MacUser. All rights reserved.
//

#import "FakeQuestionBuilder.h"
#import "Question.h"

@implementation FakeQuestionBuilder

@synthesize JSON;

- (NSArray *)questionsFromJSON:(NSString *)objectNotation error:(NSError *__autoreleasing *)error {
    self.JSON = objectNotation;
    return nil;
}

@end
