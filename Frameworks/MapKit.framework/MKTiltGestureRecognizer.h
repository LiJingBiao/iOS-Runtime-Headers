/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UITouch;

@interface MKTiltGestureRecognizer : UIPanGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    double _initialDistance;
    } _initialTouch1Point;
    } _initialTouch2Point;
    UITouch *_touch1;
    UITouch *_touch2;
}

- (void).cxx_destruct;
- (id)_activeTouchesForEvent:(id)arg1;
- (double)_distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
