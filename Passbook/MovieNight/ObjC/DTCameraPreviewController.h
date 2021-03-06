//
//  DTCameraPreviewController.h
//  QRScanner
//
//  Created by Oliver Drobnik on 05.11.13.
//  Copyright (c) 2013 Cocoanetics. All rights reserved.
//

@class DTCameraPreviewController;
@class DTVideoPreviewInterestBox;

/**
 protocol for receiving updates on newly visible barcodes
 */
@protocol DTCameraPreviewControllerDelegate <NSObject>

@optional
- (void)previewController:(DTCameraPreviewController *)previewController
              didScanCode:(NSString *)code
                   ofType:(NSString *)type;

@end


@interface DTCameraPreviewController : UIViewController

- (IBAction)snap:(UIButton *)sender;
- (IBAction)switchCam:(UIButton *)sender;
- (IBAction)toggleTorch:(UIButton *)sender;

@property (weak, nonatomic) IBOutlet DTVideoPreviewInterestBox *iBox;

@property (weak, nonatomic) IBOutlet UIButton *switchCamButton;
@property (weak, nonatomic) IBOutlet UIButton *toggleTorchButton;
@property (weak, nonatomic) IBOutlet UIButton *snapButton;

// delegate that gets informed about scanned barcodes
@property (nonatomic, weak) IBOutlet
                        id <DTCameraPreviewControllerDelegate> delegate;

@end
