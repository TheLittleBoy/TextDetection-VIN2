//
// Created by chenxiaoyu on 2018/5/24.
// Copyright (c) 2018 baidu. All rights reserved.
//
#import <Availability.h>

#ifndef EASYDL_EASYDLDEFINE_H
#define EASYDL_EASYDLDEFINE_H



typedef enum EImageByteOrder {
    EImageByteOrderRGB = 0x01, // support RGB, RGBA
    EImageByteOrderBGR = 0x02, // support BGR, BGRA
} EImageByteOrder;

typedef enum EImageRotation {
    EImageRotation_NO_ROTATE = 0,
    EImageRotation_CLOCKWISE_R90 = 1,
    EImageRotation_CLOCKWISE_R180 = 2,
    EImageRotation_CLOCKWISE_R270 = 3
} EImageRotation;


//#define EasyDLErrorCodeDomainPD 1
typedef enum EEasyDLErrorCode {
    EEasyDLError_NoError = 0,
    EEasyDLError_InnerError = 1,

    EEasyDLError_Auth_Timeout = 100001,
    EEasyDLError_Auth_Failed = 100002,
    EEasyDLError_Auth_InvalidSerialNumber = 100003,  // Serial number invaid; 序列号无效
    EEasyDLError_Auth_SerialNumberExpired = 100004,  // Serial number expired; 序列号已过期
    EEasyDLError_Auth_DeviceIdMismatch = 100005,  // 设备id不匹配
    EEasyDLError_Auth_LicenseRequestFail = 100006,  // license网络请求失败，一般是没有网络权限（如首次启动时）
    EEasyDLError_ApiTokenFetchError =  100006, // API ，AK/SK 换取token失败
    EEasyDLError_ApiRequestError = 100007,  // API, 请求infer API 失败


    EEasyDLError_Auth_ServerInnerError = 110000,  // Server inner error, please report to us. 服务端内部错, 请反馈给我们
    EEasyDLError_Auth_ServerRetFailed = 110001,  // Server return fail. 获取license失败
    EEasyDLError_InitPDFail = 200001,  // 模型文件错误，请检查传入的模型文件
    EEasyDLError_InitConfigError = 200002,  // 模型配置错误，请检查传入的所有资源文件是否有效
    EEasyDLError_EngineError = 300001,  // 引擎错误；请反馈给我们

    EEasyDLError_ConfigNoOnlineInfo = 120001,  // 配置文件中没有在线api信息，调用了在线模型。一般是没有在生成模型时勾选离在线混合模式
    EEasyDLError_SystemVersionNotSupported = 120002,// 系统版本低于13，不支持coreml 物体检测模型


} EEasyDLErrorCode;


typedef enum EEasyDLModelType {
    EEasyDLModelType_Unknown = 0,
    EEasyDLModelType_ImageClassfi = 1,
    EEasyDLModelType_ObjDetection = 2,
    EEasyDLModelType_ImageSegmentation = 6,
    EEasyDLModelType_Ocr = 100
} EEasyDLModelType;


/**
 * 调试日志级别
 */
typedef enum EEasyDLLogLevel
{
//    EEasyDLLogLevelFatal = 3,  // This will cause termination
    EEasyDLLogLevelError = 3,
    EEasyDLLogLevelWarning = 2,
    EEasyDLLogLevelInfo = 1,
    EEasyDLLogLevelDebug = 0
} EEasyDLLogLevel;

typedef enum EEasyDLEngineKind {
    EEasyDLEngineKindPaddle = 1,
    EEasyDLEngineKindCoreML = 2,
//    EEasyDLEngineKindOnline = 3,
    EEasyDLEgnineKindPaddleLite = 4,
} EEasyDLEngineKind;

typedef enum EEasyDLEngineMode {
    EEasyDLEngineMode_Online = 1,
    EEasyDLEngineMode_Offline = 2,
} EEasyDLEngineMode;
#endif //EASYDL_EASYDLDEFINE_H
