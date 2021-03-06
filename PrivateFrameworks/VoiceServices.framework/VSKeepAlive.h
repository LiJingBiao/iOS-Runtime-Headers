/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class NSXPCConnection;

@interface VSKeepAlive : NSObject {
    long long _audioType;
    NSXPCConnection *_serverConnection;
    bool_active;
    bool_keepAudioSessionActive;
}

@property bool active;
@property long long audioType;
@property bool keepAudioSessionActive;

- (void).cxx_destruct;
- (void)_ensureKeepAliveMaintenance;
- (id)_remoteKeepAlive;
- (id)_serverConnection;
- (bool)active;
- (long long)audioType;
- (void)dealloc;
- (bool)keepAudioSessionActive;
- (void)setActive:(bool)arg1;
- (void)setAudioType:(long long)arg1;
- (void)setKeepAudioSessionActive:(bool)arg1;

@end
