//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>

@class NSString;

@interface IDEHelperAppMenuDelegate : NSObject <NSMenuDelegate>
{
}

+ (void)_addGetMoreToolsMenuItemTo:(id)arg1;
+ (void)addInternalHelperAppLaunchMenuItemsTo:(id)arg1;
+ (void)addHelperAppLaunchMenuItemsTo:(id)arg1;
+ (id)_menuItemForPath:(id)arg1;
+ (void)_openURL:(id)arg1;
+ (void)_startHelperApp:(id)arg1;
- (void)menuWillOpen:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

