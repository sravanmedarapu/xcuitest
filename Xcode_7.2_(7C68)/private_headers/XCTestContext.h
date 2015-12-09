//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, XCTestContextScope;

@interface XCTestContext : NSObject
{
    _Bool _didHandleUIInterruption;
    XCTestContextScope *_currentScope;
}

+ (CDUnknownBlockType)defaultAsynchronousUIElementHandler;
- (id)addUIInterruptionMonitorWithDescription:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) XCTestContextScope *currentScope; // @synthesize currentScope=_currentScope;
- (void)dealloc;
@property _Bool didHandleUIInterruption; // @synthesize didHandleUIInterruption=_didHandleUIInterruption;
- (_Bool)handleAsynchronousUIElement:(id)arg1;
@property(readonly, copy) NSArray *handlers;
- (id)init;
- (void)performInScope:(CDUnknownBlockType)arg1;
- (void)removeUIInterruptionMonitor:(id)arg1;

@end
