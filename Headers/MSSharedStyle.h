//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/_MSSharedStyle.h>

#import <SketchModel/MSSharedStylePasting-Protocol.h>

@class MSStyle, NSString;

@interface MSSharedStyle : _MSSharedStyle <MSSharedStylePasting>
{
}

- (id)initWithName:(id)arg1 style:(id)arg2;
@property(readonly, nonatomic) MSStyle *style;
@property(readonly, nonatomic) NSString *currentObjectID_MSSharedStylePasting;
- (id)handlePasteIntoDocument:(id)arg1;
- (void)updateToMatch:(struct MSModelObject *)arg1;
- (void)resetReferencingInstances;
- (id)allInstances;
- (id)allLayersInstances;

@end

