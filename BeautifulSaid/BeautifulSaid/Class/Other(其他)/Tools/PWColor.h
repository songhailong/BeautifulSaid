//
//  MLSColor.h
//  BeautifulSaid
//
//  Created by power on 2018/8/31.
//  Copyright © 2018年 BeautifulSaid. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>

@interface PWColor : NSObject

+ (UIColor *)colorWithRed:(CGFloat)red withGreen:(CGFloat)green withBlue:(CGFloat)blue withAlpha:(CGFloat)alpha;

+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

+ (UIColor *)colorWithHexString:(NSString *)color;

+ (UIColor *)clearColor;

+ (UIColor *)whiteColor;

+ (UIColor *)blackColor;


/** app主题颜色 */
+ (UIColor *)appMainColor;

/** 文本灰色 （导航标题颜色） */
+ (UIColor *)appNavTitleGrayColor;

/** 灰色间距 #f4f4f4*/
+ (UIColor *)appGraySpaceColor;

/** 文本灰色 （副标题文本颜色）#333333 */
+ (UIColor *)appSubColor;

/** 辅助颜色  #999999 */
+ (UIColor *)appSupportColor;

/** 设计师标签 #D2D2D2 */
+ (UIColor *)appLightGrayColor;

/** 辅助蓝色 #7EC1FB */
+ (UIColor *)appSubBlueColor;

/** 分割线颜色 #DCDCDC */
+ (UIColor *)appBottomLineColor;

+ (UIColor *)appTextFieldColor;

+(UIColor *)appLabeTextlColor;
@end
