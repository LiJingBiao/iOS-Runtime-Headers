/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@class NSObject<OS_dispatch_queue>, SGDaemonConnection;

@interface SGSuggestionsService : NSObject {
    SGDaemonConnection *_daemonConnection;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

- (void).cxx_destruct;
- (id)_remoteSuggestionManager;
- (bool)clearCachesFully:(bool)arg1 error:(id*)arg2;
- (void)clearCachesFully:(bool)arg1 withCompletion:(id)arg2;
- (bool)confirmContact:(id)arg1 error:(id*)arg2;
- (void)confirmContact:(id)arg1 withCompletion:(id)arg2;
- (bool)confirmEvent:(id)arg1 error:(id*)arg2;
- (void)confirmEvent:(id)arg1 withCompletion:(id)arg2;
- (id)contactFromABRecordID:(int)arg1 error:(id*)arg2;
- (void)contactFromABRecordID:(int)arg1 withCompletion:(id)arg2;
- (id)contactMatchesByEmailAddress:(id)arg1 error:(id*)arg2;
- (void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(id)arg2;
- (id)contactMatchesByPhoneNumber:(id)arg1 error:(id*)arg2;
- (void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(id)arg2;
- (void)dealloc;
- (id)init;
- (bool)isEnabledWithError:(id*)arg1;
- (id)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6;
- (void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(id)arg6;
- (id)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(id)arg6;
- (bool)prepareForRealtimeExtraction:(id*)arg1;
- (void)prepareForRealtimeExtractionWithCompletion:(id)arg1;
- (bool)rejectContact:(id)arg1 error:(id*)arg2;
- (void)rejectContact:(id)arg1 withCompletion:(id)arg2;
- (bool)rejectEvent:(id)arg1 error:(id*)arg2;
- (void)rejectEvent:(id)arg1 withCompletion:(id)arg2;
- (id)relevantABRecordIDsWithLimit:(long long)arg1 error:(id*)arg2;
- (void)relevantABRecordIDsWithLimit:(long long)arg1 withCompletion:(id)arg2;
- (bool)resetConfirmationAndRejectionHistory:(id*)arg1;
- (void)resetConfirmationAndRejectionHistoryWithCompletion:(id)arg1;
- (bool)sendRTCLogs:(id*)arg1;
- (id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id)arg3;
- (id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id)arg3;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 error:(id*)arg2;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(id)arg3;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(id)arg2;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 error:(id*)arg4;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 error:(id*)arg5;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(id)arg5;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 withCompletion:(id)arg4;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 error:(id*)arg5;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 error:(id*)arg6;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(id)arg6;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 withCompletion:(id)arg5;
- (id)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5;
- (void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(id)arg5;
- (id)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(id)arg4;

@end
