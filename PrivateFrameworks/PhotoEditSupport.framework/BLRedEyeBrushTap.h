/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class NSDictionary;

@interface BLRedEyeBrushTap : AutoEncodeDecodeObject {
    struct CGPoint { 
        double x; 
        double y; 
    int _destinationWidth;
    NSDictionary *_eyeRepairData;
    } _point;
    double _timestamp;
}

@property int destinationWidth;
@property(retain) NSDictionary * eyeRepairData;
@property struct CGPoint { double x1; double x2; } point;
@property double timestamp;

- (void)dealloc;
- (int)destinationWidth;
- (id)eyeRepairData;
- (id)init;
- (id)keysToEncode;
- (struct CGPoint { double x1; double x2; })point;
- (void)setDestinationWidth:(int)arg1;
- (void)setEyeRepairData:(id)arg1;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
