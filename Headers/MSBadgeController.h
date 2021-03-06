//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDocument, MSDocumentWindow, NSArray;

@interface MSBadgeController : NSObject
{
    MSDocument *_document;
    NSArray *_activeActions;
}

@property(readonly, nonatomic) NSArray *activeActions; // @synthesize activeActions=_activeActions;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)refresh;
- (id)updateBadge:(id)arg1 forAction:(id)arg2;
- (id)activeBadgingActionsForController:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *activeWindowBadgingActions;
@property(readonly, nonatomic) MSDocumentWindow *documentWindow;
- (id)initWithDocument:(id)arg1;

@end

