//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DFRNavigationMode, DVTObservingToken, NSSegmentedControl;

@interface IDEEditorAreaDFRController : NSObject
{
    DVTObservingToken *_editorAreaDocumentObserver;
    DFRNavigationMode *_modeForFileHistoryNavigation;
    NSSegmentedControl *_fileHistoryControl;
}

- (void).cxx_destruct;
@property(retain) NSSegmentedControl *fileHistoryControl; // @synthesize fileHistoryControl=_fileHistoryControl;
@property(retain) DFRNavigationMode *modeForFileHistoryNavigation; // @synthesize modeForFileHistoryNavigation=_modeForFileHistoryNavigation;
@property(retain) DVTObservingToken *editorAreaDocumentObserver; // @synthesize editorAreaDocumentObserver=_editorAreaDocumentObserver;

@end

