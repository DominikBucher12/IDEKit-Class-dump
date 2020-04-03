//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDETestReport_TestGroup-Protocol.h>

@class NSArray, NSSet, NSString;
@protocol IDETestReport_Base, IDETestReport_TestGroup;

@interface IDETestReportFilteringTestGroup : NSObject <IDETestReport_TestGroup>
{
    id <IDETestReport_TestGroup> _group;
    NSSet *_activeDevices;
    NSSet *_activeRuns;
    NSArray *_ide_sharedTests_testGroup_allTests;
}

- (void).cxx_destruct;
@property(copy) NSArray *ide_sharedTests_testGroup_allTests; // @synthesize ide_sharedTests_testGroup_allTests=_ide_sharedTests_testGroup_allTests;
@property(readonly, copy) NSSet *activeRuns; // @synthesize activeRuns=_activeRuns;
@property(readonly, copy) NSSet *activeDevices; // @synthesize activeDevices=_activeDevices;
@property(readonly) id <IDETestReport_TestGroup> group; // @synthesize group=_group;
@property(readonly, nonatomic) double ide_testReport_testGroup_duration;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)ide_sharedTests_mixedTests;
- (id)ide_sharedTests_skippedTests;
- (id)ide_sharedTests_failingTests;
- (id)ide_sharedTests_passingTests;
- (id)ide_sharedTests_testGroup_perfTests;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testGroup_testTargetName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testGroup_groupName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_base_identifier;
- (id)initWithGroup:(id)arg1 activeDevices:(id)arg2 activeRuns:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <IDETestReport_Base> ide_testReport_base_parent; // @dynamic ide_testReport_base_parent;
@property(readonly) Class superclass;

@end

