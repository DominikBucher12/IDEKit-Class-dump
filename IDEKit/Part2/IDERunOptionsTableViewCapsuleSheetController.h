//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTTableViewDelegate-Protocol.h>
#import <IDEKit/IDECapsuleViewController-Protocol.h>
#import <IDEKit/IDECapsuleViewDelegate-Protocol.h>

@class DVTBorderedView, DVTTableView, NSArrayController, NSColor, NSImage, NSMutableArray, NSString;

@interface IDERunOptionsTableViewCapsuleSheetController : IDEViewController <IDECapsuleViewDelegate, IDECapsuleViewController, DVTTableViewDelegate>
{
    DVTTableView *_tableView;
    NSArrayController *_arrayController;
    DVTBorderedView *_tableBorder;
    NSMutableArray *_tableViewContent;
    BOOL _arrayControllerCanRemoveItems;
    BOOL _enabled;
    BOOL _resizesHeightBasedOnContent;
    BOOL _allowsScrolling;
    unsigned long long _borderSides;
}

+ (id)keyPathsForValuesAffectingCanRemoveItems;
+ (id)keyPathsForValuesAffectingCanAddItems;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long borderSides; // @synthesize borderSides=_borderSides;
@property(nonatomic) BOOL allowsScrolling; // @synthesize allowsScrolling=_allowsScrolling;
@property(nonatomic) BOOL resizesHeightBasedOnContent; // @synthesize resizesHeightBasedOnContent=_resizesHeightBasedOnContent;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property BOOL arrayControllerCanRemoveItems; // @synthesize arrayControllerCanRemoveItems=_arrayControllerCanRemoveItems;
@property(retain, nonatomic) NSMutableArray *tableViewContent; // @synthesize tableViewContent=_tableViewContent;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (double)capsuleView:(id)arg1 preferredContentViewWidthForCapsuleWidth:(double)arg2;
- (BOOL)shouldDrawBorderBelowHeaderForCapsuleView:(id)arg1;
@property BOOL canRemoveItems;
@property BOOL canAddItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canRemove;
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
@property(readonly, copy) NSString *titleForDisplay;
- (void)_resizeView;
- (void)applyTableBorderStyle;
- (void)applyAutoresizingMasks;
- (void)applyScrollingBehavior;
@property(readonly) NSString *pasteboardType;
- (void)loadView;
- (id)init;

// Remaining properties
@property(retain) NSColor *backgroundColor;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canSelect;
@property(readonly) BOOL canUndisclose;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) Class superclass;
@property(readonly) BOOL wantsDisclosureButtonHidden;

@end

