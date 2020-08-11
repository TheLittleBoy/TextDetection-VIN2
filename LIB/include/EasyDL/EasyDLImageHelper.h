//
// Created by chenxiaoyu on 2018/5/16.
// Copyright (c) 2018 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIImage.h>

@interface EasyDLImageHelper : NSObject


/** Converts a UIImage to RGBA8 bitmap.
@param image - a UIImage to be converted
@return a RGBA8 bitmap, or NULL if any memory allocation issues. Cleanup memory with free() when done.
*/
+ (unsigned char *) convertUIImageToBitmapRGBA8:(UIImage *)image;

/** A helper routine used to convert a RGBA8 to UIImage
 @return a new context that is owned by the caller
 */
+ (CGContextRef) newBitmapRGBA8ContextFromImage:(CGImageRef)image;


/** Converts a RGBA8 bitmap to a UIImage.
 @param buffer - the RGBA8 unsigned char * bitmap
 @param width - the number of pixels wide
 @param height - the number of pixels tall
 @return a UIImage that is autoreleased or nil if memory allocation issues
 */
+ (UIImage *) convertBitmapRGBA8ToUIImage:(unsigned char *)buffer
                                withWidth:(int)width
                               withHeight:(int)height;



+ (UIImage *) convertBitmapBGRA8ToUIImage:(unsigned char *) buffer
                                withWidth:(int) width
                               withHeight:(int) height;

+ (UIImage *)imageWithImage:(UIImage *)image scaledToSize:(CGSize)newSize;
+ (UIImage *)imageWithImage2:(UIImage *)image scaledToSize:(CGSize)newSize;
+ (UIImage *)imageWithImage3:(UIImage *)sourceImage scaledToSize:(CGSize)newSize;
+ (UIImage *)fixOrientation:(UIImage *)input;
+ (UIImage *)getNormalizedImage:(UIImage *)rawImage;

+ (UIImage *)imageFromSampleBuffer:(CMSampleBufferRef)sampleBuffer withOrientation:(UIImageOrientation)orientation;

+ (CGImagePropertyOrientation)UIImageOrientationToCGImagePropertyOrientation:(UIImageOrientation) ori;

+ (void) logMetaDataFromImage:(UIImage*)image;

@end