//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTTableViewDelegate-Protocol.h>
#import <IDEKit/NSTableViewDataSource-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTStackView_ML, DVTTableView, IDEAppIDItemIdentifiersItemModelSet, NSArray, NSMutableArray, NSScrollView, NSString;
@protocol IDEPortalInfoDelegate;

@interface IDEAppIDItemIdentifiersTableViewController : IDEViewController <DVTTableViewDelegate, NSTableViewDataSource>
{
    NSMutableArray *_cancellationTokens;
    BOOL _enabled;
    IDEAppIDItemIdentifiersItemModelSet *_identifiers;
    NSArray *_displayedContainerIDs;
    id <IDEPortalInfoDelegate> _portalInfoDelegate;
    NSString *_defaultIdentifier;
    NSString *_contentName;
    NSString *_contentNameWithIndefiniteArticle;
    DVTStackView_ML *_stackView;
    DVTBorderedView *_borderedView;
    NSScrollView *_scrollView;
    DVTTableView *_tableView;
    DVTStackView_ML *_buttonsRow;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_refreshButton;
    DVTGradientImageButton *_removeButton;
    NSString *_requiredPrefix;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *requiredPrefix; // @synthesize requiredPrefix=_requiredPrefix;
@property(retain) DVTGradientImageButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain) DVTGradientImageButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain) DVTGradientImageButton *addButton; // @synthesize addButton=_addButton;
@property(retain) DVTStackView_ML *buttonsRow; // @synthesize buttonsRow=_buttonsRow;
@property(retain) DVTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
@property(retain) NSString *contentNameWithIndefiniteArticle; // @synthesize contentNameWithIndefiniteArticle=_contentNameWithIndefiniteArticle;
@property(retain) NSString *contentName; // @synthesize contentName=_contentName;
@property(retain) NSString *defaultIdentifier; // @synthesize defaultIdentifier=_defaultIdentifier;
@property(retain) id <IDEPortalInfoDelegate> portalInfoDelegate; // @synthesize portalInfoDelegate=_portalInfoDelegate;
@property(retain) NSArray *displayedContainerIDs; // @synthesize displayedContainerIDs=_displayedContainerIDs;
@property(retain) IDEAppIDItemIdentifiersItemModelSet *identifiers; // @synthesize identifiers=_identifiers;
@property BOOL enabled; // @synthesize enabled=_enabled;
- (void)refreshIdentifiers:(id)arg1;
- (void)removeIdentifiers:(id)arg1;
- (void)addIdentifier:(id)arg1;
- (void)inputDialogWithTitle:(id)arg1 description:(id)arg2 initialString:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)_isRowInRange:(long long)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_withTeamIfNeededTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithIdentifiers:(id)arg1 portalInfoDelegate:(id)arg2 defaultIdentifier:(id)arg3 requiredPrefix:(id)arg4 contentName:(id)arg5 contentNameWithIndefiniteArticle:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

