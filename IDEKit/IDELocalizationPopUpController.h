//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEScheme, NSMenu, NSPopUpButton;

@interface IDELocalizationPopUpController : IDEViewController
{
    BOOL _showUseSchemeSettings;
    NSPopUpButton *_popUpButton;
    NSMenu *_popUpMenu;
    IDEScheme *_scheme;
}

+ (id)qualifiedDisplayNameForComponents:(id)arg1;
+ (id)regionDisplayNameForInviolableLocaleIdentifier:(id)arg1 custom:(BOOL)arg2;
+ (id)countryNameForLocaleIdentifier:(id)arg1;
- (void).cxx_destruct;
@property BOOL showUseSchemeSettings; // @synthesize showUseSchemeSettings=_showUseSchemeSettings;
@property(readonly) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property __weak NSMenu *popUpMenu; // @synthesize popUpMenu=_popUpMenu;
@property(retain) NSPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
- (void)primitiveInvalidate;
- (void)enable:(BOOL)arg1;
- (BOOL)menuEnableState;
- (void)setPopUpSize:(unsigned long long)arg1;
- (void)viewDidInstall;
- (id)initWithScheme:(id)arg1;

@end

