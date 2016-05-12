//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSLayerTraits.h"

@class MSLayerArray, NSDictionary, NSString;

@interface MSPasteboardLayers : NSObject <MSLayerTraits>
{
    MSLayerArray *_layers;
    NSDictionary *_sharedObjects;
    NSDictionary *_symbols;
    unsigned long long _parentTraits;
    NSDictionary *_idToNameMapping;
    struct CGPoint _suggestedPosition;
}

+ (struct CGPoint)originForLayer:(id)arg1 rootIsPage:(BOOL)arg2;
+ (struct CGPoint)suggestedOriginForLayers:(id)arg1 rootIsPage:(BOOL)arg2;
+ (unsigned long long)parentTraitsForLayers:(id)arg1;
+ (id)pasteboardLayersWithLayers:(id)arg1;
+ (id)pasteboardLayersWithForeignLayers:(id)arg1;
+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
@property(retain, nonatomic) NSDictionary *idToNameMapping; // @synthesize idToNameMapping=_idToNameMapping;
@property(nonatomic) unsigned long long parentTraits; // @synthesize parentTraits=_parentTraits;
@property(nonatomic) struct CGPoint suggestedPosition; // @synthesize suggestedPosition=_suggestedPosition;
@property(retain, nonatomic) NSDictionary *symbols; // @synthesize symbols=_symbols;
@property(retain, nonatomic) NSDictionary *sharedObjects; // @synthesize sharedObjects=_sharedObjects;
@property(retain, nonatomic) MSLayerArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (struct CGRect)suggestedRect;
- (id)insertInGroup:(id)arg1 atPosition:(struct CGPoint)arg2 afterLayer:(id)arg3;
- (id)insertOnPage:(id)arg1 viewport:(id)arg2 hint:(id)arg3;
- (id)layerPositionsRelativeToUnion;
- (struct CGSize)unionSize;
- (BOOL)canBeContainedInLayer:(id)arg1;
- (unsigned long long)traits;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

