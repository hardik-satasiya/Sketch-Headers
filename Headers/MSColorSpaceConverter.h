//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSColorConverter-Protocol.h>

@class NSColorSpace, NSString;

@interface MSColorSpaceConverter : NSObject <MSColorConverter>
{
    unsigned long long _oldColorSpace;
    unsigned long long _targetColorSpace;
    NSColorSpace *_oldNSColorSpace;
    NSColorSpace *_targetNSColorSpace;
}

@property(readonly, nonatomic) NSColorSpace *targetNSColorSpace; // @synthesize targetNSColorSpace=_targetNSColorSpace;
@property(readonly, nonatomic) NSColorSpace *oldNSColorSpace; // @synthesize oldNSColorSpace=_oldNSColorSpace;
@property(readonly, nonatomic) unsigned long long targetColorSpace; // @synthesize targetColorSpace=_targetColorSpace;
@property(readonly, nonatomic) unsigned long long oldColorSpace; // @synthesize oldColorSpace=_oldColorSpace;
- (void).cxx_destruct;
- (BOOL)shouldConvertImmutableColor:(id)arg1;
- (BOOL)shouldConvertColor:(id)arg1;
- (id)convertColor:(id)arg1;
- (id)convertImmutableColor:(id)arg1;
- (id)initForConversionFromColorSpace:(unsigned long long)arg1 to:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

