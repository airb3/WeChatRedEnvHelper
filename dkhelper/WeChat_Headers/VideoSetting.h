//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VideoSetting : NSObject
{
    NSArray *_configs;
    double _duration;
    double _unit;
}

@property(nonatomic) double unit; // @synthesize unit=_unit;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (float)screenAtElapse:(double)arg1;
- (long long)argbAtElapse:(double)arg1;
- (id)initWithJsonStr:(id)arg1;
- (id)initWithFileRes:(id)arg1;
- (id)initWithFile:(id)arg1;

@end
