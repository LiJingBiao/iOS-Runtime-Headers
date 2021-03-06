/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSKMediaPlayerControllerDelegate>, CADisplayLink, NSArray, NSMutableSet, NSString;

@interface TSKAnimatedGIFController : NSObject <TSKMediaPlayerController> {
    boolfastForwarding;
    boolfastReversing;
    boolmPlaying;
    double mAbsoluteCurrentTime;
    <TSKMediaPlayerControllerDelegate> *mDelegate;
    CADisplayLink *mDisplayLink;
    unsigned long long mDisplayLinkCounter;
    double mEndTime;
    NSArray *mFrames;
    double mLastDisplayUpdateTime;
    NSMutableSet *mLayers;
    float mRate;
    float mRateBeforeScrubbing;
    long long mRepeatMode;
    unsigned long long mScrubbingCount;
    struct CGImageSource { } *mSource;
    double mStartTime;
    float mVolume;
}

@property(readonly) double absoluteCurrentTime;
@property(readonly) double absoluteDuration;
@property(readonly) bool canFastForward;
@property(readonly) bool canFastReverse;
@property(readonly) bool canPlay;
@property(readonly) double currentTime;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) <TSKMediaPlayerControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) double duration;
@property double endTime;
@property(getter=isFastForwarding) bool fastForwarding;
@property(getter=isFastReversing) bool fastReversing;
@property(readonly) unsigned long long hash;
@property(readonly) struct CGImage { }* imageForCurrentTime;
@property double lastDisplayUpdateTime;
@property(getter=isPlaying) bool playing;
@property float rate;
@property(readonly) double remainingTime;
@property long long repeatMode;
@property(getter=isScrubbing,readonly) bool scrubbing;
@property double startTime;
@property(readonly) Class superclass;
@property float volume;

- (double)absoluteCurrentTime;
- (double)absoluteDuration;
- (void)addLayer:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 block:(id)arg2;
- (void)beginScrubbing;
- (bool)canFastForward;
- (bool)canFastReverse;
- (bool)canPlay;
- (void)cancelPendingSeeks;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (void)endScrubbing;
- (double)endTime;
- (struct CGImage { }*)imageForCurrentTime;
- (struct CGImage { }*)imageForTime:(double)arg1;
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (bool)isFastForwarding;
- (bool)isFastReversing;
- (bool)isPlaying;
- (bool)isScrubbing;
- (double)lastDisplayUpdateTime;
- (id)newLayer;
- (void)p_disableDisplayLink;
- (void)p_displayLinkDidTrigger:(id)arg1;
- (void)p_enableDisplayLink;
- (void)p_getAbsoluteMovieTime:(double*)arg1 shouldStopPlayback:(bool*)arg2 shouldReversePlayback:(bool*)arg3;
- (void)p_prepareFrameTimes;
- (void)p_setAbsoluteCurrentTime:(double)arg1;
- (void)p_updateDisplayLink;
- (void)p_updateLayers;
- (float)rate;
- (double)remainingTime;
- (void)removeLayer:(id)arg1;
- (void)removePeriodicTimeObserver:(id)arg1;
- (long long)repeatMode;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(id)arg3;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (void)seekBackwardByOneFrame;
- (void)seekForwardByOneFrame;
- (void)seekToBeginning;
- (void)seekToEnd;
- (void)setEndTime:(double)arg1;
- (void)setFastForwarding:(bool)arg1;
- (void)setFastReversing:(bool)arg1;
- (void)setLastDisplayUpdateTime:(double)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setRate:(float)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setStartTime:(double)arg1;
- (void)setVolume:(float)arg1;
- (double)startTime;
- (void)teardown;
- (float)volume;

@end
