//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEIndexContainerSymbol-Protocol.h>

@class IDEIndexCollection;

@protocol IDEIndexClassSymbol <IDEIndexContainerSymbol>
- (IDEIndexCollection *)interfaces;
- (IDEIndexCollection *)allProtocols;
- (IDEIndexCollection *)protocols;
- (IDEIndexCollection *)allSubclasses;
- (IDEIndexCollection *)subclasses;
- (IDEIndexCollection *)allSuperclasses;
- (IDEIndexCollection *)superclasses;
- (IDEIndexCollection *)categories;
- (IDEIndexCollection *)gkInspectableProperties;
- (IDEIndexCollection *)ibOutletCollectionProperties;
- (IDEIndexCollection *)ibOutletCollectionVariables;
- (IDEIndexCollection *)ibOutletCollections;
- (IDEIndexCollection *)ibOutletProperties;
- (IDEIndexCollection *)ibOutletVariables;
- (IDEIndexCollection *)ibOutlets;
- (IDEIndexCollection *)ibActionMethods;
- (IDEIndexCollection *)properties;
- (IDEIndexCollection *)instanceVariables;
- (IDEIndexCollection *)classVariables;
- (IDEIndexCollection *)instanceMethods;
- (IDEIndexCollection *)classMethods;
@end

