//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSLayer, MSOverridePoint, MSSymbolMaster;

@interface MSOverrideHoverContainer : NSObject
{
    MSSymbolMaster *_master;
    MSOverridePoint *_overridePoint;
}

@property(readonly, nonatomic) MSOverridePoint *overridePoint; // @synthesize overridePoint=_overridePoint;
- (void).cxx_destruct;
- (BOOL)matchesLayerListNode:(id)arg1;
@property(readonly, nonatomic) MSLayer *hoveredLayer;
- (BOOL)canBeHoveredOnPage:(id)arg1;
- (id)highlightPathForOverride:(id)arg1 inPath:(id)arg2 withDocument:(id)arg3;
- (id)highlightPathForAffectedLayer;
- (id)hoverItemsWithColor:(struct CGColor *)arg1;
- (id)initWith:(id)arg1 inMaster:(id)arg2;

@end

