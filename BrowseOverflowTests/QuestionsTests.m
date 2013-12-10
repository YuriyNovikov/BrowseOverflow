//
//  QuestionsTests.m
//  BrowseOverflow
//
//  Created by MacUser on 07.12.13.
//  Copyright (c) 2013 MacUser. All rights reserved.
//

#import "QuestionsTests.h"
#import "Question.h"
#import "Answer.h"

@implementation QuestionsTests {
    Question *question;
    Answer *lowScore;
    Answer *highScore;
}

- (void)setUp {
    question = [[Question alloc] init];
    question.date = [NSDate distantPast];
    question.title = @"Do iPhones also dream of electric sheep?";
    question.score = 42;
    
    Answer *accepted = [[Answer alloc] init];
    accepted.score = 1;
    accepted.accepted = YES;
    [question addAnswer: accepted];
    
    lowScore = [[Answer alloc] init];
    lowScore.score = -4;
    [question addAnswer:lowScore];
    
    highScore = [[Answer alloc] init];
    highScore.score = 4;
    [question addAnswer:highScore];
}

- (void)tearDown {
    question = nil;
    lowScore = nil;
    highScore = nil;
}

- (void)testQuestionHasADate {
    NSDate *testDate = [NSDate distantPast];
    question.date = testDate;
    STAssertEqualObjects(question.date, testDate, @"Question needs to provide its date");
}

- (void)testQuestionsKeepScore {
    STAssertEquals(question.score, 42, @"Question need a numeric score");
}

- (void)testQuestionHasATitle {
    STAssertEqualObjects(question.title, @"Do iPhones also dream of electric sheep?", @"Question should know its title");
}

- (void)testAcceptedAnswerIsFirst {
    STAssertTrue([[question.answers objectAtIndex:0] isAccepted], @"Accepted answer comes first");
}

- (void)testHighScoreAnswerBeforeLow {
    NSArray *answers = question.answers;
    NSInteger highIndex = [answers indexOfObject:highScore];
    NSInteger lowIndex = [answers indexOfObject:lowScore];
    STAssertTrue(highIndex < lowIndex, @"High-scoring answer comes first");
}

@end
