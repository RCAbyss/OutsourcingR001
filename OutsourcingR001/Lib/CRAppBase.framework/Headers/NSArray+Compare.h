/**
 *  ==================NSArray==================
 *   NSArray (Compare)
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */

#import <Foundation/Foundation.h>

@interface NSArray (Compare)

/** 数组表示 */
- (NSString *)arrayDescription;

/** 数组元素是否是否一样,忽略顺序 */
- (BOOL)arrayCompareIsSameObjcetsWithArray:(NSArray *)array;

/** 数组计算交集 */
- (NSArray *)arrayCompareIntersectionWithArray:(NSArray *)array;

/** 数组计算差集 */
- (NSArray *)arrayCompareMinusWithOtherArray:(NSArray *)array;

/** 数组计算并集 */
- (NSArray *)arrayCompareUnitWithOtherArray:(NSArray *)array;

@end
