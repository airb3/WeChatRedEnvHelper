//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont, UIImage, UIView;

@interface WCTableViewCellLeftConfig : NSObject
{
    _Bool _selected;
    _Bool _titleCenter;
    unsigned long long _mode;
    NSString *_title;
    UIColor *_titleColor;
    UIFont *_titleFont;
    NSString *_detail;
    UIColor *_detailColor;
    UIImage *_image;
    UIImage *_smallIcon;
    NSString *_badgeText;
    UIView *_customView;
    struct CGPoint _customTitleOrigin;
}

@property(nonatomic) _Bool titleCenter; // @synthesize titleCenter=_titleCenter;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(copy, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(retain, nonatomic) UIImage *smallIcon; // @synthesize smallIcon=_smallIcon;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) struct CGPoint customTitleOrigin; // @synthesize customTitleOrigin=_customTitleOrigin;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;

@end
