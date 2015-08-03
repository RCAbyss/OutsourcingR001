//
//  AppDelegate.m
//  OutsourcingR001
//
//  Created by 任超 on 15/7/31.
//  Copyright (c) 2015年 Roger Abyss. All rights reserved.
//

#import "AppDelegate.h"
#import "AppDelegate+Setup.h"
#import "AppDelegate+NetTransceiver.h"
#import "AppDelegate+Refresh.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    /** 调试服务 */
    [CRDebugger start];
    /** 网络缓存协议 */
    [NSURLProtocol registerClass:[CRCacheProtocol class]];
    
    /** 通用设置,Custom HUD... */
    [self cofigure];
    
    /** 网络收发器 */
    [self setupNetTransceiver];
    
    /** 刷新器 */
    [self cofigureRefreshService];
    
    self.window = [APP_MANAGER defualtWindow];
    [APP_MANAGER startWithViewController:self.home];
    
    self.mainNavigationController = APP_MANAGER.navigationController;

    [self.window makeKeyAndVisible];
    
    /** LBS服务 */
//    [APP_LBS requestLocationUserblock:^(CLLocation *currentLocation, CRLocationAccuracy achievedAccuracy, CRLocationStatus status)
//     {
//         
//     }];
    
    return YES;
}

@end
