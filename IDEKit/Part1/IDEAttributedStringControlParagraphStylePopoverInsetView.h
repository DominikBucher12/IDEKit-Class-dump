//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

@class NSView;

@interface IDEAttributedStringControlParagraphStylePopoverInsetView : DVTLayoutView_ML
{
    int _horizontalResizingMode;
    int _verticalResizingMode;
    NSView *_contentView;
    CDStruct_bf6d4a14 _inset;
}

- (void).cxx_destruct;
@property int verticalResizingMode; // @synthesize verticalResizingMode=_verticalResizingMode;
@property int horizontalResizingMode; // @synthesize horizontalResizingMode=_horizontalResizingMode;
@property(nonatomic) CDStruct_bf6d4a14 inset; // @synthesize inset=_inset;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (id)initWithFrame:(struct CGRect)arg1;

@end

