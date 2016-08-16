//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTDraggingInfo.h"

@class DVTDraggedImageState, NSDictionary, NSImage, NSMutableArray, NSPasteboard, NSSet, NSString, NSWindow;

@interface DVTDraggingContext : NSObject <DVTDraggingInfo>
{
    NSMutableArray *_invalidationPool;
    BOOL _draggedImageStateNeedsUpdate;
    BOOL _animatesToDestination;
    NSSet *_draggingSnapGuides;
    unsigned long long _draggingModifierFlags;
    long long _numberOfValidItemsForDrop;
    long long _draggingFormation;
    DVTDraggedImageState *_draggedImageState;
    NSWindow *_draggingDestinationWindow;
    unsigned long long _draggingSourceOperationMask;
    unsigned long long _lastDragDestinationOperationMask;
    NSImage *_draggedImage;
    NSPasteboard *_draggingPasteboard;
    NSDictionary *_draggingSourceContext;
    long long _draggingSequenceNumber;
    id _draggingSource;
    long long _springLoadingHighlight;
    struct CGSize _draggingSnapOffset;
    struct CGPoint _draggingLocation;
    struct CGPoint _draggedImageLocation;
}

@property long long springLoadingHighlight; // @synthesize springLoadingHighlight=_springLoadingHighlight;
@property(readonly) id draggingSource; // @synthesize draggingSource=_draggingSource;
@property long long draggingSequenceNumber; // @synthesize draggingSequenceNumber=_draggingSequenceNumber;
@property(retain) NSDictionary *draggingSourceContext; // @synthesize draggingSourceContext=_draggingSourceContext;
@property(readonly) NSPasteboard *draggingPasteboard; // @synthesize draggingPasteboard=_draggingPasteboard;
@property(retain) NSImage *draggedImage; // @synthesize draggedImage=_draggedImage;
@property struct CGPoint draggedImageLocation; // @synthesize draggedImageLocation=_draggedImageLocation;
@property struct CGPoint draggingLocation; // @synthesize draggingLocation=_draggingLocation;
@property unsigned long long lastDragDestinationOperationMask; // @synthesize lastDragDestinationOperationMask=_lastDragDestinationOperationMask;
@property unsigned long long draggingSourceOperationMask; // @synthesize draggingSourceOperationMask=_draggingSourceOperationMask;
@property(retain) NSWindow *draggingDestinationWindow; // @synthesize draggingDestinationWindow=_draggingDestinationWindow;
@property(retain) DVTDraggedImageState *draggedImageState; // @synthesize draggedImageState=_draggedImageState;
@property long long draggingFormation; // @synthesize draggingFormation=_draggingFormation;
@property long long numberOfValidItemsForDrop; // @synthesize numberOfValidItemsForDrop=_numberOfValidItemsForDrop;
@property BOOL animatesToDestination; // @synthesize animatesToDestination=_animatesToDestination;
@property(nonatomic) unsigned long long draggingModifierFlags; // @synthesize draggingModifierFlags=_draggingModifierFlags;
@property(nonatomic) struct CGSize draggingSnapOffset; // @synthesize draggingSnapOffset=_draggingSnapOffset;
@property(retain, nonatomic) NSSet *draggingSnapGuides; // @synthesize draggingSnapGuides=_draggingSnapGuides;
@property(nonatomic) BOOL draggedImageStateNeedsUpdate; // @synthesize draggedImageStateNeedsUpdate=_draggedImageStateNeedsUpdate;
- (void).cxx_destruct;
- (void)enumerateDraggingItemsWithOptions:(unsigned long long)arg1 forView:(id)arg2 classes:(id)arg3 searchOptions:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)invalidatePooledObjects;
- (void)invalidateObjectAtEndOfDragLoop:(id)arg1;
- (struct CGPoint)draggingLocationOnScreen;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)slideDraggedImageTo:(struct CGPoint)arg1;
- (void)_setOnDemandSpringLoadingEnabled:(BOOL)arg1;
- (BOOL)_isOnDemandSpringLoadingActivated;
- (unsigned long long)_lastDragDestinationOperation;
@property(readonly, copy) NSString *description;
- (id)initWithSource:(id)arg1 andPasteboard:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
