/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLCloudPhotoLibraryManager;

@interface PLCloudSystemStartedTrigger : PLCloudTrigger {
    PLCloudPhotoLibraryManager *_cloudLibraryManager;
    bool_activated;
}

@property(retain,readonly) PLCloudPhotoLibraryManager * cloudLibraryManager;

+ (id)sharedInstance;
+ (void)triggerWithCloudLibraryManager:(id)arg1;

- (void)activate;
- (id)cloudLibraryManager;
- (void)setCloudLibraryManager:(id)arg1;
- (void)start;

@end
