//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSegmentedCell.h"

@class NSImageCell, NSPointerArray;

@interface _DVTSegmentedCell : NSSegmentedCell
{
    NSImageCell *_arrowImageCell;
    BOOL _useMenuDelay;
    BOOL _useMenuDelayForSelectedSegment;
    BOOL _useRadioDrawingStyle;
    NSPointerArray *_segmentImages;
    BOOL _useAnyDrawingStyle;
}

@property BOOL useAnyDrawingStyle; // @synthesize useAnyDrawingStyle=_useAnyDrawingStyle;
@property BOOL useRadioDrawingStyle; // @synthesize useRadioDrawingStyle=_useRadioDrawingStyle;
@property BOOL useMenuDelayForSelectedSegment; // @synthesize useMenuDelayForSelectedSegment=_useMenuDelayForSelectedSegment;
@property BOOL useMenuDelay; // @synthesize useMenuDelay=_useMenuDelay;
- (void).cxx_destruct;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawSegment:(long long)arg1 inFrame:(struct CGRect)arg2 withView:(id)arg3;
- (void)_drawMenuIndicatorForFrame:(struct CGRect)arg1 activeStyle:(BOOL)arg2 withView:(id)arg3;
- (unsigned long long)_applicableTrackingModeForSegment:(long long)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forSegment:(long long)arg2;
- (id)_adjustImage:(id)arg1 forControlSize:(unsigned long long)arg2;
- (void)setSegmentCount:(long long)arg1;
- (id)_segmentImages;
- (double)_menuDelayTimeForSegment:(long long)arg1;
- (id)init;

@end

