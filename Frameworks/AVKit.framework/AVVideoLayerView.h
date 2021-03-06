/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@class AVPlayerController, AVVideoLayerDelegate, CALayer<AVVideoLayer>;

@interface AVVideoLayerView : UIView {
    AVPlayerController *_playerController;
    CALayer<AVVideoLayer> *_videoLayer;
    AVVideoLayerDelegate *_videoLayerDelegate;
}

@property(retain) AVPlayerController * playerController;
@property(getter=isReadyForDisplay,readonly) bool readyForDisplay;
@property long long videoLayerGravity;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoRect;
@property(getter=isVideoScaled) bool videoScaled;

+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingVideoGravity;
+ (id)keyPathsForValuesAffectingVideoRect;
+ (id)keyPathsForValuesAffectingVideoScaled;

- (void).cxx_destruct;
- (bool)_isPlayingOnSecondScreen;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 videoLayer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isReadyForDisplay;
- (bool)isVideoScaled;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)playerController;
- (void)setPlayerController:(id)arg1;
- (void)setVideoLayerGravity:(long long)arg1;
- (void)setVideoScaled:(bool)arg1;
- (long long)videoLayerGravity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoRect;

@end
