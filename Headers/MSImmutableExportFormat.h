//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/_MSImmutableExportFormat.h>

@interface MSImmutableExportFormat : _MSImmutableExportFormat
{
}

+ (id)defaultNameForScale:(double)arg1;
- (BOOL)isVectorExport;
- (double)exportScaleInRect:(struct CGRect)arg1;
- (id)defaultName;
- (void)migratePropertiesFromV72OrEarlierWithUnarchiver:(id)arg1;

@end

