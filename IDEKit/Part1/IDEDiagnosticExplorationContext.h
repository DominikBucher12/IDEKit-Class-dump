//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEExplorationContext.h>

@class IDEDiagnosticActivityLogMessage;

@interface IDEDiagnosticExplorationContext : IDEExplorationContext
{
    IDEDiagnosticActivityLogMessage *_diagnosticMessage;
    BOOL _fixIt;
}

- (void).cxx_destruct;
@property BOOL shouldFixIt; // @synthesize shouldFixIt=_fixIt;
@property(readonly) IDEDiagnosticActivityLogMessage *diagnosticMessage; // @synthesize diagnosticMessage=_diagnosticMessage;
- (int)explorationType;
- (id)initWithDiagnosticMessage:(id)arg1 shouldFixIt:(BOOL)arg2;

@end

