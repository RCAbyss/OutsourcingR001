//
//  AppDelegate+Refresh.m
//  Waibao001
//
//  Created by 任超 on 15/7/3.
//  Copyright (c) 2015年 Roger Abyss. All rights reserved.
//

#import "AppDelegate+Refresh.h"

@implementation AppDelegate (Refresh)

- (void)cofigureRefreshService
{
    /**
     *  请求数据转化成他要的
     */
    
    [CRRefreshController setDefaultRequester:^(CRRefreshController* controller ,SEL seletor, BOOL byHeader, NSDictionary* refreshData)
    {
        NSDictionary* dic = @{@"page":@([[refreshData objectForKey:@"pageIndex"] intValue] + 1),
                              @"pagesize":[refreshData objectForKey:@"pageSize"]};
        
        NSMutableDictionary* params = [NSMutableDictionary dictionaryWithDictionary:dic];
        
        [params addEntriesFromDictionary:[refreshData objectForKey:@"requestParams"]];
        
        [CRSimpleRequest GET:[refreshData objectForKey:@"refreshName"]
                      params:params.wrapper
                     success:^(CRRequest* request){
                        [controller performSelector:seletor
                                         withObject:request
                                         afterDelay:0];
                     }
                     failure:^(CRRequest* request){}];
    }];
    
    
    
    /**
     *  数据转化我要的
     */
    
    
    [CRRefreshController setDefaultDataConverter:^NSDictionary* (CRRequest* request)
     {
         NSDictionary* ret = nil;
         
         ret = @{@"pageData":request.data};
         
         return ret;
     }];
    
    
    /**
     *  请求批处理
     */
    
    
    [CRRefreshController setDefaultOnRequestDone:^(CRRefreshController* controller, BOOL byHeader, CRRequest* request)
     {
     }];
}

@end
