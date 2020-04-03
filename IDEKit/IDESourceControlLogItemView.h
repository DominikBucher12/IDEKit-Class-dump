//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import <IDEKit/IDESourceControlLogFilesChangedViewDelegate-Protocol.h>
#import <IDEKit/IDESourceControlNameTokenViewDelegate-Protocol.h>
#import <IDEKit/NSPopoverDelegate-Protocol.h>

@class DVTBindingToken, DVTNotificationToken, DVTObservingToken, DVTSourceControlAuthor, DVTSourceControlLogItem, DVTSourceControlWorkingCopy, DVTStackView_ML, IDESourceControlLogFilesChangedView, IDESourceControlLogViewController, IDESourceControlNameTokenView, NSDictionary, NSString, NSTextField;

@interface IDESourceControlLogItemView : NSTableCellView <NSPopoverDelegate, IDESourceControlNameTokenViewDelegate, IDESourceControlLogFilesChangedViewDelegate>
{
    DVTSourceControlAuthor *_author;
    DVTSourceControlLogItem *_logItem;
    DVTBindingToken *_imageBindingToken;
    DVTBindingToken *_nameBindingToken;
    DVTStackView_ML *_filesChangedStackView;
    long long _trackingTag;
    NSDictionary *_messageTextAttrs;
    DVTObservingToken *_themeObserver;
    DVTNotificationToken *_fontThemeObserver;
    IDESourceControlLogViewController *_owningController;
    NSTextField *_dateField;
    NSTextField *_revisionField;
    IDESourceControlLogFilesChangedView *_filesChangedButton;
    NSTextField *_messageField;
    IDESourceControlNameTokenView *_nameTokenView;
    NSTextField *_mergeField;
    DVTSourceControlWorkingCopy *_workingCopy;
}

+ (double)textHorizontalMargins;
+ (double)defaultMaxSize;
+ (id)messageTextAttributes;
+ (id)showChatButtonTransformer;
+ (id)nibName;
- (void).cxx_destruct;
@property __weak DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
@property __weak NSTextField *mergeField; // @synthesize mergeField=_mergeField;
@property(retain) IDESourceControlNameTokenView *nameTokenView; // @synthesize nameTokenView=_nameTokenView;
@property(retain) NSTextField *messageField; // @synthesize messageField=_messageField;
@property(retain) IDESourceControlLogFilesChangedView *filesChangedButton; // @synthesize filesChangedButton=_filesChangedButton;
@property(retain) NSTextField *revisionField; // @synthesize revisionField=_revisionField;
@property(retain) NSTextField *dateField; // @synthesize dateField=_dateField;
- (void)dealloc;
- (void)teardown;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewChanges:(id)arg1;
- (void)email:(id)arg1;
- (BOOL)shouldShowToken;
- (id)menuForNameToken:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDescriptionWithDate:(id)arg1 revision:(id)arg2 workingCopyName:(id)arg3;
- (void)setMessage:(id)arg1;
- (void)_updateMessageAttributes;
@property __weak DVTSourceControlLogItem *logItem;
- (void)_updateFrames;
@property(retain) DVTSourceControlAuthor *author;
@property(nonatomic) __weak IDESourceControlLogViewController *owningController; // @synthesize owningController=_owningController;
- (void)updateTheme;
- (void)observeTheme;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

