//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class MSArtboardInspectorViewController, MSDocument, MSExportInspectorViewController, MSNormalInspector, MSPersistentAssetCollection, MSSliceInspectorViewController, NSView, NSViewController<MSInspectorChildController>;

@interface MSInspectorController : NSViewController
{
    NSView *_placeholderView;
    NSView *_alignmentView;
    NSViewController<MSInspectorChildController> *_currentController;
    MSDocument *_document;
    MSPersistentAssetCollection *_globalAssets;
    MSNormalInspector *_normalInspector;
    MSSliceInspectorViewController *_slicesInspector;
    MSArtboardInspectorViewController *_artboardInspector;
    MSExportInspectorViewController *_bottomExporter;
    unsigned long long _oldInspectorLocation;
}

@property(nonatomic) unsigned long long oldInspectorLocation; // @synthesize oldInspectorLocation=_oldInspectorLocation;
@property(retain, nonatomic) MSExportInspectorViewController *bottomExporter; // @synthesize bottomExporter=_bottomExporter;
@property(retain, nonatomic) MSArtboardInspectorViewController *artboardInspector; // @synthesize artboardInspector=_artboardInspector;
@property(retain, nonatomic) MSSliceInspectorViewController *slicesInspector; // @synthesize slicesInspector=_slicesInspector;
@property(retain, nonatomic) MSNormalInspector *normalInspector; // @synthesize normalInspector=_normalInspector;
@property(retain, nonatomic) MSPersistentAssetCollection *globalAssets; // @synthesize globalAssets=_globalAssets;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) NSViewController<MSInspectorChildController> *currentController; // @synthesize currentController=_currentController;
@property(retain, nonatomic) NSView *alignmentView; // @synthesize alignmentView=_alignmentView;
@property(retain, nonatomic) NSView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void).cxx_destruct;
- (id)inspectorController;
- (void)recursivelyDismissAllPresentedViewControllersOfViewController:(id)arg1;
- (void)viewWillDisappear;
- (void)showBorderOptionsAction:(id)arg1;
- (void)showFillOptionsAction:(id)arg1;
- (id)handlerManager;
- (id)firstTextFieldInView:(id)arg1;
- (void)focusOnFirstTextField;
- (void)reload;
- (id)sharedObjectsSection;
- (void)reloadSharedObjectsSection;
- (void)layerWithSharedStyleDidChange;
- (void)beginRenameSharedObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)changeTextLayerFont:(id)arg1;
- (void)changeColor:(id)arg1;
- (BOOL)shouldShowExportBar;
- (void)hideExportBarIfNecessary;
- (void)prepareForDisplay;
- (void)currentHandlerChanged;
- (void)layerPositionPossiblyChanged;
- (BOOL)layersAreExportable:(id)arg1;
- (void)validateAlignmentButtons;
- (void)connectAlignmentButtons;
- (void)selectionDidChangeTo:(id)arg1;
- (id)controllerForCurrentSelection:(id)arg1;
- (void)viewDidResize;
- (void)dealloc;
- (void)movedThroughHistory:(id)arg1;
- (void)shapeSelectionDidChange:(id)arg1;
- (void)awakeFromNib;
- (id)init;

@end

