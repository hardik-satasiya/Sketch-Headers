//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSModelObjectCommon.h>

#import <SketchModel/MSModelObject-Protocol.h>
#import <SketchModel/NSCopying-Protocol.h>

@class MSDocumentData, MSForeignObject, MSLayerGroup, MSModelObjectCacheGeneration, NSString;

@interface MSModelObject : MSModelObjectCommon <NSCopying, MSModelObject>
{
    id _cachedImmutableModelObject;
    BOOL _isFault;
    MSModelObjectCacheGeneration *_modelObjectCacheGeneration;
    MSModelObject *_parentObject;
}

+ (Class)immutableClass;
+ (BOOL)allowsFaulting;
+ (BOOL)persistsObjectID;
@property(nonatomic) BOOL isFault; // @synthesize isFault=_isFault;
@property(nonatomic) __weak MSModelObject *parentObject; // @synthesize parentObject=_parentObject;
- (void).cxx_destruct;
- (BOOL)isDescendantOfObject:(id)arg1;
@property(readonly, nonatomic) __weak MSDocumentData *documentData;
- (void)breakConnectionWith:(id)arg1;
- (id)parentGroupRecursive;
@property(readonly, nonatomic) __weak MSLayerGroup *parentGroup;
- (void)setAsParentOnChildren;
- (BOOL)matchesImmutable:(id)arg1;
@property(readonly, nonatomic) BOOL hasBeenInvalidated;
- (void)invalidateImmutableObjectAndAncestors;
- (void)invalidateImmutableObject;
- (void)invalidateModelCacheGeneration;
- (void)invalidateModelCacheGenerationForObject:(id)arg1 property:(id)arg2;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
@property(readonly, nonatomic) id immutableModelObject;
- (void)refaultAgainst:(id)arg1;
- (void)fireFaultIfNecessary;
- (void)fireFault;
@property(retain, nonatomic) MSModelObjectCacheGeneration *modelObjectCacheGeneration;
- (id)generateObjectID;
- (id)initWithImmutableModelObject:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)correctInvalidGamma;
- (void)clearCachedValueForKey:(id)arg1;
- (void)clearCache;
- (void)updateCachedValue:(id)arg1 forKey:(id)arg2;
- (id)cachedValueForKey:(id)arg1 setUsingBlock:(CDUnknownBlockType)arg2;
- (id)cachedValueForKey:(id)arg1;
@property(readonly, nonatomic) BOOL isForeign;
@property(readonly, nonatomic) MSForeignObject *foreignObject;
- (void)refaultContentsOfArray:(id)arg1 against:(id)arg2;
- (void)refaultChildrenAgainst:(id)arg1;
@property(retain, nonatomic) id cachedImmutableModelObject;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)syncPropertiesFromObject:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (id)copyWithOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)childCollaborationObjectWithID:(id)arg1 removing:(BOOL)arg2;
- (id)metadataForKey:(id)arg1;
- (void)storeMetadata:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSString *UIMetadataKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(readonly) Class superclass;

@end

