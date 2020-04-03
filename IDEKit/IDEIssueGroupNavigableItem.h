//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class DVTObservingToken;

@interface IDEIssueGroupNavigableItem : IDEKeyDrivenNavigableItem
{
    DVTObservingToken *_fileGroupsObservingToken;
    DVTObservingToken *_issuesWithoutFilesObservingToken;
    DVTObservingToken *_typeGroupsObservingToken;
    unsigned long long _compressionValue;
    BOOL _showsCompressedStackFrames;
    long long _showChildrenByType;
}

+ (id)keyPathsForValuesAffectingSubtitle;
- (void).cxx_destruct;
@property(nonatomic) long long showChildrenByType; // @synthesize showChildrenByType=_showChildrenByType;
@property(nonatomic) BOOL showsCompressedStackFrames; // @synthesize showsCompressedStackFrames=_showsCompressedStackFrames;
- (void)_changeThreadNavigableItem:(id)arg1;
- (id)subtitle;
- (id)childRepresentedObjects;
- (void)primitiveInvalidate;
- (BOOL)isLeaf;
- (id)initWithRepresentedObject:(id)arg1;

@end
