//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCollectionViewDataSource-Protocol.h"

@class MSAssetCollection, NSIndexSet, NSString;
@protocol MSAsset, MSAssetCollectionViewSourceDelegate, MSAssetCollectionViewSourceItemProvider;

@interface MSAssetCollectionViewDataSource : NSObject <NSCollectionViewDataSource>
{
    BOOL _isLibrary;
    unsigned long long _assetType;
    NSString *_name;
    NSString *_title;
    id <MSAssetCollectionViewSourceDelegate> _delegate;
    id <MSAssetCollectionViewSourceItemProvider> _itemProvider;
    MSAssetCollection *_assetCollection;
    id <MSAsset> _highlightedAsset;
    NSIndexSet *_cachedHighlightedIndexes;
}

+ (id)pasteboardTypeForAssetType:(unsigned long long)arg1;
+ (id)pasteboardRepresentationForAsset:(id)arg1 ofType:(unsigned long long)arg2;
@property(retain, nonatomic) NSIndexSet *cachedHighlightedIndexes; // @synthesize cachedHighlightedIndexes=_cachedHighlightedIndexes;
@property(retain, nonatomic) id <MSAsset> highlightedAsset; // @synthesize highlightedAsset=_highlightedAsset;
@property(retain, nonatomic) MSAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(nonatomic) __weak id <MSAssetCollectionViewSourceItemProvider> itemProvider; // @synthesize itemProvider=_itemProvider;
@property(nonatomic) __weak id <MSAssetCollectionViewSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isLibrary; // @synthesize isLibrary=_isLibrary;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long assetType; // @synthesize assetType=_assetType;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(readonly, nonatomic) BOOL editable;
- (void)markUpdatedIndexesAsRead;
- (void)getUpdatedIndexes:(CDUnknownBlockType)arg1;
- (void)moveAssetAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)highlightAsset:(id)arg1 inCollectionView:(id)arg2;
- (void)deleteAssetAtIndexPath:(id)arg1;
- (id)nameOfAssetAtIndexPath:(id)arg1;
- (void)setName:(id)arg1 ofAssetAtIndexPath:(id)arg2;
- (id)addAsset:(id)arg1;
- (id)assetAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfAssets;
- (void)prepareCollectionView:(id)arg1;
- (void)collectionDidMutate;
- (id)pasteboardRepresentationForIndexPath:(id)arg1;
- (void)registerDraggedTypesForCollectionView:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 assetType:(unsigned long long)arg2 name:(id)arg3 title:(id)arg4 isLibrary:(BOOL)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

