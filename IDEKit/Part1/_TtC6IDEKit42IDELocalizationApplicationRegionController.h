//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDELocalizationPopUpController.h>

@class MISSING_TYPE;
@protocol _TtP6IDEKit40IDELocalizationApplicationRegionDelegate_;

@interface _TtC6IDEKit42IDELocalizationApplicationRegionController : IDELocalizationPopUpController
{
    MISSING_TYPE *selectedRegion;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithScheme:(id)arg1;
- (void)selectRegion:(id)arg1;
- (void)selectRegionItemWithSender:(id)arg1;
- (void)viewDidInstall;
@property(nonatomic) __weak id <_TtP6IDEKit40IDELocalizationApplicationRegionDelegate_> delegate; // @synthesize delegate;

@end

