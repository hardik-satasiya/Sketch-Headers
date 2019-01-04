//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCell.h>

@interface NSCell (Inspector)
+ (void)drawInspectorButtonImage:(id)arg1 centeredInRect:(struct CGRect)arg2 withColor:(id)arg3;
+ (id)inspectorAccentIconColorForCellHighlighted:(BOOL)arg1;
+ (id)inspectorAccentColorForCellHighlighted:(BOOL)arg1;
+ (id)inspectorIconColorForCellEnabled:(BOOL)arg1 highlighted:(BOOL)arg2;
- (struct CGRect)inspectorFocusRingMaskBoundsForFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInspectorFocusRingMaskWithWithPath:(id)arg1;
- (void)drawInspectorTextFieldBackgroundWithPath:(id)arg1;
- (void)drawInspectorButtonPath:(id)arg1 accented:(BOOL)arg2 highlighted:(BOOL)arg3;
- (void)drawInspectorStatelessControlImage:(id)arg1 centeredInRect:(struct CGRect)arg2;
- (void)drawInspectorButtonImage:(id)arg1 centeredInRect:(struct CGRect)arg2 accented:(BOOL)arg3 accentsImage:(BOOL)arg4;
- (void)drawInspectorButtonImage:(id)arg1 centeredInRect:(struct CGRect)arg2 accented:(BOOL)arg3;
- (void)drawInspectorButtonImage:(id)arg1 centeredInRect:(struct CGRect)arg2;
- (id)currentInspectorAccentColor;
- (id)currentInspectorAccentedIconColor;
- (id)currentInspectorIconColor;
@end

