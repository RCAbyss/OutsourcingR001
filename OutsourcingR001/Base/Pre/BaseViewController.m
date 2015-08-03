//
//  BaseViewController.m
//  OutsourcingR001
//
//  Created by 任超 on 15/7/31.
//  Copyright (c) 2015年 Roger Abyss. All rights reserved.
//

#import "BaseViewController.h"

@interface BaseViewController ()

@end

@implementation BaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleLightContent];
    
    self.view.tintColor = rCOLOR_TOPIC;
    [self.navigationController.navigationBar setBarTintColor:rCOLOR_TOPIC];
    [self.navigationController.navigationBar setTitleTextAttributes:@{NSFontAttributeName:rFONT_G,
                                                                      NSForegroundColorAttributeName:rCOLOR_WHITE}];
    
    self.view.backgroundColor = rCOLOR_BACKGOUND;
    
    [self setEdgesForExtendedLayout:UIRectEdgeNone];
    [self setExtendedLayoutIncludesOpaqueBars:NO];
}


@end
