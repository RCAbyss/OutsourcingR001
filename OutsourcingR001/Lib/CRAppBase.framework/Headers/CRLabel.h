//
//  CRLabel.h
//  ZGXL
//
//  Created by 任超 on 15/7/14.
//  Copyright (c) 2015年 Roger Abyss. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, CRLabelUnitType)
{
    CRLabelUnitTypeNone = -1,
    
    CRLabelUnitTypeNumbers = 0,
    // 其他不常用的用block嘛！
};

static  NSUInteger CRLabeljumpTime = 200;
typedef NSString* (^CRLabelDidFinished)(CGFloat numbers);
typedef NSString* (^CRLabelDidAnimating)(CGFloat numbers);
@interface CRLabel : UILabel

@property (nonatomic, assign, readonly) CGFloat resultNumber;

@property (nonatomic, assign) BOOL needAnimate;
@property (nonatomic, assign) CRLabelUnitType unitType;

@property (nonatomic, copy) NSString* prefixHolder;
@property (nonatomic, copy) NSString* suffixHolder;

/**
 *  使用block 会忽略 unitType,prefixHolder,suffixHolder
 */
@property (nonatomic, copy) CRLabelDidAnimating blockDidAnimating;
@property (nonatomic, copy) CRLabelDidFinished  blockDidFinished;

- (void)animateNumber:(CGFloat)numbers;

@end
