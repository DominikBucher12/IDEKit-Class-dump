//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTFilterControlBar.h>

@class DVTSearchField, NSMenu;

@interface IDESearchFilterControlBar : DVTFilterControlBar
{
}

- (id)_filterControlFieldWithFrame:(struct CGRect)arg1;
@property(copy) NSMenu *searchMenuTemplate;
- (void)_updateCellForSearchField:(id)arg1;

// Remaining properties
@property(readonly) DVTSearchField *filterControlField; // @dynamic filterControlField;

@end

