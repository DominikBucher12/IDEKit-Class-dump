//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImageView, NSLayoutConstraint;

@interface IDEProvisioningProfileDownloaderTableCellView : NSTableCellView
{
    NSLayoutConstraint *_imageViewWidthConstraint;
    NSImageView *_provisioningProfileImageView;
}

- (void).cxx_destruct;
@property(retain) NSImageView *provisioningProfileImageView; // @synthesize provisioningProfileImageView=_provisioningProfileImageView;
@property(retain) NSLayoutConstraint *imageViewWidthConstraint; // @synthesize imageViewWidthConstraint=_imageViewWidthConstraint;
- (id)downloadProfileImage;

@end

