//
//  CRBannerController.h
//  myApp
//
//  Created by 任超 on 15/4/13.
//  Copyright (c) 2015年 Chongqing Xilian Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SwipeView.h"

@class DDPageControl;

/**
 *  Banner 
 *  
 *  Useage:
 *  1. 请自行设置PageControl的位置
 * 
 */

typedef void (^didTouchBlock)(SwipeView* swipeView, NSInteger index);
typedef UIView* (^didShowBanner)(SwipeView* swipeView, NSInteger index,UIView* view);
@interface CRBannerController : NSObject
@property (assign, nonatomic, readonly) int16_t dataCount;
@property (strong, nonatomic, readonly) NSMutableArray* data;

@property (strong, nonatomic) SwipeView* scrollView;
@property (strong, nonatomic) DDPageControl* pageControl;

@property (copy  , nonatomic) didTouchBlock block;
@property (copy  , nonatomic) didShowBanner showBannerBlock;

- (void)reloadData;

+ (CRBannerController *)controllerFrom:(SwipeView *)bannerView with:(NSArray *)data;

@end
