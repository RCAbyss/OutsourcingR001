/**
 *  ==================CRHud====================
 *  CRHud
 *  ===========================================
 *
 *  # 多线程UI交互
 *
 *  Copyright@2015 RogerAbyss
 */


#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, CRHudType)
{
    /** 默认,加载时终止界面交互 */
    CRHudTypeNomal = 0,
    
    /** 后台模式 */
    CRHudTypeBack  = 1 << 0,
};

@interface CRHud : NSObject

/** 展现进度条,终止界面交互 */
+ (void)showProgress:(CGFloat)progress;

/** 展现进度条 */
+ (void)showProgress:(CGFloat)progress withMaskType:(CRHudType)type;

/** 展现Message,终止界面交互,计数+1 */
+ (void)showWithMessage:(NSString *)message;

/** 展现Message,计数+1 */
+ (void)showWithMessage:(NSString *)message withMaskType:(CRHudType)type;

/** 计数-1, 0的时候 dismiss */
+ (void)pop;

/** dismiss */
+ (void)dismiss;

/** 成功信息,如果计数仍然>0, 只显示Message */
+ (void)showSuccessWithMessage:(NSString *)message;

/** 错误信息,如果计数仍然>0, 只显示Message */
+ (void)showInfoWithMessage:(NSString *)message;

/** 提示信息,如果计数仍然>0, 只显示Message */
+ (void)showErrorWithMessage:(NSString *)message;


@end
