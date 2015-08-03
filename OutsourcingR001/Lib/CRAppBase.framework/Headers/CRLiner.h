/**
 *  CRActionSheetController.h
 *
 *  NetClient.framework
 *  Copyright (c) 2015年 Roger Abyss. All rights reserved.
 *
 *  ActionSheet
 *
 *  Function:
 *  给有强迫症的设计师画1像素线(尽管我认为这并不科学!)
 *
 */
#import <Foundation/Foundation.h>
#define SINGLE_LINE_WIDTH           (1 / [UIScreen mainScreen].scale)
#define SINGLE_LINE_ADJUST_OFFSET   ((1 / [UIScreen mainScreen].scale) / 2)

@interface CRLiner : NSObject
@property (assign, nonatomic) CGFloat   realWidth;
@property (strong, nonatomic) UIColor*  realColor;

+ (UIView *)line;
+ (UIView *)lineTopOn:(UIView *)target;
+ (UIView *)lineBottomOn:(UIView *)target;

+ (instancetype)lineFactoryDefualt;
+ (instancetype)lineFactoryWith:(CGFloat)width andColor:(UIColor *)color;

- (UIView *)line;
- (UIView *)lineTopOn:(UIView *)target;
- (UIView *)lineBottomOn:(UIView *)target;

@end
