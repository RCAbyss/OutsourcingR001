//
//  AppDelegate+NetTransceiver.m
//  ZGXL
//
//  Created by 任超 on 15/6/25.
//  Copyright (c) 2015年 Roger Abyss. All rights reserved.
//

#import "AppDelegate+NetTransceiver.h"
#import <AFNetworkReachabilityManager.h>

@implementation AppDelegate (NetTransceiver)

- (void)setupNetTransceiver
{
    
#pragma mark - 发送器
    /****************************************************************************************/
    
    
    
    [[CRNetConfig config] setSender:^(CRRequest* request)
    {
        return request;
    }];
    
    
    
    
#pragma mark - 接收器
    /****************************************************************************************/
    
    [[CRNetConfig config] setReciver:^(CRRequest* request)
    {
        return request;
    }];
    
    
#pragma mark - 服务器管理器
    /****************************************************************************************/
    
    
    // 服务器地址
    [[CRNetConfig config] setBaseUrl:@""];
    
    // CDN地址
    [[CRNetConfig config] setImageUrl:@""];
    
    // 过期时间
    [[CRNetConfig config] setTimeoutInterval:20];
    
    // 公共参数
    [[CRNetConfig config] setPublicParams:@{}.wrapper];
    
    
    // 视频缓存路径
    [[CRNetConfig config] setCachePath:@""];
    
    
    // 数据校验
    [[CRNetConfig config] setValidator:^(id objct){
        return @{};
    }];

#pragma mark - 网络监听
    [[AFNetworkReachabilityManager sharedManager] startMonitoring];
    [[AFNetworkReachabilityManager sharedManager] setReachabilityStatusChangeBlock:^(AFNetworkReachabilityStatus status){
        [APP_MANAGER.persister setNet_statu:(int16_t)status];
        
        NSLog(@"网络变更:%d",(int16_t)status);
    }];
}


@end
