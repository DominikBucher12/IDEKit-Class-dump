//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IDEDistributionMethod, NSDictionary, NSString;
@protocol IDEDistributable;

@protocol IDEDistributionArchiveReformatter
- (id <IDEDistributable>)reformattedArchive:(id <IDEDistributable>)arg1 distributionMethod:(IDEDistributionMethod *)arg2 error:(id *)arg3;
- (BOOL)wantsReformattingForArchive:(id <IDEDistributable>)arg1 distributionMethod:(IDEDistributionMethod *)arg2;
- (BOOL)isAppStoreContainerAppInfoDictionary:(NSDictionary *)arg1;
- (NSString *)inspectablePropertyValueForArchive:(id <IDEDistributable>)arg1;
- (NSString *)inspectablePropertyName;
@end

