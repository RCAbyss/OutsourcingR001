/**
 *  ==================UIImage==================
 *   UIImage (Cut)
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */

#import <Foundation/Foundation.h>

@interface UIImage (Cut)

/** 截取View中的frame */
- (UIImage *)cutWithFrame:(CGRect)frame;

/** 截取View */
+ (UIImage *)cutFromView:(UIView *)view;

/** 截取屏幕 */
+ (UIImage *)cutFromScreen;

/** 保存图片到相册 */
- (void)savedPhotosAlbum:(void(^)())completeBlock failBlock:(void(^)())failBlock;

@end
