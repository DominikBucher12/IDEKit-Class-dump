//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEContainerContentsMediaRepository.h>

@class NSMutableDictionary, NSSet;

@interface IDEFileMediaRepository : IDEContainerContentsMediaRepository
{
    NSMutableDictionary *_resourcesByPath;
    NSSet *_resources;
}

+ (id)allSupportedMediaFileDataTypes;
+ (id)containerContentProducer:(id)arg1 produceValueForFilePath:(id)arg2 fileDataType:(id)arg3;
- (void).cxx_destruct;
- (void)fileReferenceObserverDidReportUpdatedAndAddedResourcesByPath:(id)arg1 removedPaths:(id)arg2;
- (id)_resourcesRemovedBecauseFileReferenceObserverDidRemovePaths:(id)arg1;
- (void)_fileReferenceObserverDidUpdateOrAddResourcesByPath:(id)arg1;
- (id)resources;
- (void)primitiveInvalidate;
- (id)initWithContentProductionSpecifier:(id)arg1;

@end

