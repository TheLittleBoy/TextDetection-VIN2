//
//  VINDetectionViewController.h
//  TextDetection-VIN2
//
//  Created by Mac on 2020/8/11.
//  Copyright © 2020 🚗. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol VINDetectionViewControllerDelegate <NSObject>

/**
 识别成功之后，点击完成按钮的回调

 @param result VIN码
 */
- (void)recognitionComplete:(NSString *)result;

@end

/**
 VIN 识别
 */
@interface VINDetectionViewController : UIViewController

@property(nonatomic, weak) id<VINDetectionViewControllerDelegate> delegate;

@end
