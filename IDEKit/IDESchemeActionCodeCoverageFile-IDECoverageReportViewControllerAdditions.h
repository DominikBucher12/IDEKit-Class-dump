//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDESchemeActionCodeCoverageFile.h>

#import <IDEKit/IDECoverage_File-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface IDESchemeActionCodeCoverageFile (IDECoverageReportViewControllerAdditions) <IDECoverage_File>
@property(readonly, copy, nonatomic) NSString *ide_coverage_filePath;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_devices;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_children;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePctDelta;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePct;
@property(readonly, copy, nonatomic) NSString *ide_coverage_title;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_methods;
@property(readonly, nonatomic) unsigned long long ide_coverage_methodsCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

