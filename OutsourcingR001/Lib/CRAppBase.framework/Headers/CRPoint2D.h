/**
 *  =================CRPoint2D=================
 *   Point2D Wrapper by Objective-C
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */

#import <Foundation/Foundation.h>

@interface CRPoint2D : NSObject
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;

+ (CRPoint2D *)pointDeafuatStart;
+ (CRPoint2D *)pointDeafuatEnd;

+ (CRPoint2D *)pointFromX:(CGFloat)x Y:(CGFloat)y;

@end
