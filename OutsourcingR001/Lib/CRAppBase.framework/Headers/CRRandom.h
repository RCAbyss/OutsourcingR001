/**
 *  ==================CRRandom=================
 *   Help create real random
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */
#import <Foundation/Foundation.h>

@interface CRRandom : NSObject

/**
 *  真随机数生成
 */
+ (CGFloat)randomIn:(CGFloat)rate;
+ (CGFloat)randomIn:(CGFloat)rate from:(NSUInteger)range;

+ (CGFloat)randomSign:(CGFloat)numbers;

/**
 *  根据结果数生成,结果越大 时间越长
 */
+ (CGFloat)randomFor:(NSUInteger)numbers standard:(CGFloat)time;
+ (CGFloat)randomFor:(NSUInteger)numbers;

@end
