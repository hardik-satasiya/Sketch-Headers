//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSAssetLibraryController, NSArray, NSMutableDictionary;

@interface MSLibraryAssetCollectionsController : NSObject
{
    MSAssetLibraryController *_libraryController;
    NSMutableDictionary *_collectionInfoDictionary;
    NSArray *_supportedAssetTypes;
}

+ (id)lastReadAssetsDataContainer;
+ (id)dataURLForLibraryIdentifier:(id)arg1 assetKind:(unsigned long long)arg2;
+ (id)containerDataURLForLibraryIdentifier:(id)arg1;
+ (id)identifierForLibrary:(id)arg1;
+ (void)cleanupPersistedHashesNotIncludedInHelpersInBackground:(id)arg1;
+ (id)dispatchQueue;
@property(retain, nonatomic) NSArray *supportedAssetTypes; // @synthesize supportedAssetTypes=_supportedAssetTypes;
@property(retain, nonatomic) NSMutableDictionary *collectionInfoDictionary; // @synthesize collectionInfoDictionary=_collectionInfoDictionary;
@property(retain, nonatomic) MSAssetLibraryController *libraryController; // @synthesize libraryController=_libraryController;
- (void).cxx_destruct;
- (id)dataSourcesForAssetType:(unsigned long long)arg1;
- (void)refreshHelpersForLibrary:(id)arg1;
- (void)refreshAllHelpers;
- (void)reload;
- (void)libraryDidChange:(id)arg1;
- (id)allHelpers;
- (void)dealloc;
- (id)initWithAssetLibraryController:(id)arg1;

@end

