//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <IDEKit/IDEEditorHistoryControllerItem-Protocol.h>

@class DVTDocumentLocation, MISSING_TYPE, NSDictionary, NSString, NSURL;

@interface _TtCC6IDEKit13IDEEditorCore11HistoryItem : _TtCs12_SwiftObject <IDEEditorHistoryControllerItem>
{
    MISSING_TYPE *location;
    MISSING_TYPE *documentExtensionIdentifier;
    MISSING_TYPE *historyMenuItemTitle;
    MISSING_TYPE *documentURL;
    MISSING_TYPE *stateSavingStateDictionary;
    MISSING_TYPE *domainIdentifier;
    MISSING_TYPE *documentLocation;
}

- (void)setCachedImage:(id)arg1 isDark:(BOOL)arg2;
- (BOOL)isEqualToHistoryControllerItem:(id)arg1;
@property(nonatomic, retain) DVTDocumentLocation *documentLocation; // @synthesize documentLocation;
@property(nonatomic, copy) NSString *domainIdentifier;
@property(nonatomic, copy) NSDictionary *stateSavingStateDictionary;
@property(nonatomic, copy) NSURL *documentURL;
@property(nonatomic, copy) NSString *historyMenuItemTitle;
@property(nonatomic, copy) NSString *documentExtensionIdentifier;

@end
