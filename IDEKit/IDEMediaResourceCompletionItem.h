//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTTextCompletionItem-Protocol.h>

@class NSArray, NSAttributedString, NSImage, NSString;

@interface IDEMediaResourceCompletionItem : NSObject <DVTTextCompletionItem>
{
    NSImage *_cachedIcon;
    NSString *name;
    NSString *displayText;
    NSString *displayType;
    NSString *completionText;
    NSAttributedString *descriptionText;
    CDUnknownBlockType iconProvidingMainThreadBlock;
    double priority;
    double fuzzyMatchingScore;
}

- (void).cxx_destruct;
@property double fuzzyMatchingScore; // @synthesize fuzzyMatchingScore;
@property double priority; // @synthesize priority;
@property(copy) CDUnknownBlockType iconProvidingMainThreadBlock; // @synthesize iconProvidingMainThreadBlock;
@property(copy) NSAttributedString *descriptionText; // @synthesize descriptionText;
@property(copy) NSString *completionText; // @synthesize completionText;
@property(copy) NSString *displayType; // @synthesize displayType;
@property(copy) NSString *displayText; // @synthesize displayText;
@property(copy) NSString *name; // @synthesize name;
@property(readonly) BOOL notRecommended;
@property(readonly) unsigned long long priorityComparatorKind;
@property(readonly) long long priorityBucket;
@property(retain) NSImage *icon; // @synthesize icon=_cachedIcon;
@property(readonly, copy) NSString *parentText;

// Remaining properties
@property(readonly, copy) NSString *action;
@property(readonly, copy) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly) NSImage *statusIcon;
@property(readonly) Class superclass;

@end

