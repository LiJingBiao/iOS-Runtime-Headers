/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class AVImageQueue, NSMutableArray, NSObject<AVConferencePreviewDelegate>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<VideoCaptureProtocol>, VideoAttributes;

@interface AVConferencePreviewServer : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    int _newThermalLevel;
    int _thermalLevel;
    int _thermalNotificationToken;
    NSMutableArray *activeConferences;
    NSObject<AVConferencePreviewDelegate> *appDelegate;
    NSObject<VideoCaptureProtocol> *avCapture;
    NSObject<OS_dispatch_queue> *avConferencePreviewServerConferenceQueue;
    NSObject<OS_dispatch_queue> *avConferencePreviewServerNotificationQueue;
    NSObject<OS_dispatch_queue> *avConferencePreviewServerQueue;
    NSObject<OS_dispatch_queue> *avConferencePreviewServerVariablesQueue;
    AVImageQueue *backQueue;
    boolfirstPreviewFrame;
    boolresize;
    struct __CVPixelBufferPool { } *bufferPool;
    NSObject<OS_dispatch_source> *cameraHealthMonitor;
    int captureFrameCount;
    unsigned int currentCameraID;
    int currentFrameRate;
    int currentHeight;
    int currentWidth;
    int encodedFrameCount;
    double falteredRenderingtimeStamp;
    AVImageQueue *frontQueue;
    } localExpectedLandscapeAspectRatio;
    } localExpectedPortraitAspectRatio;
    } localScreenLandscapeAspectRatio;
    } localScreenPortraitAspectRatio;
    VideoAttributes *localVideoAttributes;
    int pendingFrameRate;
    int pendingHeight;
    int pendingWidth;
    int previewFrameCount;
    struct OpaqueVTPixelTransferSession { } *transferSession;
}

@property(retain) NSObject<AVConferencePreviewDelegate> * appDelegate;

+ (id)AVConferencePreviewServerSingleton;

- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)appDelegate;
- (id)autorelease;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (unsigned int)captureCamera;
- (bool)captureVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3;
- (void)changeCameraToPendingSettingsWithReset:(bool)arg1;
- (struct __CFDictionary { }*)copyCameraColorInfo;
- (id)copyLocalScreenAttributesForVideoAttributes:(id)arg1;
- (id)copyLocalVideoAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)createVideoCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 useBackFacingCamera:(bool)arg4;
- (void)dealloc;
- (bool)deregisterForFrames:(id)arg1;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (bool)enqueueFrameToQueueFront:(bool)arg1 frame:(struct __CVBuffer { }*)arg2 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)handleAVCaptureError:(int)arg1 error:(id)arg2;
- (id)init;
- (bool)isConferenceRegisteredForFrames:(id)arg1;
- (bool)isRunningPreview;
- (struct CGSize { double x1; double x2; })localExpectedRatioForScreenOrientation:(int)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })localScreenRatioForScreenOrientation:(int)arg1;
- (id)localVideoAttributes;
- (bool)onCaptureFrame:(struct __CVBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 preview:(bool)arg3 isSwitching:(bool)arg4 cameraType:(int)arg5;
- (void)pausePreview;
- (void)previewVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3;
- (void)reconnectClientLayerFront:(bool)arg1;
- (bool)registerForFrames:(id)arg1 unpausing:(bool)arg2;
- (bool)registerForFrames:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 unpausing:(bool)arg5;
- (oneway void)release;
- (void)resetCameraToPreviewSettingsForced:(bool)arg1;
- (struct __CVBuffer { }*)resizeFrame:(struct __CVBuffer { }*)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setAppDelegate:(id)arg1;
- (bool)setCaptureCamera:(unsigned int)arg1;
- (void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 forced:(bool)arg4;
- (void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3;
- (void)setCurrentFrameRate:(int)arg1;
- (void)setFrameRatePercentage:(double)arg1;
- (void)setFrameRatePercentage:(id)arg1 percentage:(double)arg2;
- (bool)setLocalScreenAttributes:(id)arg1;
- (bool)setLocalVideoAttributes:(id)arg1;
- (unsigned int)setLocalVideoDestination:(id)arg1 facing:(bool)arg2;
- (void)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 unpausing:(bool)arg4;
- (void)startPreviewUnpausing:(bool)arg1;
- (void)stopCapture;
- (void)stopPreview;

@end
