//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol IDETestReport_Device;

@interface _TtC6IDEKit26IDETestReportDeviceSummary : NSObject
{
    MISSING_TYPE *device;
    MISSING_TYPE *testFailureCount;
}

+ (id)deviceSummariesForTestGroups:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDevice:(id)arg1 testFailureCount:(long long)arg2;
@property(nonatomic) long long testFailureCount; // @synthesize testFailureCount;
@property(nonatomic, readonly) id <IDETestReport_Device> device; // @synthesize device;

@end

