//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XCUIDevice : NSObject
{
}

+ (id)sharedDevice;
- (void)_dispatchEventWithPage:(unsigned int)arg1 usage:(unsigned int)arg2 duration:(double)arg3;
- (void)_silentPressButton:(long long)arg1;
- (void)holdHomeButtonForDuration:(double)arg1;
@property(nonatomic) long long orientation;
- (void)pressButton:(long long)arg1;
- (void)pressLockButton;

@end
