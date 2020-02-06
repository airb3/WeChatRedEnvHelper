//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface EditImageUtil : MMObject
{
}

+ (struct CGSize)adjustRenderSize:(struct CGSize)arg1;
+ (id)getPrimaryColorForEntranceType:(unsigned int)arg1;
+ (id)genPreviewImageWithAsset:(id)arg1 atTime:(double)arg2;
+ (id)createBlurImageWithOriginalImage:(id)arg1 imageSize:(struct CGSize)arg2;
+ (_Bool)newEditorSwitchOn:(unsigned int)arg1;
+ (_Bool)shouldAddBlurBackgroundForHorizontalVideo:(id)arg1 entranceType:(unsigned int)arg2;
+ (_Bool)isPreviewScaleAspectToFill:(id)arg1 entranceType:(unsigned int)arg2;
+ (_Bool)isCurrentEditEntranceFromTimeLineAndGame:(unsigned int)arg1;
+ (_Bool)isCurrentEditEntranceFromStory:(unsigned int)arg1;
+ (_Bool)isCurrentEditEntranceFromTimeLine:(unsigned int)arg1;
+ (_Bool)isEditViewFullScreen:(unsigned int)arg1 editImageUIStyle:(unsigned long long)arg2;
+ (_Bool)isCurrentEditImageUIStyleModern:(unsigned long long)arg1;
+ (_Bool)isCurrentCaptureViewToEditImageUIStyleModern:(unsigned long long)arg1;
+ (_Bool)isCurrentCaptureViewUIStyleModern:(unsigned long long)arg1;
+ (unsigned long long)pickerEditImageUIStyle:(int)arg1;
+ (unsigned int)convertImagePickerSceneToEditImageScene:(int)arg1;
+ (_Bool)isCropOnlyScene:(unsigned int)arg1;
+ (_Bool)isLongPressEntrance:(unsigned int)arg1;
+ (struct CGSize)getEditImageResultSizeIfLongImage:(struct CGSize)arg1;
+ (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
+ (double)getNearByInt:(double)arg1;
+ (unsigned int)numberOfPenCountsPerRender;
+ (_Bool)isHighResolution:(struct CGRect)arg1;
+ (_Bool)isLowDevice;
+ (_Bool)isNeedSaveEditedPhoto;
+ (void)savePhotoToSystemAlbum:(id)arg1;

@end
