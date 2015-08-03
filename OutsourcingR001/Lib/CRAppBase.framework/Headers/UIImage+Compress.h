/**
 *  ==================UIImage==================
 *   UIImage (Compress)
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */

#import <Foundation/Foundation.h>

@interface UIImage (Compress)

/** 等比压缩图片,length为最长边 */
+ (UIImage *)imageWithMaxSide:(CGFloat)length sourceImage:(UIImage *)image;

/** 等比压缩图片到指定大小,length为最长边 */
+ (void)compressImage:(UIImage *)image
            limitSize:(NSUInteger)size
              maxSide:(CGFloat)length
           completion:(void (^)(NSData *data))block;


@end
