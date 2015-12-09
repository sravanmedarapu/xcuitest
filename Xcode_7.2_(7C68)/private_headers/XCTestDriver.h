//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCDebugLogDelegate-Protocol.h>
#import <XCTest/XCTestDriverInterface-Protocol.h>
#import <XCTest/XCTestManager_TestsInterface-Protocol.h>

@class DTXConnection, NSMutableArray, NSString, NSUUID, NSXPCConnection, XCTestConfiguration, XCTestSuite;
@protocol OS_dispatch_queue, XCTestManager_IDEInterface, XCTestManager_ManagerInterface;

@interface XCTestDriver : NSObject <XCTestManager_TestsInterface, XCTestDriverInterface, XCDebugLogDelegate>
{
    XCTestSuite *_currentTestSuite;
    XCTestConfiguration *_currentTestConfiguration;
    CDUnknownBlockType _completionHandler;
    NSXPCConnection *_managerConnection;
    _Bool _connectionInProgress;
    _Bool _waitingToStart;
    _Bool _hasIDEConnection;
    _Bool _runningSuite;
    NSObject<OS_dispatch_queue> *_managerQueue;
    NSUUID *_sessionIdentifier;
    NSString *_sessionSocketPath;
    DTXConnection *_IDEConnection;
    id <XCTestManager_IDEInterface> _IDEProxy;
    long long _IDEProtocolVersion;
    unsigned long long _daemonProtocolVersion;
    int _daemonAvailabilityToken;
    NSMutableArray *_debugMessageBuffer;
    int _debugMessageBufferOverflow;
}

+ (id)sharedTestDriver;
@property(retain) DTXConnection *IDEConnection; // @synthesize IDEConnection=_IDEConnection;
@property long long IDEProtocolVersion; // @synthesize IDEProtocolVersion=_IDEProtocolVersion;
@property(readonly) id <XCTestManager_IDEInterface> IDEProxy; // @synthesize IDEProxy=_IDEProxy;
- (id)_IDE_startExecutingTestPlanWithProtocolVersion:(id)arg1;
- (void)_XCT_applicationWithBundleID:(id)arg1 didUpdatePID:(int)arg2 andState:(unsigned long long)arg3;
- (void)_XCT_receivedAccessibilityNotification:(int)arg1 withPayload:(id)arg2;
- (void)_checkForTestManager;
- (void)_checkManagerDaemonStateAndConnectIfAvailable;
- (void)_connectToIDEWithTransport:(id)arg1;
- (void)_connectToTestManager;
- (void)_resetManagerConnection;
- (void)_runSuite;
- (void)_softlinkDTXConnectionServices;
@property XCTestSuite *currentTestSuite; // @synthesize currentTestSuite=_currentTestSuite;
@property unsigned long long daemonProtocolVersion; // @synthesize daemonProtocolVersion=_daemonProtocolVersion;
@property _Bool hasIDEConnection; // @synthesize hasIDEConnection=_hasIDEConnection;
- (id)init;
- (void)logDebugMessage:(id)arg1;
@property(readonly) id <XCTestManager_ManagerInterface> managerProxy;
- (void)resumeAppSleep:(id)arg1;
- (void)runTestConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runTestSuite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property _Bool waitingToStart; // @synthesize waitingToStart=_waitingToStart;
- (id)suspendAppSleep;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
