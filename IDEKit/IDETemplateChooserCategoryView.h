//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEKit/NSCollectionViewElement-Protocol.h>

@class NSString, NSTextField;

@interface IDETemplateChooserCategoryView : NSView <NSCollectionViewElement>
{
    NSString *_categoryName;
    NSTextField *_categoryTextField;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSTextField *categoryTextField; // @synthesize categoryTextField=_categoryTextField;
- (void)awakeFromNib;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(readonly) Class superclass;

@end

