//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#import "GPUImageVideoCameraDelegate-Protocol.h"
#import "MMovieCompressorDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WACameraQRCodeScannerDelegate-Protocol.h"
#import "WCCameraPreviewDelegate-Protocol.h"
#import "WCCameraWriterDelegate-Protocol.h"

@class GPUImageCropFilter, NSMutableArray, NSMutableDictionary, NSString, UIImage, WACameraScanScanner, WAFilterLogic, WCCameraCapture, WCCameraPreview;
@protocol OS_dispatch_queue, WACameraLogicControllerDelegate;

@interface WACameraLogicController : NSObject <UIAlertViewDelegate, MMovieCompressorDelegate, WCCameraWriterDelegate, WCCameraPreviewDelegate, AVCaptureMetadataOutputObjectsDelegate, GPUImageVideoCameraDelegate, WACameraQRCodeScannerDelegate>
{
    WCCameraPreview *_cameraPreview;
    WAFilterLogic *_filterLogic;
    GPUImageCropFilter *_cropFilter;
    NSMutableArray *m_compressorAry;
    unsigned int m_currID;
    NSObject<OS_dispatch_queue> *m_logicQueue;
    NSMutableArray *m_recordIDAry;
    unsigned int m_currWriterID;
    _Bool isShowingPreview;
    _Bool isCameraAppear;
    _Bool bNeedOutputVideoBuffer;
    _Bool _shouldHandleScan;
    _Bool _listenFrameChange;
    _Bool _m_shouldStart;
    _Bool _m_requestAuthAccess;
    _Bool _m_isNeedResumeWXMusic;
    int _cameraState;
    id <WACameraLogicControllerDelegate> _delegate;
    NSString *_externflashType;
    WCCameraCapture *_cameraCapture;
    NSString *_m_videoPath;
    UIImage *_m_thumbImage;
    UIImage *_m_originalImage;
    NSMutableDictionary *_recorderDict;
    WACameraScanScanner *_cameraScanScanner;
    NSString *_sessionPreset;
}

+ (_Bool)isAuthStatusOK;
+ (_Bool)needCheckRequestAuthAccess;
@property(retain, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(nonatomic) _Bool m_isNeedResumeWXMusic; // @synthesize m_isNeedResumeWXMusic=_m_isNeedResumeWXMusic;
@property(retain, nonatomic) WACameraScanScanner *cameraScanScanner; // @synthesize cameraScanScanner=_cameraScanScanner;
@property(retain, nonatomic) NSMutableDictionary *recorderDict; // @synthesize recorderDict=_recorderDict;
@property(nonatomic) _Bool m_requestAuthAccess; // @synthesize m_requestAuthAccess=_m_requestAuthAccess;
@property _Bool m_shouldStart; // @synthesize m_shouldStart=_m_shouldStart;
@property int cameraState; // @synthesize cameraState=_cameraState;
@property(retain, nonatomic) UIImage *m_originalImage; // @synthesize m_originalImage=_m_originalImage;
@property(retain, nonatomic) UIImage *m_thumbImage; // @synthesize m_thumbImage=_m_thumbImage;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath=_m_videoPath;
@property(retain, nonatomic) WCCameraCapture *cameraCapture; // @synthesize cameraCapture=_cameraCapture;
@property(nonatomic) _Bool listenFrameChange; // @synthesize listenFrameChange=_listenFrameChange;
@property(retain, nonatomic) NSString *externflashType; // @synthesize externflashType=_externflashType;
@property(nonatomic) _Bool shouldHandleScan; // @synthesize shouldHandleScan=_shouldHandleScan;
@property(nonatomic) __weak id <WACameraLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bNeedOutputVideoBuffer; // @synthesize bNeedOutputVideoBuffer;
@property(nonatomic) _Bool isCameraAppear; // @synthesize isCameraAppear;
@property(nonatomic) _Bool isShowingPreview; // @synthesize isShowingPreview;
- (void).cxx_destruct;
- (void)onGotBarcode:(id)arg1 Type:(id)arg2 rawData:(id)arg3;
- (void)onGotScanResult:(id)arg1;
- (void)willOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)filterType:(unsigned long long)arg1;
- (long long)getCameraPosition;
- (void)setCameraPositon:(long long)arg1;
- (void)internalSwitchCameraIfNeedThreadSafe:(long long)arg1;
- (void)switchCameraIfNeedForPosition:(long long)arg1;
- (void)switchCamera;
- (void)didTakeDoneWithSightPath:(id)arg1 thumbImg:(id)arg2 isMuted:(_Bool)arg3;
- (void)didTakeDoneWithPicture:(id)arg1;
- (void)onTakenPicture:(id)arg1;
- (_Bool)takePicture:(id *)arg1;
- (_Bool)stopRecord;
- (_Bool)startRecord;
- (void)showPreviewViewWithSightPath:(id)arg1 thumbImg:(id)arg2;
- (void)showPreviewViewWithImage:(id)arg1;
- (_Bool)finishWriter;
- (_Bool)startWriter;
- (float)sightCaptureMaxDuration;
- (void)onCameraStop:(id)arg1;
- (void)onWriterResign;
- (void)onMovieCompressFinished:(int)arg1 moviePath:(id)arg2 withThumb:(id)arg3;
- (void)onWriterFailed:(int)arg1;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned int)arg4;
- (void)zoomFactor:(double)arg1;
- (_Bool)isSupportZoomWithFactor:(double)arg1;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (void)onMovieWriterInvalidate:(id)arg1;
- (void)movieWriter:(id)arg1 onMovieWriteFailed:(unsigned int)arg2;
- (void)movieWriter:(id)arg1 onMovieWriteFinished:(id)arg2 ret:(unsigned int)arg3;
- (_Bool)isRecording:(unsigned int)arg1;
- (void)cancelAllRecorder;
- (void)cancelRecording:(unsigned int)arg1;
- (void)stopRecording:(unsigned int)arg1;
- (unsigned int)startRecord:(struct CGSize)arg1 bitRate:(int)arg2 needCompress:(_Bool)arg3 maxVideoDuration:(float)arg4 compressAudio:(_Bool)arg5 audioBitrate:(float)arg6;
- (void)setCameraStateAndRestFlashTorch:(int)arg1;
- (void)updateCameraOrientation:(long long)arg1;
- (void)pauseCamera;
- (void)resumeCamera;
- (void)resetFlashAndTorchDueToCurrentCameraState;
- (void)removeCameraCropFilter;
- (void)setScanFreq:(double)arg1;
- (void)setScanCropRect:(struct CGRect)arg1;
- (void)setCameraCropRect:(struct CGRect)arg1;
- (void)updateCameraPreviewRect:(struct CGRect)arg1;
- (void)loadCameraLogicWithContentView:(id)arg1;
- (id)genPreviewView:(struct CGRect)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didEnterForeground;
- (void)didEnterBackground;
- (void)dealloc;
- (struct CGSize)setResolution:(id)arg1 frameRate:(int)arg2;
- (id)initWithResolution:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
