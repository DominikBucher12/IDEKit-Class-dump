//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class MISSING_TYPE, _TtC6IDEKit14TrainYardTable;

@interface _TtC6IDEKit23TrainyardViewController : IDEViewController
{
    MISSING_TYPE *defaultRowHeight;
    MISSING_TYPE *mergeRowHeight;
    MISSING_TYPE *biggerRowHeightMultiplier;
    MISSING_TYPE *tableView;
    MISSING_TYPE *trainyardCellNibName;
    MISSING_TYPE *fileLogCellNibName;
    MISSING_TYPE *trainyardCellIdentifier;
    MISSING_TYPE *fileLogCellIdentifier;
    MISSING_TYPE *logRowViewIdentifier;
    MISSING_TYPE *logItemFilter;
    MISSING_TYPE *filteredLogItems;
    MISSING_TYPE *unfilteredLogItems;
    MISSING_TYPE *currentSelectedItems;
    MISSING_TYPE *delegate;
    MISSING_TYPE *rowToSelect;
    MISSING_TYPE *restoredNumberOfRows;
    MISSING_TYPE *restoredFirstIdentifier;
    MISSING_TYPE *filterToBranches;
    MISSING_TYPE *searchTokens;
    MISSING_TYPE *startDate;
    MISSING_TYPE *endDate;
}

+ (id)defaultViewNibName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)copy:(id)arg1;
- (void)openReviewFiles:(id)arg1;
- (void)loadView;
- (void)primitiveInvalidate;
@property(nonatomic) __weak _TtC6IDEKit14TrainYardTable *tableView; // @synthesize tableView;

@end

