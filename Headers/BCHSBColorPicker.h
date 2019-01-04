//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import "BCColorPreviewDelegate-Protocol.h"
#import "BCMagnifierButtonDelegate-Protocol.h"

@class BCAlphaColorPicker, BCColorPreview, BCHueColorPicker, BCMagnifierButton, BCSaturationBrightnessColorPicker, MSColor, NSString;
@protocol BCHSBColorPickerDelegate;

@interface BCHSBColorPicker : NSControl <BCColorPreviewDelegate, BCMagnifierButtonDelegate>
{
    long long ignoreColorActionsCounter;
    BOOL _displaysMultipleValues;
    id <BCHSBColorPickerDelegate> _delegate;
    BCSaturationBrightnessColorPicker *_sbPickerView;
    BCHueColorPicker *_hPickerView;
    BCAlphaColorPicker *_aPickerView;
    BCColorPreview *_colorPreviewView;
    BCMagnifierButton *_magnifierButton;
    id _bc_target;
    SEL _bc_action;
}

@property SEL bc_action; // @synthesize bc_action=_bc_action;
@property(nonatomic) __weak id bc_target; // @synthesize bc_target=_bc_target;
@property(nonatomic) BOOL displaysMultipleValues; // @synthesize displaysMultipleValues=_displaysMultipleValues;
@property(retain, nonatomic) BCMagnifierButton *magnifierButton; // @synthesize magnifierButton=_magnifierButton;
@property(retain, nonatomic) BCColorPreview *colorPreviewView; // @synthesize colorPreviewView=_colorPreviewView;
@property(retain, nonatomic) BCAlphaColorPicker *aPickerView; // @synthesize aPickerView=_aPickerView;
@property(retain, nonatomic) BCHueColorPicker *hPickerView; // @synthesize hPickerView=_hPickerView;
@property(retain, nonatomic) BCSaturationBrightnessColorPicker *sbPickerView; // @synthesize sbPickerView=_sbPickerView;
@property(nonatomic) __weak id <BCHSBColorPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setColor:(id)arg1 ignoringFields:(id)arg2;
- (void)setColor:(id)arg1 multipleValues:(BOOL)arg2;
@property(copy, nonatomic) MSColor *color; // @dynamic color;
- (id)flexibleColor;
- (id)documentColorSpaceForClient:(id)arg1;
- (id)previewColorSpaceForClient:(id)arg1;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateColorPreviewView;
- (void)saturationBrightnessChanged:(id)arg1;
- (void)alphaChanged:(id)arg1;
- (void)hueChanged:(id)arg1;
- (void)magnifierAction:(id)arg1;
- (void)systemColorPanelDidChangeColor:(id)arg1;
- (void)awakeFromNib;
- (void)constructSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (id)target;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

