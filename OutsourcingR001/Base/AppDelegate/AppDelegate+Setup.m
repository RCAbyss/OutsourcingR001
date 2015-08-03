//
//  AppDelegate+Setup.m
//  Waibao001
//
//  Created by 任超 on 15/7/3.
//  Copyright (c) 2015年 Roger Abyss. All rights reserved.
//

#import "AppDelegate+Setup.h"

#import "HOME.h"

#import "FirstPageViewController.h"
#import "SecondPageViewController.h"
#import "ThirdPageViewController.h"
#import "MeViewController.h"

#import <FLEXManager.h>

@implementation AppDelegate (Setup)

- (HOME *)home
{
    HOME *pager = [[HOME alloc] init];
        
    FirstPageViewController* model1  = [[FirstPageViewController alloc] init];
    SecondPageViewController* model2 = [[SecondPageViewController alloc] init];
    ThirdPageViewController* model3  = [[ThirdPageViewController alloc] init];
    MeViewController* model4         = [[MeViewController alloc] init];
        
    [pager setPages:[NSMutableArray arrayWithArray:@[model1,model2,model3,model4]]];
    
    return pager;
}

- (void)cofigure
{
    [CRDebugger start];
    
#if DEBUG 
    [[FLEXManager sharedManager] showExplorer];
#endif
    // 定义 SVProgress
}

- (void)setupLeftModel
{
    
}

@end
