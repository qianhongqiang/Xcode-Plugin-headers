//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray;

@interface DVTPathView : NSView
{
    double *_rawLineDashPattern;
    unsigned long long _rawLineDashPatternCount;
    struct CGPath *_cgPath;
    BOOL _usesEvenOddFillRule;
    int _lineCapStyle;
    int _lineJoinStyle;
    double _lineWidth;
    double _miterLimit;
    double _flatness;
    NSArray *_lineDashPattern;
    double _lineDashPhase;
}

@property double lineDashPhase; // @synthesize lineDashPhase=_lineDashPhase;
@property(copy, nonatomic) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property BOOL usesEvenOddFillRule; // @synthesize usesEvenOddFillRule=_usesEvenOddFillRule;
@property double flatness; // @synthesize flatness=_flatness;
@property double miterLimit; // @synthesize miterLimit=_miterLimit;
@property int lineJoinStyle; // @synthesize lineJoinStyle=_lineJoinStyle;
@property int lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) struct CGPath *cgPath; // @synthesize cgPath=_cgPath;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGPath *)_newScaledCGPath;
- (void)deriveSettingsFromPath:(id)arg1;
- (void)updateConstraints;
- (void)dealloc;

@end

