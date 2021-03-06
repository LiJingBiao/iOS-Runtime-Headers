/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <_PLImageLoadingAsset>, NSObject<OS_dispatch_group>, NSString, PHImageManagerRequest, PLCPLDownloadContext, PLPreheatItem;

@interface PHImageManagerRequest : NSObject {
    PLCPLDownloadContext *_CPLDownloadContext;
    NSObject<OS_dispatch_group> *_CPLDownloadWaitGroup;
    <_PLImageLoadingAsset> *_asset;
    NSString *_assetUUID;
    id _cancellationHandler;
    long long _cloudSharedAssetPlaceholderKind;
    NSString *_debugFilename;
    id _domain;
    PHImageManagerRequest *_nextRequest;
    long long _originalImageOrientation;
    NSString *_pathForAdjustmentFile;
    int _registrationRefCount;
    int _requestID;
    PLPreheatItem *_transientPreheatlItem;
    bool_CPLDownloadDegraded;
    bool_cancelled;
    bool_isCloudSharedAsset;
    bool_isPartOfBurst;
}

@property(retain) PLCPLDownloadContext * CPLDownloadContext;
@property bool CPLDownloadDegraded;
@property(retain) NSObject<OS_dispatch_group> * CPLDownloadWaitGroup;
@property(readonly) <_PLImageLoadingAsset> * asset;
@property(readonly) NSString * assetUUID;
@property(copy) id cancellationHandler;
@property(readonly) long long cloudSharedAssetPlaceholderKind;
@property(readonly) NSString * debugFilename;
@property(readonly) id domain;
@property(readonly) bool isCloudSharedAsset;
@property(readonly) bool isPartOfBurst;
@property(readonly) bool isVideo;
@property(retain) PHImageManagerRequest * nextRequest;
@property(readonly) NSString * pathForAdjustmentFile;
@property(readonly) int registrationRefCount;
@property(readonly) int requestID;
@property(retain) PLPreheatItem * transientPreheatlItem;

- (void).cxx_destruct;
- (id)CPLDownloadContext;
- (bool)CPLDownloadDegraded;
- (id)CPLDownloadWaitGroup;
- (id)asset;
- (id)assetUUID;
- (bool)atomicDecrementRegistrationRefCountIfOne;
- (bool)atomicIncrementRegistrationRefCountIfZero;
- (id)cancellationHandler;
- (void)clearResultHandler;
- (void)cloneIDAndResultHandlerFromRequest:(id)arg1;
- (long long)cloudSharedAssetPlaceholderKind;
- (id)debugFilename;
- (int)decrementRegistrationRefCount;
- (id)domain;
- (int)incrementRegistrationRefCount;
- (id)init;
- (id)initRequestWithAsset:(id)arg1 domain:(id)arg2;
- (bool)isCancelled;
- (bool)isCloudSharedAsset;
- (bool)isPartOfBurst;
- (bool)isVideo;
- (id)nextRequest;
- (long long)originalImageOrientation;
- (id)pathForAdjustmentFile;
- (int)registrationRefCount;
- (int)requestID;
- (void)setCPLDownloadContext:(id)arg1;
- (void)setCPLDownloadDegraded:(bool)arg1;
- (void)setCPLDownloadWaitGroup:(id)arg1;
- (void)setCancellationHandler:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setNextRequest:(id)arg1;
- (void)setTransientPreheatlItem:(id)arg1;
- (id)transientPreheatlItem;

@end
