//
//  QuestionBuilder.h
//  BrowseOverflow
//
//  Created by MacUser on 09.12.13.
//  Copyright (c) 2013 MacUser. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QuestionBuilder : NSObject

- (NSArray *)questionsFromJSON:(NSString *)objectNotation error:(NSError **)error;

@end
