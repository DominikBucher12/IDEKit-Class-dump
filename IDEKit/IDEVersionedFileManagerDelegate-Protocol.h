//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DVTFilePath, NSArray;

@protocol IDEVersionedFileManagerDelegate
- (void)moveItemAtFilePathToTrash:(DVTFilePath *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (BOOL)canMoveItemsAtFilePaths:(NSArray *)arg1 toFilePaths:(NSArray *)arg2 completionBlockDispatchQueue:(id *)arg3 completionBlock:(CDUnknownBlockType *)arg4;
- (void)willRemoveItemsAtFilePaths:(NSArray *)arg1 completionBlock:(void (^)(BOOL))arg2;
- (BOOL)canRemoveItemsAtFilePaths:(NSArray *)arg1 completionBlockDispatchQueue:(id *)arg2 completionBlock:(CDUnknownBlockType *)arg3;
@end
