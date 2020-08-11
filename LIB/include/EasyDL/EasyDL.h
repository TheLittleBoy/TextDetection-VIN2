//
//  EasyDL.h
//  EasyDL
//
//  Created by chenxiaoyu on 2018/4/28.
//  Copyright © 2018年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "EasyDLDefine.h"
#import "EasyDLModel.h"
#import "EasyDLResultData.h"


// 自动编译所需字段
//#define EASYDL_BUILD_MODEL_TYPE 1

@interface EasyDL : NSObject


+ (void)setLogLevel:(EEasyDLLogLevel)level;

/**
 * 设置序列号，请在官网获得序列号之后填写在此处
 * @param serialNumber 序列号
 */
+ (void)setSerialNumber:(NSString *)serialNumber;

+ (void)setServerHost:(NSString *)server;
+ (NSString *)getSerialNumber;
+ (NSString *)sdkVersion;

/**
 * !!!CAUTION!!!
 * CALL THIS FUNCTION WILL CLEAR THIS DEVICE'S LICENSE.
 * Internet connection is required to active this device again.
 */
+ (void)resetLicense;

@end

