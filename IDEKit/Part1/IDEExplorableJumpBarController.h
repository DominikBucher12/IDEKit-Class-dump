//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTInvalidation_NSObject.h>

#import <IDEKit/DVTPathCellDelegate-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>
#import <IDEKit/NSPathControlDelegate-Protocol.h>

@class MISSING_TYPE, _TtC6IDEKit47IDEExplorableJumpBarControllerBindingsInterface;
@protocol _TtP6IDEKit38IDEExplorableJumpBarControllerDelegate_;

@interface IDEExplorableJumpBarController : DVTInvalidation_NSObject <NSPathControlDelegate, DVTPathCellDelegate, NSMenuDelegate>
{
    MISSING_TYPE *content;
    MISSING_TYPE *delegate;
    MISSING_TYPE *mirrorIDToHandle;
    MISSING_TYPE *contentObservation;
    MISSING_TYPE *bindingsInterface;
    MISSING_TYPE *pendingSelectionToPushToBindingsInterface;
}

- (void).cxx_destruct;
- (id)init;
- (void)pathCell:(id)arg1 willDisplayChildren:(id)arg2 mostProximateChildItem:(id)arg3;
- (id)takeoverPathControl:(id)arg1;
- (void)userDidSelectIdentifier:(id)arg1;
- (void)primitiveInvalidate;
@property(nonatomic, readonly) BOOL hasSelection;
@property(nonatomic, retain) _TtC6IDEKit47IDEExplorableJumpBarControllerBindingsInterface *bindingsInterface; // @synthesize bindingsInterface;
@property(nonatomic, retain) id <_TtP6IDEKit38IDEExplorableJumpBarControllerDelegate_> delegate; // @synthesize delegate;

@end

