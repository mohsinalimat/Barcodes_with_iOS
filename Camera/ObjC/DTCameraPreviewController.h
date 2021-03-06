//
//  ViewController.h
//  Camera
//
//  Created by Oliver Drobnik on 05.11.13.
//  Copyright (c) 2013 Cocoanetics. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DTCameraPreviewController : UIViewController

- (IBAction)snap:(UIButton *)sender;
- (IBAction)switchCam:(UIButton *)sender;
- (IBAction)toggleTorch:(UIButton *)sender;

@property (weak, nonatomic) IBOutlet UIButton *switchCamButton;
@property (weak, nonatomic) IBOutlet UIButton *toggleTorchButton;
@property (weak, nonatomic) IBOutlet UIButton *snapButton;

@end
