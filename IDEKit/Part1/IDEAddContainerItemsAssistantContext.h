//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEStructureEditingAssistantContext.h>

@class DVTObservingToken, IDEGroup, NSArray, NSString;

@interface IDEAddContainerItemsAssistantContext : IDEStructureEditingAssistantContext
{
    DVTObservingToken *_targetGroupObservingToken;
    BOOL _createGroupsForFolders;
    BOOL _copyFilesToTargetGroup;
    BOOL _stripOutBuildProductContainerItems;
    BOOL _shouldHideCopyFilesToTargetGroupSwitchButton;
    BOOL _isMovingReferencesWithinSameContainer;
    IDEGroup *_targetGroup;
    NSArray *_containerItems;
    NSString *_buildToolPath;
    NSString *_buildArgumentsString;
    CDUnknownBlockType _validationBlock;
    CDUnknownBlockType _prepareBlock;
}

+ (id)contextWithTargetGroup:(id)arg1;
+ (id)_containerAddingItemsAssistantExtensionForContainer:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType prepareBlock; // @synthesize prepareBlock=_prepareBlock;
@property(copy) CDUnknownBlockType validationBlock; // @synthesize validationBlock=_validationBlock;
@property(copy) NSString *buildArgumentsString; // @synthesize buildArgumentsString=_buildArgumentsString;
@property(copy) NSString *buildToolPath; // @synthesize buildToolPath=_buildToolPath;
@property BOOL isMovingReferencesWithinSameContainer; // @synthesize isMovingReferencesWithinSameContainer=_isMovingReferencesWithinSameContainer;
@property BOOL shouldHideCopyFilesToTargetGroupSwitchButton; // @synthesize shouldHideCopyFilesToTargetGroupSwitchButton=_shouldHideCopyFilesToTargetGroupSwitchButton;
@property BOOL stripOutBuildProductContainerItems; // @synthesize stripOutBuildProductContainerItems=_stripOutBuildProductContainerItems;
@property(copy) NSArray *containerItems; // @synthesize containerItems=_containerItems;
@property(retain, nonatomic) IDEGroup *targetGroup; // @synthesize targetGroup=_targetGroup;
- (void)_addItemsFromDraggingInfo:(id)arg1;
- (void)_configureForOnlyDraggingProjects;
- (id)assistantIdentifier;
@property(readonly) NSString *actualAssistantIdentifier;
@property BOOL copyFilesToTargetGroup;
@property BOOL createGroupsForFolders;
@property(readonly) BOOL isTargetingPlayground;
@property(readonly) BOOL isTargetingFolder;
- (id)description;
- (void)dealloc;
- (id)init;

@end

