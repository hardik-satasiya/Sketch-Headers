//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, MSArtboardTitleRenderer, MSCGContextPool, MSFlowRenderer, MSGPUArtboardShadow, MSMemoryBuffer, MSRenderingDriver, MSTileMipLevel, NSArray, NSString, NSView;
@protocol MSGPURenderer, MSGPUTexture, MSOverlayRenderingDelegate, MSRenderingContextCacheProvider, MSTiledRendererHostView;

@interface MSTiledRenderer : NSObject
{
    MSRenderingDriver *_driver;
    BOOL _hideOverlay;
    BOOL _inFastZoom;
    BOOL _rasterisationInProgress;
    BOOL _clearOtherLevels;
    id <MSRenderingContextCacheProvider> _renderingCacheProvider;
    id <MSOverlayRenderingDelegate> _overlayRenderingDelegate;
    NSView<MSTiledRendererHostView> *_hostView;
    id <MSGPURenderer> _renderer;
    NSArray *_tileLevels;
    MSTileMipLevel *_previousLevel;
    MSMemoryBuffer *_contextMemory;
    MSMemoryBuffer *_overlayMemory;
    id <MSGPUTexture> _overlayTexture;
    MSFlowRenderer *_flowRenderer;
    MSCGContextPool *_contextPool;
    NSString *_previousPageObjectID;
    unsigned long long _layerCount;
    MSGPUArtboardShadow *_artboardShadow;
    MSArtboardTitleRenderer *_artboardTitleRenderer;
}

+ (id)preferredAcceleratorClassName;
@property(readonly, nonatomic) MSArtboardTitleRenderer *artboardTitleRenderer; // @synthesize artboardTitleRenderer=_artboardTitleRenderer;
@property(readonly, nonatomic) MSGPUArtboardShadow *artboardShadow; // @synthesize artboardShadow=_artboardShadow;
@property(nonatomic) unsigned long long layerCount; // @synthesize layerCount=_layerCount;
@property(retain, nonatomic) NSString *previousPageObjectID; // @synthesize previousPageObjectID=_previousPageObjectID;
@property(retain, nonatomic) MSCGContextPool *contextPool; // @synthesize contextPool=_contextPool;
@property BOOL clearOtherLevels; // @synthesize clearOtherLevels=_clearOtherLevels;
@property BOOL rasterisationInProgress; // @synthesize rasterisationInProgress=_rasterisationInProgress;
@property(retain, nonatomic) MSFlowRenderer *flowRenderer; // @synthesize flowRenderer=_flowRenderer;
@property(readonly, nonatomic) id <MSGPUTexture> overlayTexture; // @synthesize overlayTexture=_overlayTexture;
@property(retain, nonatomic) MSMemoryBuffer *overlayMemory; // @synthesize overlayMemory=_overlayMemory;
@property(retain, nonatomic) MSMemoryBuffer *contextMemory; // @synthesize contextMemory=_contextMemory;
@property(nonatomic) BOOL inFastZoom; // @synthesize inFastZoom=_inFastZoom;
@property(nonatomic) __weak MSTileMipLevel *previousLevel; // @synthesize previousLevel=_previousLevel;
@property(readonly, nonatomic) NSArray *tileLevels; // @synthesize tileLevels=_tileLevels;
@property(readonly, nonatomic) id <MSGPURenderer> renderer; // @synthesize renderer=_renderer;
@property(nonatomic) BOOL hideOverlay; // @synthesize hideOverlay=_hideOverlay;
@property(nonatomic) __weak NSView<MSTiledRendererHostView> *hostView; // @synthesize hostView=_hostView;
@property(nonatomic) __weak id <MSOverlayRenderingDelegate> overlayRenderingDelegate; // @synthesize overlayRenderingDelegate=_overlayRenderingDelegate;
@property(retain, nonatomic) id <MSRenderingContextCacheProvider> renderingCacheProvider; // @synthesize renderingCacheProvider=_renderingCacheProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) CALayer *layer;
- (void)beginFastZooming;
- (void)_scheduleRedraw;
- (void)_fastZoomExit;
- (void)_drawOverlayInVisibleRect:(struct CGRect)arg1 backingScaleFactor:(double)arg2 pixelViewSize:(struct CGSize)arg3 zoomValue:(double)arg4 page:(id)arg5 pageOverlayRenderOptions:(unsigned long long)arg6 overlayColors:(id)arg7;
- (id)flowDotTexture:(double)arg1;
- (id)flowTipTexture;
- (id)flowBackTexture;
- (id)flowOtherPageTexture;
- (void)_renderPageOverlayElementsForPage:(id)arg1 options:(unsigned long long)arg2 zoomLevel:(double)arg3 backingScaleFactor:(double)arg4 baseOrigin:(struct CGPoint)arg5 rect:(struct CGRect)arg6 visibleRect:(struct CGRect)arg7 overlayColors:(id)arg8;
- (void)_drawGridForGroup:(id)arg1 rect:(struct CGRect)arg2 zoom:(double)arg3 backingScaleFactor:(double)arg4 baseOrigin:(struct CGPoint)arg5;
- (void)updateContentInRect:(struct CGRect)arg1 forPage:(id)arg2 document:(id)arg3 visibleImageRect:(struct CGRect)arg4 backingScaleFactor:(double)arg5 pixelViewSize:(struct CGSize)arg6 zoomValue:(double)arg7 pixelated:(BOOL)arg8 pageOverlayRenderOptions:(unsigned long long)arg9 cacheProvider:(id)arg10 canvasColorSpace:(id)arg11 renderContentSynchronously:(BOOL)arg12 overlayColors:(id)arg13;
- (void)_doUpdateContentInRect:(struct CGRect)arg1 forPage:(id)arg2 document:(id)arg3 visibleImageRect:(struct CGRect)arg4 backingScaleFactor:(double)arg5 pixelViewSize:(struct CGSize)arg6 zoomValue:(double)arg7 pixelated:(BOOL)arg8 pageOverlayRenderOptions:(unsigned long long)arg9 cacheProvider:(id)arg10 canvasColorSpace:(id)arg11 renderContentSynchronously:(BOOL)arg12 overlayColors:(id)arg13;
- (void)_uniteDirtyRect:(struct CGRect)arg1;
- (id)_createDocumentColorSpaceWithCanvasColorSpace:(id)arg1 document:(id)arg2;
- (id)_findTileLevelForContentWithZoom:(double)arg1;
- (CDStruct_3f22a1f4)_updatePageObjectID:(id)arg1 document:(id)arg2 dirtyRect:(struct CGRect)arg3;
- (void)_removeAllTilesAndClearDirtyRegions;
- (CDStruct_3b01f0aa *)_visibleDirtyRects:(struct CGRect)arg1 totalZoom:(double)arg2 previousContentScale:(double)arg3 level:(id)arg4;
- (void)_flattenTilesInRects:(CDStruct_3b01f0aa *)arg1 forPage:(id)arg2 document:(id)arg3 backingScaleFactor:(double)arg4 zoomValue:(double)arg5 cacheProvider:(id)arg6 tiles:(id)arg7 documentColorSpace:(struct CGColorSpace *)arg8 renderContentSynchronously:(BOOL)arg9;
- (void)_rasterisationFinishedForTileLevel:(id)arg1 page:(id)arg2 document:(id)arg3;
- (void)_tileFlatteningWorker:(CDStruct_3b01f0aa *)arg1 zoomValue:(double)arg2 backingScaleFactor:(double)arg3 forPage:(id)arg4 document:(id)arg5 cacheProvider:(id)arg6 tiles:(id)arg7 contentsScale:(double)arg8 documentColorSpace:(struct CGColorSpace *)arg9;
- (void)_drawArtboardShadowsForPage:(id)arg1 visibleRect:(struct CGRect)arg2 zoom:(double)arg3;
- (void)_drawPageBackgroundElementsForPage:(id)arg1 visibleRect:(struct CGRect)arg2 zoom:(double)arg3;
- (void)_doDrawTilesInVisibleRect:(struct CGRect)arg1 hasArtboards:(BOOL)arg2 backingScaleFactor:(double)arg3 pixelViewSize:(struct CGSize)arg4 zoomValue:(double)arg5 displayPixels:(BOOL)arg6 page:(id)arg7 pageOverlayRenderOptions:(unsigned long long)arg8 tiles:(id)arg9 overlayColors:(id)arg10 canvasColorSpace:(id)arg11;
- (void)_drawTilesInVisibleRect:(struct CGRect)arg1 hasArtboards:(BOOL)arg2 backingScaleFactor:(double)arg3 pixelViewSize:(struct CGSize)arg4 zoomValue:(double)arg5 displayPixels:(BOOL)arg6 page:(id)arg7 pageOverlayRenderOptions:(unsigned long long)arg8 tiles:(id)arg9 overlayColors:(id)arg10 canvasColorSpace:(id)arg11;
- (void)_renderTilesWithTotalZoom:(double)arg1 displayPixels:(BOOL)arg2 visibleRect:(struct CGRect)arg3 pixelViewSize:(struct CGSize)arg4 tiles:(id)arg5;
- (CDStruct_75f85af1 *)_renderTileLevelWithTotalZoom:(double)arg1 displayPixels:(BOOL)arg2 visibleRect:(struct CGRect)arg3 tiles:(id)arg4 inRegion:(const CDStruct_75f85af1 *)arg5;
@property(readonly, nonatomic) MSRenderingDriver *driver;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

