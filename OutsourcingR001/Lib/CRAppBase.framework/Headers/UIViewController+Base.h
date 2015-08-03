/**
 *  ==============UIViewController=============
 *   Help you build navigationBar
 *  ===========================================
 *
 *  # Support Texts
 *  # Support Images
 *  # Support CRIcon
 *
 *  Copyright@2015 RogerAbyss
 */

#import "CRMacroUtil.h"

#define rPRE_NAV_LEFT_IMAGE     @"left-arrow"
#define rPRE_NAV_COLOR          rCOLOR(0)
#define rPRE_NAV_FONT           rFONT(16)

@interface UIViewController (Strategy)

- (void)initNav:(NSString *)title;

- (void)setupTitle:(NSString *)title;
- (void)setupLeftButton:(NSString *)str;
- (void)setupLeftButtonWithImage:(NSString *)image and:(NSString *)highlightImage;
- (void)setupRightButton:(NSString *)str;
- (void)setupRightButtonWithImage:(NSString *)image and:(NSString *)highlightImage;

@end

@interface UIBarButtonItem (Extension)
+ (instancetype)buttonWithImage:(NSString *)image highlightedImage:(NSString *)highlightedImage target:(id)target action:(SEL)action;
+ (instancetype)buttonWithFix:(CGFloat)width;
@end