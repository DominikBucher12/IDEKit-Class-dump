//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/XCLogSectionAdapter.h>

@interface XCLogUnitTestAdapter : XCLogSectionAdapter
{
}

- (BOOL)anyImportantMessagesForDataNode:(id)arg1;
- (unsigned long long)analyzerResultsForDataNode:(id)arg1;
- (unsigned long long)analyzerWarningsForDataNode:(id)arg1;
- (unsigned long long)warningsForDataNode:(id)arg1;
- (unsigned long long)testFailuresForDataNode:(id)arg1;
- (unsigned long long)errorsForDataNode:(id)arg1;
- (id)dataNode:(id)arg1 toolTipForTableColumn:(id)arg2;
- (id)accessibilityDescriptionForDataNode:(id)arg1;
- (id)titleSecondPartForDataNode:(id)arg1;
- (BOOL)supportsTextExpansionAtSectionLevelForDataNode:(id)arg1;
- (BOOL)textExpandedByDefaultForDataNode:(id)arg1;
- (BOOL)supportsTextExpansionForDataNode:(id)arg1;
- (BOOL)isUnitTestAdapter;

@end

