//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDESchemeActionTestFailureSummary.h>

#import <IDEKit/IDETestReport_FailureSummary-Protocol.h>

@class NSString;

@interface IDESchemeActionTestFailureSummary (IDELogTestsViewController) <IDETestReport_FailureSummary>
@property(readonly, nonatomic) long long ide_testReport_failureSummary_lineNumber;
@property(readonly, copy, nonatomic) NSString *ide_testReport_failureSummary_fileName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_failureSummary_message;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
