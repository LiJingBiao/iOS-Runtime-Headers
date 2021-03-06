/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDClientContext, CKDOperation, NSDate, NSObject<OS_dispatch_group>, NSOperationQueue, NSString;

@interface CKDPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> *_group;
    CKDOperation *_realOperation;
    NSDate *_startDate;
    NSOperationQueue *_targetOperationQueue;
    bool_isExecuting;
    bool_isFinished;
}

@property(readonly) CKDClientContext * context;
@property bool isExecuting;
@property bool isFinished;
@property(readonly) NSString * operationID;
@property(readonly) CKDOperation * realOperation;
@property(readonly) NSString * sectionID;
@property(retain) NSDate * startDate;
@property(readonly) NSOperationQueue * targetOperationQueue;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)cancel;
- (id)ckShortDescription;
- (id)context;
- (id)description;
- (id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (id)operationID;
- (id)realOperation;
- (id)sectionID;
- (void)setIsExecuting:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)start;
- (id)startDate;
- (id)targetOperationQueue;

@end
