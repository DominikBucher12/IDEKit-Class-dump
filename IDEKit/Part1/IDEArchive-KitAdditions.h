//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEArchive.h>

@class NSArray, NSImage, NSString;

@interface IDEArchive (KitAdditions)
+ (id)keyPathsForValuesAffectingide_statusIcon;
+ (id)ide_statusIconNone:(BOOL)arg1;
+ (id)ide_statusIconProcessing:(BOOL)arg1 ofSize:(struct CGSize)arg2;
+ (id)ide_statusIconProcessing:(BOOL)arg1;
+ (id)ide_statusIconUploaded:(BOOL)arg1;
+ (id)ide_statusIconInfo:(BOOL)arg1;
+ (id)ide_statusIconWarning:(BOOL)arg1;
+ (id)ide_statusIconRejected:(BOOL)arg1 ofSize:(struct CGSize)arg2;
+ (id)ide_statusIconRejected:(BOOL)arg1;
+ (id)ide_statusIconApproved:(BOOL)arg1 ofSize:(struct CGSize)arg2;
+ (id)ide_statusIconApproved:(BOOL)arg1;
- (void)ide_exportNotarizedAppWithHostWindow:(id)arg1;
- (id)ide_statusIcon:(BOOL)arg1;
@property(readonly) NSString *aav_identifierLabel;
@property(readonly) NSImage *aav_displayIcon;
@property(readonly) NSArray *aav_displayIcons;
- (id)aav_version;
@property(readonly) NSString *aav_archiveType;
@property(readonly) NSString *aav_humanReadablePlatformName;
@property(readonly) NSString *aav_platformName;
@property(readonly) NSString *aav_bundleIdentifier;
@property(readonly) NSString *aav_displayName;
- (id)aav_appInfoPlist;
@end

