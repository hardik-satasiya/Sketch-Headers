//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableModelObject.h"

@class MSImmutableArray, MSImmutableArray<MSArray>, MSImmutableAssetCollection, MSImmutableAssetCollection<MSAssetCollection>, MSImmutableSharedStyleContainer, MSImmutableSharedStyleContainer<MSSharedStyleContainer>, MSImmutableSharedTextStyleContainer, MSImmutableSharedTextStyleContainer<MSSharedTextStyleContainer>, MSImmutableSymbolContainer, MSImmutableSymbolContainer<MSSymbolContainer>, NSDictionary, NSString;

@interface _MSImmutableDocumentData : MSImmutableModelObject
{
    NSString *_cloudShareID;
    NSString *_cloudShareURL;
    NSString *_cloudUserID;
    unsigned long long _currentPageIndex;
    BOOL _enableLayerInteraction;
    BOOL _enableSliceInteraction;
    NSDictionary *_userInfo;
    MSImmutableAssetCollection *_assets;
    MSImmutableSharedStyleContainer *_layerStyles;
    MSImmutableSymbolContainer *_layerSymbols;
    MSImmutableSharedTextStyleContainer *_layerTextStyles;
    MSImmutableArray *_pages;
}

+ (Class)mutableClass;
@property(retain, nonatomic) MSImmutableArray<MSArray> *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) MSImmutableSharedTextStyleContainer<MSSharedTextStyleContainer> *layerTextStyles; // @synthesize layerTextStyles=_layerTextStyles;
@property(retain, nonatomic) MSImmutableSymbolContainer<MSSymbolContainer> *layerSymbols; // @synthesize layerSymbols=_layerSymbols;
@property(retain, nonatomic) MSImmutableSharedStyleContainer<MSSharedStyleContainer> *layerStyles; // @synthesize layerStyles=_layerStyles;
@property(retain, nonatomic) MSImmutableAssetCollection<MSAssetCollection> *assets; // @synthesize assets=_assets;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) BOOL enableSliceInteraction; // @synthesize enableSliceInteraction=_enableSliceInteraction;
@property(nonatomic) BOOL enableLayerInteraction; // @synthesize enableLayerInteraction=_enableLayerInteraction;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) NSString *cloudUserID; // @synthesize cloudUserID=_cloudUserID;
@property(retain, nonatomic) NSString *cloudShareURL; // @synthesize cloudShareURL=_cloudShareURL;
@property(copy, nonatomic) NSString *cloudShareID; // @synthesize cloudShareID=_cloudShareID;
- (void).cxx_destruct;
- (id)keyPathsDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)pagesGeneric;
- (id)layerTextStylesGeneric;
- (id)layerSymbolsGeneric;
- (id)layerStylesGeneric;
- (id)assetsGeneric;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

