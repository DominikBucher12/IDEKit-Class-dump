//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEUtilitySlice.h>

@class NSBundle, NSDictionary, NSNumber, NSString;

@interface _IDEUtilitySliceData : IDEUtilitySlice
{
    NSDictionary *_sliceDictionary;
    BOOL _supportsDocumentUndo;
    BOOL _supportsDocumentInspection;
    BOOL _wantsHeaderBottomBorder;
    BOOL _wantsBottomPadding;
    NSString *_identifier;
    NSBundle *_bundle;
    NSString *_name;
    NSString *_version;
    Class _controllerClass;
    NSString *_contentType;
    NSString *_categoryIdentifier;
    NSString *_inspectorTitle;
    NSString *_sliceFile;
    NSString *_inspectorTitleKeyPath;
    NSNumber *_positionPriority;
    NSString *_positionAnchor;
    NSNumber *_minimumRequiredRuntimeOSVersion;
    NSNumber *_maximumAllowedRuntimeOSVersion;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL wantsBottomPadding; // @synthesize wantsBottomPadding=_wantsBottomPadding;
@property(nonatomic) BOOL wantsHeaderBottomBorder; // @synthesize wantsHeaderBottomBorder=_wantsHeaderBottomBorder;
@property(retain, nonatomic) NSNumber *maximumAllowedRuntimeOSVersion; // @synthesize maximumAllowedRuntimeOSVersion=_maximumAllowedRuntimeOSVersion;
@property(retain, nonatomic) NSNumber *minimumRequiredRuntimeOSVersion; // @synthesize minimumRequiredRuntimeOSVersion=_minimumRequiredRuntimeOSVersion;
@property(retain, nonatomic) NSString *positionAnchor; // @synthesize positionAnchor=_positionAnchor;
@property(retain, nonatomic) NSNumber *positionPriority; // @synthesize positionPriority=_positionPriority;
@property(nonatomic) BOOL supportsDocumentInspection; // @synthesize supportsDocumentInspection=_supportsDocumentInspection;
@property(nonatomic) BOOL supportsDocumentUndo; // @synthesize supportsDocumentUndo=_supportsDocumentUndo;
@property(retain, nonatomic) NSString *inspectorTitleKeyPath; // @synthesize inspectorTitleKeyPath=_inspectorTitleKeyPath;
@property(retain, nonatomic) NSString *sliceFile; // @synthesize sliceFile=_sliceFile;
@property(retain, nonatomic) NSString *inspectorTitle; // @synthesize inspectorTitle=_inspectorTitle;
@property(retain, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) Class controllerClass; // @synthesize controllerClass=_controllerClass;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)sliceDictionary;
- (id)description;
- (id)initWithIdentifier:(id)arg1 andDictionary:(id)arg2;

@end

