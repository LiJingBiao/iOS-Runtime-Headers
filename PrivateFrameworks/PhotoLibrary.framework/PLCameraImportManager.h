/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class ICDeviceBrowser, NSMutableArray, NSString;

@interface PLCameraImportManager : NSObject <ICDeviceBrowserDelegate> {
    ICDeviceBrowser *_deviceBrowser;
    NSMutableArray *_importers;
    NSMutableArray *_importersToEject;
    SEL _stopListeningCallbackSelector;
    id _stopListeningCallbackTarget;
    bool_wantsToStopListening;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) NSMutableArray * importers;
@property(readonly) Class superclass;

+ (id)sharedCameraImportManager;

- (void)_cameraImporterDidFinishImporting:(id)arg1;
- (void)_stopListening;
- (void)addImporter:(id)arg1;
- (void)dealloc;
- (void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(bool)arg3;
- (void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(bool)arg3;
- (void)ejectCameras;
- (id)importerForDevice:(id)arg1 withDelegate:(id)arg2;
- (id)importerMatchingDevice:(id)arg1;
- (id)importers;
- (id)init;
- (void)removeImporter:(id)arg1;
- (void)setImporters:(id)arg1;
- (unsigned long long)startListening;
- (void)stopListening;
- (void)stopListeningWithCallbackTarget:(id)arg1 selector:(SEL)arg2;

@end
