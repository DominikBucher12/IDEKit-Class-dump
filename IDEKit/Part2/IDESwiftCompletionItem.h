//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTTextCompletionItem-Protocol.h>

@class NSArray, NSAttributedString, NSImage, NSString;

@interface IDESwiftCompletionItem : NSObject <DVTTextCompletionItem>
{
    CDStruct_4c46f3f5 _obj;
    struct _sourcekit_uid_s *_completionsKind;
    double _priority;
    double _fuzzyMatchingScore;
    NSString *_action;
    long long _priorityBucket;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) long long priorityBucket; // @synthesize priorityBucket=_priorityBucket;
@property double fuzzyMatchingScore; // @synthesize fuzzyMatchingScore=_fuzzyMatchingScore;
@property double priority; // @synthesize priority=_priority;
- (unsigned long long)leadingCharactersToReplaceFromString:(id)arg1 location:(unsigned long long)arg2;
- (void)infoViewControllerWithWidth:(double)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) NSArray *associatedUSRs;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *action; // @synthesize action=_action;
@property(readonly) BOOL notRecommended;
@property(readonly) unsigned long long priorityComparatorKind;
@property(readonly) NSImage *icon;
- (id)symbolKind;
@property(readonly, copy) NSAttributedString *descriptionText;
@property(readonly, copy) NSString *parentText;
@property(readonly, copy) NSString *completionText;
@property(readonly, copy) NSString *displayType;
@property(readonly, copy) NSString *displayText;
- (id)initWithSourceKitDictionary:(CDStruct_4c46f3f5)arg1 completionsKind:(struct _sourcekit_uid_s *)arg2;

// Remaining properties
@property(readonly, copy) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly) NSImage *statusIcon;
@property(readonly) Class superclass;

@end

