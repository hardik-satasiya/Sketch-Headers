//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSDocumentReader.h>

@class MSJSONZippedUnarchiver, NSDictionary;

@interface MSDocumentZippedJSONReader : MSDocumentReader
{
    NSDictionary *_UIMetadata;
    NSDictionary *_metadata;
    MSJSONZippedUnarchiver *_unarchiver;
}

+ (long long)maximumPixelSizeForImageSource:(struct CGImageSource *)arg1 maximumSize:(struct CGSize)arg2;
@property(retain, nonatomic) MSJSONZippedUnarchiver *unarchiver; // @synthesize unarchiver=_unarchiver;
- (id)metadata;
- (id)UIMetadata;
- (void).cxx_destruct;
- (id)previewImageWithMaximumSize:(struct CGSize)arg1;
- (id)previewBitmapImageRepWithSize:(struct CGSize)arg1;
- (id)libraryPreviewImage;
- (id)previewImage;
- (id)readImmutableDataWithCorruptionDetected:(char *)arg1 error:(id *)arg2;
- (unsigned long long)validate;
- (BOOL)open:(id *)arg1;
- (BOOL)containsPreviewImage;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

