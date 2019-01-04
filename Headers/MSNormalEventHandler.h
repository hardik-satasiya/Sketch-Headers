//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSNormalBaseEventHandler.h"

#import "MSDragLayerToolUserInterface-Protocol.h"
#import "MSGestureRecognizerDelegate-Protocol.h"

@class MSDragToMoveOrCopyGestureRecognizer, MSDragToSelectGestureRecognizer, MSLayer, MSLayerDragController, MSLayerMeasurementRenderer, MSNormalEventContextualMenuBuilder, MSNormalEventData, MSOpacityKeyboardShortcutRecognizer, NSObject, NSSet, NSString;
@protocol MSHoverableItem;

@interface MSNormalEventHandler : MSNormalBaseEventHandler <MSGestureRecognizerDelegate, MSDragLayerToolUserInterface>
{
    BOOL _ignoreNextKeyDownEventUntilModifiersChange;
    MSNormalEventData *_eventData;
    MSLayerMeasurementRenderer *_measurementRenderer;
    NSObject<MSHoverableItem> *_highlightedItem;
    MSNormalEventContextualMenuBuilder *_menuBuilder;
    MSOpacityKeyboardShortcutRecognizer *_opacityShortcutRecognizer;
    NSSet *_duplicatedObjectIDs;
    MSDragToSelectGestureRecognizer *_selectionGestureRecognizer;
    MSDragToMoveOrCopyGestureRecognizer *_dragGestureRecognizer;
    MSLayerDragController *_dragController;
    MSLayer *_activeLayer;
    struct CGVector _duplicateOffset;
}

@property(retain, nonatomic) MSLayer *activeLayer; // @synthesize activeLayer=_activeLayer;
@property(retain, nonatomic) MSLayerDragController *dragController; // @synthesize dragController=_dragController;
@property(readonly, nonatomic) MSDragToMoveOrCopyGestureRecognizer *dragGestureRecognizer; // @synthesize dragGestureRecognizer=_dragGestureRecognizer;
@property(readonly, nonatomic) MSDragToSelectGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(copy, nonatomic) NSSet *duplicatedObjectIDs; // @synthesize duplicatedObjectIDs=_duplicatedObjectIDs;
@property(nonatomic) struct CGVector duplicateOffset; // @synthesize duplicateOffset=_duplicateOffset;
@property(readonly, nonatomic) MSOpacityKeyboardShortcutRecognizer *opacityShortcutRecognizer; // @synthesize opacityShortcutRecognizer=_opacityShortcutRecognizer;
@property(retain, nonatomic) MSNormalEventContextualMenuBuilder *menuBuilder; // @synthesize menuBuilder=_menuBuilder;
@property(retain, nonatomic) NSObject<MSHoverableItem> *highlightedItem; // @synthesize highlightedItem=_highlightedItem;
@property(readonly, nonatomic) MSLayerMeasurementRenderer *measurementRenderer; // @synthesize measurementRenderer=_measurementRenderer;
@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldAttemptToRecognizeAtPoint:(struct CGPoint)arg2 modifierFlags:(unsigned long long)arg3;
- (void)zoomValueWillChangeTo:(double)arg1;
- (void)selectionDidChangeTo:(id)arg1;
- (void)currentPageDidChange;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (void)cut:(id)arg1;
- (BOOL)layerCanBeSelected:(id)arg1;
- (unsigned long long)numberOfSelectableLayers:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)tabInForwardDirection:(BOOL)arg1;
- (void)changeColor:(id)arg1;
- (void)deleteNormalLayers:(id)arg1;
- (void)delete:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)menu;
- (void)selectAll:(id)arg1;
- (void)dragToSelect:(id)arg1;
- (void)ignoreNextKeyDownEventUntilModifiersChange;
- (void)setUndoActionName:(id)arg1;
- (void)selectLayers:(id)arg1;
- (void)layerDragged:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 context:(id)arg2;
- (void)drawOutlineForShapeChild:(id)arg1;
- (void)drawSelectedShapePathLayers;
- (void)drawMultipleSelection:(id)arg1;
- (BOOL)shouldDrawSelectionForLayer:(id)arg1;
- (void)drawLayerHighlight:(id)arg1;
- (void)drawLayerSelection;
- (void)duplicate:(id)arg1;
- (void)keyDownMoveCanvasIncremental:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)keyDownMoveToEndOfCanvas:(unsigned short)arg1;
- (void)keyDownMoveCanvas:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)flashSnapsForLayer:(id)arg1;
- (void)opacityShortcutRecognized:(id)arg1;
- (void)keyDownResizeLayers:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (BOOL)layersAreNotIntersectingTheirArtboards:(id)arg1;
- (void)moveLayersFromArtboardToParentPage:(id)arg1;
- (void)moveLayers:(id)arg1 toArtboard:(id)arg2;
- (id)parentArtboardWeCanMoveLayersTo:(id)arg1;
- (void)moveLayersOnOrOffArtboard:(id)arg1;
- (void)keyDownMoveLayers:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)cancelOperation:(id)arg1;
- (id)artboardsInReadingOrder;
- (id)currentFocussedArtboard;
- (struct CGRect)artboardRectInViewCoordinates:(id)arg1 withScrollOrigin:(struct CGPoint)arg2;
- (struct CGRect)artboardRectInViewCoordinates:(id)arg1;
- (void)focusOnArtboard:(id)arg1;
- (void)moveToNextArtboard;
- (void)moveToPreviousArtboard;
- (void)keyDown:(id)arg1;
- (void)trackMouse:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (BOOL)isMouseHoveringMultipleSelectedLayerCorner:(struct CGPoint)arg1;
- (long long)multipleSelectedLayerCornerAtPoint:(struct CGPoint)arg1;
- (BOOL)isMouse:(struct CGPoint)arg1 hoveringCornerOfLayer:(id)arg2 modiferFlags:(unsigned long long)arg3;
- (BOOL)isMouseHoveringLayerCorner:(struct CGPoint)arg1;
- (BOOL)shouldNotChangeSelectionForFlags:(unsigned long long)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseExited;
- (void)selectLayer:(id)arg1;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)layerDoubleClicked:(id)arg1;
- (void)enterResizeModeForLayers:(id)arg1 handle:(long long)arg2 mouse:(struct CGPoint)arg3 clickCount:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (void)enterResizeModeForLine:(id)arg1 handle:(long long)arg2 mouse:(struct CGPoint)arg3 clickCount:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (void)enterRotateModeWithMouse:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)toolbarIdentifier;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

