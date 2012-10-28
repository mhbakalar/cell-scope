//
//  CaptureViewController.h
//  CellScope
//
//  Created by Matthew Bakalar on 8/19/12.
//  Copyright (c) 2012 Matthew Bakalar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@class CSUserContext;

@interface CaptureViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>

@property(strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property(strong, nonatomic) CSUserContext *userContext;

@property (weak, nonatomic) IBOutlet UIView *previewLayer;

@property (nonatomic, strong) AVCaptureSession *session;
@property (nonatomic, strong) AVCaptureDevice *device;
@property (nonatomic, strong) AVCaptureDeviceInput *input;
@property (nonatomic, strong) AVCaptureVideoDataOutput *videoPreviewOutput;
@property (nonatomic, strong) AVCaptureVideoDataOutput *videoHDOutput;
@property (nonatomic, strong) AVCaptureStillImageOutput *stillOutput;

@property (nonatomic, strong) CIContext *context;

@property (weak, nonatomic) IBOutlet UIImageView *lastCaptured;

- (IBAction)captureImage:(id)sender;

- (IBAction)closeCapture:(id)sender;

@end