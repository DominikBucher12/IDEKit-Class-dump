//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTFileDataType, MISSING_TYPE, NSImage, NSString;

@interface _TtC6IDEKit40SourceControlReviewFilesDocumentLocation : DVTDocumentLocation <IDEKeyDrivenNavigableItemRepresentedObject>
{
    MISSING_TYPE *name;
    MISSING_TYPE *filePath;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2;
@property(nonatomic, readonly) DVTFileDataType *navigableItem_documentType;
@property(nonatomic, readonly) NSImage *navigableItem_image;
@property(nonatomic, readonly) NSString *navigableItem_name;
- (id)initWithCoder:(id)arg1;
- (id)init:(id)arg1 logItem:(id)arg2 filePath:(id)arg3;

@end

