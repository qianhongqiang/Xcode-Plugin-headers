//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSegmentedControl.h"

@class NSMutableArray, NSTrackingArea;

@interface DVTSegmentedControl : NSSegmentedControl
{
    NSMutableArray *_alternateImages;
    NSTrackingArea *_trackingArea;
    BOOL _bordered;
    BOOL _shouldDrawAsRollover;
    double _menuIndicatorInset;
}

+ (id)toolbarSegmentedControlWithImages:(id)arg1 trackingMode:(unsigned long long)arg2;
+ (id)toolbarSegmentedControlWithTrackingMode:(unsigned long long)arg1 images:(id)arg2 alternateImages:(id)arg3;
@property BOOL shouldDrawAsRollover; // @synthesize shouldDrawAsRollover=_shouldDrawAsRollover;
@property(getter=isBordered) BOOL bordered; // @synthesize bordered=_bordered;
@property double menuIndicatorInset; // @synthesize menuIndicatorInset=_menuIndicatorInset;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)applyDVTStyleWithTrackingMode:(unsigned long long)arg1;
- (void)setAlternateImage:(id)arg1 forSegment:(long long)arg2;
- (id)alternateImageForSegment:(long long)arg1;
- (id)_getImageInArray:(id)arg1 forSegment:(long long)arg2;
- (void)_setImage:(id)arg1 inArray:(id)arg2 forSegment:(long long)arg3;
- (void)updateTrackingAreas;
- (id)initWithFrame:(struct CGRect)arg1;
@property BOOL useAnyDrawingStyle;
@property BOOL useRadioDrawingStyle;
@property BOOL useMenuDelayForSelectedSegment;
@property BOOL useMenuDelay;

@end

