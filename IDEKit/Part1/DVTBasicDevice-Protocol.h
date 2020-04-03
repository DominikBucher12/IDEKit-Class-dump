//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/DVTCodesignableDevice-Protocol.h>

@class DTXConnection, DVTPlatform, NSError, NSString;

@protocol DVTBasicDevice <DVTCodesignableDevice>
@property(readonly) _Bool deviceIsBusy;
@property(readonly) NSError *unavailabilityError;
@property(readonly, getter=isAvailable) BOOL available;
@property(readonly) BOOL isProxiedDevice;
@property(readonly, copy) NSString *nativeArchitecture;
@property(readonly) DVTPlatform *platform;
@property(readonly, copy, nonatomic) NSString *operatingSystemVersionWithBuildNumber;
@property(readonly, copy) NSString *operatingSystemBuild;
@property(readonly, copy) NSString *operatingSystemVersion;
@property(readonly, copy) NSString *processorDescription;
@property(readonly, copy, nonatomic) NSString *modelUTI;
@property(readonly, copy, nonatomic) NSString *modelCode;
@property(readonly, copy, nonatomic) NSString *modelCodename;
@property(readonly, copy, nonatomic) NSString *modelName;
- (BOOL)isAvailableWithError:(id *)arg1;

@optional
- (void)cancelPrimaryInstrumentsServer;
- (DTXConnection *)primaryInstrumentsServer;
@end
