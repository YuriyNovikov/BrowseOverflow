//
//  FakeQuestionBuilder.h
//  BrowseOverflow
//
//  Created by MacUser on 09.12.13.
//  Copyright (c) 2013 MacUser. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QuestionBuilder.h"

@class Question;

@interface FakeQuestionBuilder : QuestionBuilder

@property (copy) NSString *JSON;

@end
