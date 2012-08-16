// SHIRMUNG: 
// including CVImageConverter.h and CVImageConverter.mm to deal with cv::imread issues

//
//  CVImageConverter.h
//
//  Created by Artem Myagkov on 01.08.11.
/*
 *
 *
 Copyright (c) 2011, Artem Myagkov
 All rights reserved.

 Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

 Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the 
 documentation and/or other materials provided with the distribution.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIImage.h>
#include <opencv2/core/mat.hpp>
#import <AssetsLibrary/AssetsLibrary.h>


@interface CVImageConverter : NSObject {
    
}

+ (UIImage *) UIImageFromCVMat:(const cv::Mat&) cv_image error:(NSError **)outError;
+ (void)  CVMat:(cv::Mat&)cv_image FromUIImage:(UIImage *)ui_image error:(NSError **)outError;
+ (void)  CVMat:(cv::Mat&)cv_image FromCGImageRef:(CGImageRef)imageRef withOrientation:(ALAssetOrientation)orientation error:(NSError **)outError;
+ (UIImage *)convertUIImageToGrayScale:(UIImage *)oldImage;

@end
