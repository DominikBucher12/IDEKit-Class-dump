//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTReplacementView, DVTTabChooserView;

@interface IDELocationCategoryPrefsPaneController : IDEViewController
{
    DVTReplacementView *replacementView;
    DVTBorderedView *_borderedView;
    DVTTabChooserView *_tabChooserView;
}

+ (id)cachedExtensionsByIdentifier;
+ (id)cachedExtensions;
- (void).cxx_destruct;
@property __weak DVTTabChooserView *tabChooserView; // @synthesize tabChooserView=_tabChooserView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView;
- (void)primitiveInvalidate;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)_handleTabChanged;
- (void)_initTabChooserView;
- (void)loadView;

@end

