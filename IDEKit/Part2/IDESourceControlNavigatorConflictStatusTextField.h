//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTStructuredLayoutTextField.h>

@class NSNumber;

@interface IDESourceControlNavigatorConflictStatusTextField : DVTStructuredLayoutTextField
{
}

+ (id)keyPathsForValuesAffectingHasDisplayableStatus;
+ (Class)cellClass;
+ (id)keyPathsForValuesAffectingConflictStateForUpdateOrMerge;
- (BOOL)hasDisplayableStatus;
- (id)cell;
- (void)setHidden:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
@property(copy, nonatomic) NSNumber *conflictStateForUpdateOrMerge;
- (BOOL)allowsVibrancy;
- (id)init;

@end

