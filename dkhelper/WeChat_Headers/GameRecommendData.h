//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface GameRecommendData : MMObject <PBCoding>
{
    NSString *moduleTitle;
    NSArray *recommendList;
}

+ (void)initialize;
+ (void)PBArrayAdd_recommendList;
+ (void)PBArrayAdd_moduleTitle;
@property(retain, nonatomic) NSArray *recommendList; // @synthesize recommendList;
@property(retain, nonatomic) NSString *moduleTitle; // @synthesize moduleTitle;
- (void).cxx_destruct;
- (void)parse:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
