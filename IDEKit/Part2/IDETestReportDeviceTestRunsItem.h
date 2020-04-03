//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDETestReport_DeviceTestRuns-Protocol.h>

@class NSArray, NSImage, NSMutableArray, NSNumber, NSString;
@protocol IDETestReport_Base, IDETestReport_Device;

@interface IDETestReportDeviceTestRunsItem : NSObject <IDETestReport_DeviceTestRuns>
{
    id <IDETestReport_Device> _ide_testReport_deviceTestRuns_device;
    NSMutableArray *_testRuns;
    NSString *_ide_testReport_base_identifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ide_testReport_base_identifier; // @synthesize ide_testReport_base_identifier=_ide_testReport_base_identifier;
@property(retain) NSMutableArray *testRuns; // @synthesize testRuns=_testRuns;
@property(retain, nonatomic) id <IDETestReport_Device> ide_testReport_deviceTestRuns_device; // @synthesize ide_testReport_deviceTestRuns_device=_ide_testReport_deviceTestRuns_device;
@property(readonly, nonatomic) NSNumber *ide_testReport_common_duration;
@property(readonly, nonatomic) NSString *ide_testReport_common_statusTooltip;
@property(readonly, nonatomic) NSImage *ide_testReport_common_typeImage;
@property(readonly, nonatomic) BOOL ide_testReport_common_skipped;
@property(readonly, nonatomic) BOOL ide_testReport_common_failed;
@property(readonly, nonatomic) BOOL ide_testReport_common_passed;
@property(readonly, nonatomic) NSImage *ide_testReport_common_statusImage;
@property(readonly, copy, nonatomic) NSString *ide_testReport_common_title;
@property(readonly, nonatomic) NSArray *ide_testReport_deviceTestRuns_testRuns;
- (void)addTestRun:(id)arg1;
- (id)initWithDevice:(id)arg1 testRuns:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <IDETestReport_Base> ide_testReport_base_parent; // @dynamic ide_testReport_base_parent;
@property(readonly, nonatomic) BOOL ide_testReport_deviceTestRuns_mixedStatus;
@property(readonly) Class superclass;

@end
