//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/XCBuildResultAdapter.h>

@interface XCBuildIssueBaseClassAdapter : XCBuildResultAdapter
{
}

- (BOOL)dataNode:(id)arg1 handleReturnKey:(id)arg2 forOutlineView:(id)arg3 changeFocus:(BOOL)arg4;
- (void)dataNode:(id)arg1 forwardingCell:(id)arg2 drawWithFrame:(struct CGRect)arg3 inView:(id)arg4;
- (id)newAttributesForFont:(id)arg1 color:(id)arg2;
- (id)backgroundColor;
- (double)heightOfRowForDataNode:(id)arg1;
- (void)dataNode:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (BOOL)dataNode:(id)arg1 shouldEditTableColumn:(id)arg2;
- (BOOL)isDataNodeSelectable:(id)arg1;
- (BOOL)isDataNodeExpandable:(id)arg1;
- (id)init;

@end

