//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTWindowActivationStateObserver-Protocol.h>
#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTReplacementView, DVTScrollView, DVTTabChooserView, DVTTextPreferences, NSArray, NSArrayController, NSBox, NSColor, NSFont, NSObjectController, NSPopUpButton, NSString, NSTableView, NSTextField, NSView;
@protocol DVTCancellable;

@interface IDEFontAndColorPrefsPaneController : IDEViewController <NSTableViewDelegate, DVTWindowActivationStateObserver>
{
    DVTReplacementView *preferenceSetReplacementView;
    DVTBorderedView *_fontAndColorBorderView;
    DVTTabChooserView *_tabChooserView;
    NSTableView *_fontAndColorItemTable;
    NSArrayController *_categoriesArrayController;
    NSObjectController *_currentThemeObjectController;
    DVTBorderedView *_generalColorView;
    DVTBorderedView *_fontContainerView;
    NSView *_sourceEditorGeneralView;
    NSView *_markupGeneralView;
    NSView *_consoleGeneralView;
    NSView *_fullFontPickerView;
    NSView *_familyOnlyFontPickerView;
    NSArray *_fontAndColorItems;
    DVTObservingToken *_selectedTabObserver;
    DVTObservingToken *_backgroundColorObserver;
    DVTObservingToken *_selectionIndexesObserver;
    id <DVTCancellable> _windowActivationStateObserver;
    DVTBorderedView *_themeListContainer;
    DVTBorderedView *_aboveThemeListBar;
    DVTScrollView *_scrollView;
    NSTextField *_measuringField;
    NSBox *_lineSpacingSeparatorBox;
    NSPopUpButton *_lineSpacingPopup;
    NSBox *_cursorSeparatorBox;
    NSPopUpButton *_cursorPopUp;
    NSView *_consoleFontPickerView;
}

+ (void)initialize;
- (void).cxx_destruct;
@property __weak NSView *consoleFontPickerView; // @synthesize consoleFontPickerView=_consoleFontPickerView;
@property __weak NSPopUpButton *cursorPopUp; // @synthesize cursorPopUp=_cursorPopUp;
@property __weak NSBox *cursorSeparatorBox; // @synthesize cursorSeparatorBox=_cursorSeparatorBox;
@property __weak NSPopUpButton *lineSpacingPopup; // @synthesize lineSpacingPopup=_lineSpacingPopup;
@property(retain) NSBox *lineSpacingSeparatorBox; // @synthesize lineSpacingSeparatorBox=_lineSpacingSeparatorBox;
@property(retain) NSTextField *measuringField; // @synthesize measuringField=_measuringField;
@property(retain) DVTScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) DVTBorderedView *aboveThemeListBar; // @synthesize aboveThemeListBar=_aboveThemeListBar;
@property(retain) DVTBorderedView *themeListContainer; // @synthesize themeListContainer=_themeListContainer;
@property(readonly) NSArrayController *categoriesArrayController; // @synthesize categoriesArrayController=_categoriesArrayController;
@property(retain) NSArray *fontAndColorItems; // @synthesize fontAndColorItems=_fontAndColorItems;
- (void)changeFont:(id)arg1;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (void)chooseFont:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)_refreshRowViewSelectionColor:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)_configureTextField:(id)arg1 forItem:(id)arg2;
- (BOOL)colorWell:(id)arg1 shouldSetColor:(id)arg2;
- (void)_updateCursorChangedTitleFromSelectedItem;
- (void)_cursorChanged:(id)arg1;
- (void)_updateLineSpacingPopup;
- (void)lineSpacingChanged:(id)arg1;
- (id)_theme;
- (void)_sourceTextColorsChanged:(id)arg1;
- (void)_resetAllRowHeights;
- (void)_updateBindingsBasedOnSelectedTab;
- (void)_handleTabChanged;
- (void)_initTabChooserView;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
@property(readonly) DVTTextPreferences *textPreferences;
- (void)_updateFontPanel;
- (void)_updateFontPickerAndColorWell;
@property(copy) NSFont *combinedSyntaxFont;
@property(copy) NSColor *combinedSyntaxColor;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

