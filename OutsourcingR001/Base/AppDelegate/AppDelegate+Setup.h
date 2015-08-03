//
//  AppDelegate+Setup.h
//  Waibao001
//
//  Created by 任超 on 15/7/3.
//  Copyright (c) 2015年 Roger Abyss. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate (Setup)

/**
 *  创建主页
 *
 *  @return 主页
 */
- (CRHome *)home;

/**
 *  运行时通用设置
 */
- (void)cofigure;

/**
 *  添加左侧滑动
 */
- (void)setupLeftModel;

@end
