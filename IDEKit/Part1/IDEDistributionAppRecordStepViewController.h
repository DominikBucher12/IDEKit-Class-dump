//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTReplacementView;

@interface IDEDistributionAppRecordStepViewController : IDEDistributionStepViewController
{
    BOOL _loadingRecords;
    DVTReplacementView *_replacementView;
}

+ (id)keyPathsForValuesAffectingCanGoNext;
- (void).cxx_destruct;
@property(nonatomic) BOOL loadingRecords; // @synthesize loadingRecords=_loadingRecords;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void)selectAppRecord:(id)arg1;
- (void)_loadAppRecords;
- (void)viewDidInstall;
- (id)_installAndReturnProgressView;
- (BOOL)canGoNext;
- (id)title;
- (id)nibName;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (void)primitiveInvalidate;

@end

