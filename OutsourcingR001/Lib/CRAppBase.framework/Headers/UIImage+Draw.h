/**
 *  ==================UIImage==================
 *   UIImage (Draw)
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSInteger, ImageWaterDirect)
{
    ImageWaterDirectBottomRight = 0,
    
    ImageWaterDirectCenter,
    ImageWaterDirectTopLeft,
    ImageWaterDirectTopRight,
    ImageWaterDirectBottomLeft,
};

@interface UIImage (Draw)

/** 获得单色的UIImage,size = {1,1} */
+ (UIImage *)imageFromContextWithColor:(UIColor *)color;

/** 获得单色的UIImage,设置size */
+ (UIImage *)imageFromContextWithColor:(UIColor *)color size:(CGSize)size;


#warning TODO:
/** 设置图片tintColor保留透明度 */
- (UIImage *) imageWithTintColor:(UIColor *)tintColor;

/** 设置图片tintColor保留透明度和灰度 */
- (UIImage *) imageWithGradientTintColor:(UIColor *)tintColor;

/** 水印,文字 */
- (UIImage *)waterWithText:(NSString *)text
                 direction:(ImageWaterDirect)direction
                 fontColor:(UIColor *)fontColor
                 fontPoint:(CGFloat)fontPoint
                  marginXY:(CGPoint)marginXY;

/** 水印,图片 */
- (UIImage *)waterWithWaterImage:(UIImage *)waterImage
                       direction:(ImageWaterDirect)direction
                       waterSize:(CGSize)waterSize
                        marginXY:(CGPoint)marginXY;

@end
