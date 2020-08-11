//
// Created by chenxiaoyu on 2018/4/28.
// Copyright (c) 2018 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>
#import <CoreML/CoreML.h>

#import "EasyDLDefine.h"

@class VNCoreMLModel;

@interface EasyDLModelRawData : NSObject

@property float *data;
@property uint64_t height;
@property uint64_t width;

@end


@interface EasyDLModel : NSObject

@property(nonatomic, assign) EEasyDLModelType modelType;
@property(nonatomic, assign) EEasyDLEngineKind engineKind;


- (instancetype)init __attribute__((unavailable("use initModel: instead")));


- (NSArray *)detectRawImage:(NSData *)data withFilterScore:(CGFloat)score andError:(NSError **)err;

/**
 * 检测图像
 * @param image 待检测图像
 * @param score 只返回得分高于score的结果(0 ~ 1); 如果不提供，则设置为推荐阈值。
 * @return 成功返回识别结果，NSArray的元素为对应模型的结果类型；失败返回nil，并在err中说明错误原因
 */
- (NSArray *)detectUIImage:(UIImage *)image
           withFilterScore:(CGFloat)score
                  andError:(NSError **)err;

- (NSArray *)detectUIImage:(UIImage *)image
                 withError:(NSError **)err;

/**
 * 在线接口，请务必在在生成模型时勾选离在线模式
 * @param image 待检测图像
 * @param score 只返回得分高于score的结果(0 ~ 1)
 * @param err  成功返回识别结果，NSArray的元素为对应模型的结果类型；失败返回nil，并在err中说明错误原因
 * @return
 */
- (NSError *)detectImageOnline:(UIImage *)image
               withFilterScore:(CGFloat)score
             andSuccessHandler:(void (^)(NSArray *res))successHandler
                andFailHandler:(void (^)(NSError *error))failHandler;
////----------------------------------------------------------------///

/**
 *
 * @param resourceDir 资源文件夹
 * @param err nil if success
 */
- (instancetype)initModelFromResourceDirectory:(NSString *)resourceDir withError:(NSError **)err;

#pragma mark - "Inner zone"
/**
 * string : string
 */
@property(strong) NSArray *labels;
//@property(strong) NSString *modelPath;
//@property(strong) NSString *weightsPath;
@property(strong) NSDictionary *modelConfig;
@property(strong) NSDictionary *preprocessConfig;

@property NSInteger modelId;
@property(strong) NSString *modelName;
@property NSInteger modelVersion;
@property NSInteger modelIterationId;
@property NSInteger modelReleaseId;
@property float modelRecThreshold;
@property(strong) NSString *modelProductLine;
@property(strong) NSString *modelSoc;

/**
 * 是否支持在线模式
 */
@property(nonatomic, readonly) bool isOnlineSupported;
@property(nonatomic, readonly) bool isCoreMLSocSupported;
@property(nonatomic, readonly) bool isCoreML3SocSupported;
@property(nonatomic, readonly) bool isARMSocSupported;

@end
