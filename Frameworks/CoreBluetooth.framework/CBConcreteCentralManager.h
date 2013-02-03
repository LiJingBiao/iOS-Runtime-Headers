/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBXpcConnection, NSMutableDictionary;

@interface CBConcreteCentralManager : CBCentralManager <CBXpcConnectionDelegate> {
    CBXpcConnection *_connection;
    BOOL _isScanning;
    NSMutableDictionary *_peripherals;
}

- (void)cancelPeripheralConnection:(id)arg1 force:(BOOL)arg2;
- (void)cancelPeripheralConnection:(id)arg1;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (void)handleConnectedPeripheralsRetrieved:(id)arg1;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handlePeripheralEvent:(id)arg1 selector:(SEL)arg2;
- (void)handlePeripheralsRetrieved:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)orphanPeripherals;
- (id)peripheralForHandle:(id)arg1 args:(id)arg2;
- (void)releasePeripheral:(id)arg1;
- (void)retainPeripheral:(id)arg1;
- (void)retrieveConnectedPeripherals;
- (void)retrievePeripherals:(id)arg1;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (void)sendMsg:(int)arg1 args:(id)arg2;
- (void)stopScan;
- (void)xpcConnection:(id)arg1 didReceiveMessage:(int)arg2 arguments:(id)arg3;
- (void)xpcConnectionDidReset:(id)arg1;

@end