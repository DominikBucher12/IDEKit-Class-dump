//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSImage, NSString, NSURL;
@protocol NSObject><IDEPathCellItem;

@protocol IDEPathCellItem
@property(readonly, nonatomic) NSString *accessibilityIdentifier;
@property(readonly, nonatomic) NSURL *representedURLForExternalDrag;
@property(readonly, nonatomic) NSURL *representedURL;
@property(readonly, nonatomic) NSString *groupIdentifier;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property(readonly, nonatomic) NSArray *childItems;
@property(readonly, nonatomic) id <NSObject><IDEPathCellItem> parentItem;
@property(readonly, nonatomic) id representedObject;
@property(readonly, nonatomic) NSString *toolTip;
@property(readonly, nonatomic) NSImage *image;
@property(readonly, nonatomic) NSString *name;
- (BOOL)representsDocumentRoot;
@end

