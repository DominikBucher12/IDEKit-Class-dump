//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEExplorationContext.h>

@class IDEActivityLogAnalyzerResultMessage, IDEIssue;

@interface IDEAnalyzerResultExplorationContext : IDEExplorationContext
{
    IDEActivityLogAnalyzerResultMessage *_message;
    IDEIssue *_step;
}

- (void).cxx_destruct;
@property(readonly) IDEIssue *step; // @synthesize step=_step;
@property(readonly) IDEActivityLogAnalyzerResultMessage *message; // @synthesize message=_message;
- (int)explorationType;
- (id)initWithAnalyzerResultMessage:(id)arg1 stepIssue:(id)arg2;

@end

