//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JSFunctionDef, NSArray, NSDictionary, NSString, WebViewSanboxPreverifyContext;

@protocol MMJSApiVerifyMgrDelegate <NSObject>

@optional
- (void)onGotWebComptData:(NSArray *)arg1 forAppId:(NSString *)arg2 forUrl:(NSString *)arg3 forContext:(WebViewSanboxPreverifyContext *)arg4;
- (void)onCheckJSAPIInvalid;
- (void)onPreverifyFinished;
- (void)kvReportJSCall:(NSString *)arg1 withParam:(NSDictionary *)arg2;
- (JSFunctionDef *)getJSFunctionDef:(NSString *)arg1;
@end
