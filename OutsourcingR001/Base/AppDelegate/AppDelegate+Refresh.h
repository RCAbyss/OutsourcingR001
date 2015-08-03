//
//  AppDelegate+Refresh.h
//  Waibao001
//
//  Created by 任超 on 15/7/3.
//  Copyright (c) 2015年 Roger Abyss. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()
@property (nonatomic, weak) CRRefreshController* currentRefreshController;
@end
@interface AppDelegate (Refresh)

- (void)cofigureRefreshService;

@end
