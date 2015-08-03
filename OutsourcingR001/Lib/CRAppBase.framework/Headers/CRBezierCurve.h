/**
 *  ===============CRBezierCurve===============
 *   Help you create BezierCurve
 *  ===========================================
 *
 *  # Create BezierCurve use Objective-C or C++
 *
 *  Copyright@2015 RogerAbyss
 */

#import <Foundation/Foundation.h>
#import "CRPoint2D.h"

typedef struct
{
    float x;
    float y;
} Point2D;

typedef NS_ENUM(NSUInteger, CRBezierCurveStyle)
{
    CRBezierCurveStyleLiner     = 0,              /** 线性 */

    CRBezierCurveStyleMidFast   = 1 << 0,         /** 起点稍慢,中间快,结尾很慢 */
    CRBezierCurveStyleFaster    = 1 << 1,         /** 渐渐变快 */
    CRBezierCurveStyleSlower    = 1 << 2,         /** 渐渐变慢 */
};

@interface CRBezierCurve : NSObject

/**
 *  赛贝尔曲线创建
 *  OC封装易用性,内部用C++ 结构体实现
 *
 *  @param controlPoints 控制点{开始,C1,C2,结束}
 *  @param x             横轴
 *
 *  @return 坐标点
 */
+ (CRPoint2D *)pointOnBezierFrom:(NSArray *)controlPoints at:(CGFloat)x;
+ (CRPoint2D *)pointOnBezierSytle:(CRBezierCurveStyle)style at:(CGFloat)x;

/**
 *  你也可以直接用C++调用,效率更快。
 */
Point2D PointOnCubicBezier(Point2D* cp, float t);

@end
