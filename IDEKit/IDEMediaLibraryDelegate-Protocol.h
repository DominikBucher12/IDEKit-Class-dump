//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEMediaLibraryController, IDEMediaResourceVariantContext, IDEMediaResourceVariantSet, NSArray, NSDictionary, NSPasteboard;

@protocol IDEMediaLibraryDelegate <NSObject>

@optional
@property(readonly) NSDictionary *variantForResolvingMediaResources;
@property(readonly) IDEMediaResourceVariantContext *variantContextForMediaLibrary;
- (NSDictionary *)mediaLibraryController:(IDEMediaLibraryController *)arg1 dragImagesByStateIdentifierForMediaResourceVariantSet:(IDEMediaResourceVariantSet *)arg2;
- (void)mediaLibraryController:(IDEMediaLibraryController *)arg1 populatePasteboard:(NSPasteboard *)arg2 withMediaResourceVariantSets:(NSArray *)arg3;
- (BOOL)mediaLibraryController:(IDEMediaLibraryController *)arg1 variantSetIsSystemProvided:(IDEMediaResourceVariantSet *)arg2;
@end

