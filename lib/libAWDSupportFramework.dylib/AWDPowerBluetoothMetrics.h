/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBluetoothMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int btConnectedDuration : 1; 
        unsigned int btOthersDuration : 1; 
        unsigned int btRxDuration : 1; 
        unsigned int btSleepDuration : 1; 
        unsigned int btTotalPowerMicroWatt : 1; 
        unsigned int btTxDuration : 1; 
    unsigned int _btConnectedDuration;
    unsigned int _btOthersDuration;
    unsigned int _btRxDuration;
    unsigned int _btSleepDuration;
    unsigned int _btTotalPowerMicroWatt;
    unsigned int _btTxDuration;
    } _has;
    unsigned long long _timestamp;
}

@property unsigned int btConnectedDuration;
@property unsigned int btOthersDuration;
@property unsigned int btRxDuration;
@property unsigned int btSleepDuration;
@property unsigned int btTotalPowerMicroWatt;
@property unsigned int btTxDuration;
@property bool hasBtConnectedDuration;
@property bool hasBtOthersDuration;
@property bool hasBtRxDuration;
@property bool hasBtSleepDuration;
@property bool hasBtTotalPowerMicroWatt;
@property bool hasBtTxDuration;
@property bool hasTimestamp;
@property unsigned long long timestamp;

- (unsigned int)btConnectedDuration;
- (unsigned int)btOthersDuration;
- (unsigned int)btRxDuration;
- (unsigned int)btSleepDuration;
- (unsigned int)btTotalPowerMicroWatt;
- (unsigned int)btTxDuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBtConnectedDuration;
- (bool)hasBtOthersDuration;
- (bool)hasBtRxDuration;
- (bool)hasBtSleepDuration;
- (bool)hasBtTotalPowerMicroWatt;
- (bool)hasBtTxDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBtConnectedDuration:(unsigned int)arg1;
- (void)setBtOthersDuration:(unsigned int)arg1;
- (void)setBtRxDuration:(unsigned int)arg1;
- (void)setBtSleepDuration:(unsigned int)arg1;
- (void)setBtTotalPowerMicroWatt:(unsigned int)arg1;
- (void)setBtTxDuration:(unsigned int)arg1;
- (void)setHasBtConnectedDuration:(bool)arg1;
- (void)setHasBtOthersDuration:(bool)arg1;
- (void)setHasBtRxDuration:(bool)arg1;
- (void)setHasBtSleepDuration:(bool)arg1;
- (void)setHasBtTotalPowerMicroWatt:(bool)arg1;
- (void)setHasBtTxDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
