//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  3 2020 20:00:10).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTSourceModelItem.h>

@interface DVTSourceModelItem (IBDVTFoundationAdditions)
- (id)followingSiblingItem;
- (id)precedingSiblingItem;
- (id)containingObjCClassItem;
- (id)objCCategoryItemNameInSourceModel:(id)arg1;
- (id)objCClassItemNameInSourceModel:(id)arg1;
- (BOOL)isFoldedInLayoutManager:(id)arg1;
- (id)allDescendantItemsConformingToSpecification:(id)arg1;
- (id)firstDescendantItemConformingToSpecification:(id)arg1;
- (id)firstItemInLineageOfType:(id)arg1;
- (id)nameInSourceModel:(id)arg1;
- (id)specificationIdentifier;
- (id)specification;
- (unsigned long long)ancestorContextMask;
- (unsigned long long)contextMask;
- (unsigned long long)_contextMaskForAncestorIncludingSelf:(BOOL)arg1;
- (BOOL)isARCTypeQualifierInSourceModel:(id)arg1;
- (BOOL)isKeyword;
- (BOOL)isTypeIdentifier;
- (BOOL)isObjCAtPropertyKeywordInSourceModel:(id)arg1;
- (BOOL)isObjCAtProtectedKeywordInSourceModel:(id)arg1;
- (BOOL)isObjCAtPublicKeywordInSourceModel:(id)arg1;
- (BOOL)isObjCAtPrivateKeywordInSourceModel:(id)arg1;
- (BOOL)isObjCSuperKeywordInSourceModel:(id)arg1;
- (BOOL)isObjCAtEndKeywordInSourceModel:(id)arg1;
- (BOOL)isClassIdentifierInSourceModel:(id)arg1;
- (BOOL)isSegueActionKeywordInSourceModel:(id)arg1;
- (BOOL)isActionKeywordInSourceModel:(id)arg1;
- (BOOL)isOutletCollectionKeywordInSourceModel:(id)arg1;
- (BOOL)isOutletKeywordInSourceModel:(id)arg1;
- (BOOL)isKeyword:(id)arg1 inSourceModel:(id)arg2;
- (BOOL)isObjCGenericClassMethodItem;
- (BOOL)isObjCGenericInstanceMethodItem;
- (BOOL)isObjCGenericMethodItem;
- (BOOL)isObjCClassExtensionItem;
- (BOOL)isObjCNamedCategoryImplementationDeclaratorItem;
- (BOOL)isObjCNamedCategoryInterfaceDeclaratorItem;
- (BOOL)isObjCCategoryImplementationItem;
- (BOOL)isObjCCategoryInterfaceItem;
- (BOOL)isObjCCategoryOpenParenItem;
- (BOOL)isObjCBracketExpressionItem;
- (BOOL)isObjCClassMethodImplementationItem;
- (BOOL)isObjCClassMethodDeclarationItem;
- (BOOL)isObjCInstanceMethodImplementationItem;
- (BOOL)isObjCInstanceMethodDeclarationItem;
- (BOOL)isObjCPropertyDeclarationItem;
- (BOOL)isObjCIdentifierItem;
- (BOOL)isObjCBlockItem;
- (BOOL)isObjCImplementationDeclaratorItem;
- (BOOL)isObjCInterfaceDeclaratorItem;
- (BOOL)isObjCStrictImplementationItem;
- (BOOL)isObjCStrictInterfaceItem;
- (BOOL)isObjCImplementationItem;
- (BOOL)isObjCInterfaceItem;
@end
