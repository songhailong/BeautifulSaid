//
//  UIImageView+ImageViewTool.h
//  BeautifulSaid
//
//  Created by power on 2018/8/31.
//  Copyright © 2018年 BeautifulSaid. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (ImageViewTool)

/** 解析gif文件数据的方法 block中会将解析的数据传递出来 */
-(void)getGifImageWithUrk:(NSURL *)url returnData:(void(^)(NSArray<UIImage *> * imageArray,NSArray<NSNumber *>*timeArray,CGFloat totalTime, NSArray<NSNumber *>* widths, NSArray<NSNumber *>* heights))dataBlock;

/** 为UIImageView加入一个设置gif图内容的方法： */
-(void)yh_setImage:(NSURL *)imageUrl;
@end
