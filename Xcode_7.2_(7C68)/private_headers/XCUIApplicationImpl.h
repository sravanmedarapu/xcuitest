//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XCAccessibilityElement, XCUIApplicationProcess;

@interface XCUIApplicationImpl : NSObject
{
    NSString *_path;
    NSString *_bundleID;
    XCUIApplicationProcess *_currentProcess;
}

- (void)_waitForLaunchProgressViaProxy:(id)arg1;
- (void)_waitForLaunchTokenFromReceipt:(id)arg1;
@property(readonly) XCAccessibilityElement *accessibilityElement;
@property(readonly, copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) XCUIApplicationProcess *currentProcess; // @synthesize currentProcess=_currentProcess;
- (void)dealloc;
- (id)initWithPath:(id)arg1 bundleID:(id)arg2;
- (void)launchWithArguments:(id)arg1 environment:(id)arg2 usingXcode:(_Bool)arg3;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
@property(nonatomic) int processID;
@property(nonatomic) unsigned long long state;
- (void)terminate;
- (void)waitForQuiescence;
- (void)waitForViewControllerViewDidDisappearWithTimeout:(double)arg1;

@end

