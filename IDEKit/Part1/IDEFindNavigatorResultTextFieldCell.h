//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSAttributedString, NSValue;

@interface IDEFindNavigatorResultTextFieldCell : NSTextFieldCell
{
    NSValue *_cachedExpansionFrame;
    struct CGRect _originalFrameForCachedExpansionFrame;
    NSAttributedString *_expansionText;
}

- (void).cxx_destruct;
@property(copy) NSAttributedString *expansionText; // @synthesize expansionText=_expansionText;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)cellForExpansionDrawing;
- (void)clearCachedExpansionLayout;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

