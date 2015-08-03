/**
 *  ==================UIColor==================
 *   UIColor+Base
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */


@interface UIColor (Base)

/**
 *  取颜色的数值,然而并没有什么卵用
 */
@property (nonatomic, assign) CGFloat red;
@property (nonatomic, assign) CGFloat green;
@property (nonatomic, assign) CGFloat blue;
@property (nonatomic, assign) CGFloat alpha;

+ (UIColor *)colorWithHexString:(NSString *)color;

+ (UIColor *)colorWithHex:(NSInteger)hexValue alpha:(CGFloat)alphaValue;

+ (UIColor *)colorWithRGB:(CGFloat)red Green:(CGFloat) green Blue:(CGFloat)blue alpha:(CGFloat)alpha;


@end