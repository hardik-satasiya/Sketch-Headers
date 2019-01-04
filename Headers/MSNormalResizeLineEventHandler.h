//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSNormalBaseEventHandler.h"

#import "MSAlignmentEngineDelegate-Protocol.h"

@class MSAlignmentEngineResult, MSNormalEventData, MSShapePathLayer, MSSnapper, NSString;

@interface MSNormalResizeLineEventHandler : MSNormalBaseEventHandler <MSAlignmentEngineDelegate>
{
    MSShapePathLayer *_layer;
    long long _pointIndex;
    MSSnapper *_layerSnapper;
    MSNormalEventData *_eventData;
    MSAlignmentEngineResult *_snapGuides;
}

@property(retain, nonatomic) MSAlignmentEngineResult *snapGuides; // @synthesize snapGuides=_snapGuides;
@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
@property(retain, nonatomic) MSSnapper *layerSnapper; // @synthesize layerSnapper=_layerSnapper;
@property(nonatomic) long long pointIndex; // @synthesize pointIndex=_pointIndex;
@property(retain, nonatomic) MSShapePathLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (struct CGPoint)alignmentEngine:(id)arg1 alignPoint:(struct CGPoint)arg2;
- (void)drawInRect:(struct CGRect)arg1 context:(id)arg2;
- (BOOL)wantsStandardSelectionControls;
- (id)cursorForRadians:(double)arg1;
- (void)displayResizeCursor;
- (void)addSnapTargetsToEngine:(id)arg1;
- (id)prepareForSnapping;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)handlerWillLoseFocus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

