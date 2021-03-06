/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CacheDeleteListener, NSString, NSXPCListenerEndpoint;

@interface CacheDeleteServiceListener : NSObject <NSXPCListenerDelegate, CacheDeleteServiceProtocol> {
    id _cancel;
    NSXPCListenerEndpoint *_endpoint;
    CacheDeleteListener *_listener;
    NSString *_name;
    id _periodic;
    id _purge;
    id _purgeable;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSXPCListenerEndpoint * endpoint;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)endpoint;
- (id)initWithName:(id)arg1 info:(id)arg2 purgeableBlock:(id)arg3 purgeBlock:(id)arg4 purgeCancelBlock:(id)arg5 periodicBlock:(id)arg6;
- (void)serviceCancelPurge;
- (void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(id)arg3;
- (void)servicePing:(id)arg1;
- (void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(id)arg3;
- (void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(id)arg3;

@end
