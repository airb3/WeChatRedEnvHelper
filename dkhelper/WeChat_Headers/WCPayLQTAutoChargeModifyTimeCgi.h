//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@protocol WCPayLQTAutoChargeModifyTimeCgiDelegate;

@interface WCPayLQTAutoChargeModifyTimeCgi : WCPayBaseCgi
{
    id <WCPayLQTAutoChargeModifyTimeCgiDelegate> _cgiDelegate;
}

@property(nonatomic) __weak id <WCPayLQTAutoChargeModifyTimeCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1 request:(id)arg2;

@end
