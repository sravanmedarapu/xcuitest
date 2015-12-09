//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSInvocation, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, XCTestCaseRun, XCTestContext;
@protocol OS_dispatch_source;

@interface _XCTestCaseImplementation : NSObject
{
    NSInvocation *_invocation;
    XCTestCaseRun *_testCaseRun;
    _Bool _continueAfterFailure;
    NSMutableSet *_expectations;
    NSMutableArray *_fulfillments;
    NSObject<OS_dispatch_source> *_timeoutSource;
    double _timeoutDuration;
    _Bool _waiting;
    CDUnknownBlockType _completionHandler;
    NSArray *_performanceMetricIDs;
    NSArray *_activePerformanceMetricIDs;
    NSMutableDictionary *_perfMetricDataForID;
    unsigned long long _startWallClockTime;
    struct time_value _startUserTime;
    struct time_value _startSystemTime;
    unsigned long long _measuringIteration;
    _Bool _isMeasuringMetrics;
    _Bool _didMeasureMetrics;
    _Bool _didStartMeasuring;
    _Bool _didStopMeasuring;
    NSString *_filePathForUnexpectedFailure;
    unsigned long long _lineNumberForUnexpectedFailure;
    unsigned long long _callAddressForCurrentWait;
    NSArray *_callAddressesForLastCreatedExpectation;
    long long _runLoopNestingCount;
    NSMutableArray *_failureRecords;
    _Bool _shouldHaltWhenReceivesControl;
    _Bool _shouldIgnoreSubsequentFailures;
    NSMutableArray *_activityRecordStack;
    XCTestContext *_testContext;
}

@property(copy) NSArray *activePerformanceMetricIDs; // @synthesize activePerformanceMetricIDs=_activePerformanceMetricIDs;
@property(retain, nonatomic) NSMutableArray *activityRecordStack; // @synthesize activityRecordStack=_activityRecordStack;
- (void)addExpectation:(id)arg1;
@property unsigned long long callAddressForCurrentWait; // @synthesize callAddressForCurrentWait=_callAddressForCurrentWait;
@property(copy) NSArray *callAddressesForLastCreatedExpectation; // @synthesize callAddressesForLastCreatedExpectation=_callAddressesForLastCreatedExpectation;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property _Bool continueAfterFailure; // @synthesize continueAfterFailure=_continueAfterFailure;
- (void)dealloc;
@property _Bool didMeasureMetrics; // @synthesize didMeasureMetrics=_didMeasureMetrics;
@property _Bool didStartMeasuring; // @synthesize didStartMeasuring=_didStartMeasuring;
@property _Bool didStopMeasuring; // @synthesize didStopMeasuring=_didStopMeasuring;
@property(retain, nonatomic) NSMutableSet *expectations; // @synthesize expectations=_expectations;
@property(retain, nonatomic) NSMutableArray *failureRecords; // @synthesize failureRecords=_failureRecords;
@property(copy) NSString *filePathForUnexpectedFailure; // @synthesize filePathForUnexpectedFailure=_filePathForUnexpectedFailure;
@property(retain, nonatomic) NSMutableArray *fulfillments; // @synthesize fulfillments=_fulfillments;
- (id)init;
@property(retain) NSInvocation *invocation; // @synthesize invocation=_invocation;
@property _Bool isMeasuringMetrics; // @synthesize isMeasuringMetrics=_isMeasuringMetrics;
@property unsigned long long lineNumberForUnexpectedFailure; // @synthesize lineNumberForUnexpectedFailure=_lineNumberForUnexpectedFailure;
@property unsigned long long measuringIteration; // @synthesize measuringIteration=_measuringIteration;
@property(retain) NSMutableDictionary *perfMetricDataForID; // @synthesize perfMetricDataForID=_perfMetricDataForID;
@property(copy) NSArray *performanceMetricIDs; // @synthesize performanceMetricIDs=_performanceMetricIDs;
- (void)resetExpectations;
@property long long runLoopNestingCount; // @synthesize runLoopNestingCount=_runLoopNestingCount;
@property _Bool shouldHaltWhenReceivesControl; // @synthesize shouldHaltWhenReceivesControl=_shouldHaltWhenReceivesControl;
@property _Bool shouldIgnoreSubsequentFailures; // @synthesize shouldIgnoreSubsequentFailures=_shouldIgnoreSubsequentFailures;
@property struct time_value startSystemTime; // @synthesize startSystemTime=_startSystemTime;
@property struct time_value startUserTime; // @synthesize startUserTime=_startUserTime;
@property unsigned long long startWallClockTime; // @synthesize startWallClockTime=_startWallClockTime;
@property(retain) XCTestCaseRun *testCaseRun; // @synthesize testCaseRun=_testCaseRun;
@property double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
@property(nonatomic) NSObject<OS_dispatch_source> *timeoutSource; // @synthesize timeoutSource=_timeoutSource;
@property _Bool waiting; // @synthesize waiting=_waiting;
@property(readonly) XCTestContext *testContext; // @synthesize testContext=_testContext;

@end

