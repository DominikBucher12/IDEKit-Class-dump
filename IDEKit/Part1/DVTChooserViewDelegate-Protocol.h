//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTChoice, DVTChooserView, NSArray;

@protocol DVTChooserViewDelegate <NSObject>

@optional
- (void)chooserView:(DVTChooserView *)arg1 userDidSelectChoices:(NSArray *)arg2;
- (void)chooserView:(DVTChooserView *)arg1 userDidSelectChoice:(DVTChoice *)arg2;
@end

