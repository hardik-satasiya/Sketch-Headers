//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSLayerTraits-Protocol.h>

@class MSLayoutGrid, MSRulerData, MSSimpleGrid;

@protocol MSRootLayer <MSLayerTraits>
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) struct CGRect contentBounds;
@property(nonatomic) struct CGPoint rulerBase;
@property(copy, nonatomic) MSRulerData *verticalRulerData;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(copy, nonatomic) MSSimpleGrid *grid;
@end

