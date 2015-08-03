//
//  HOME.m
//  Waibao001
//
//  Created by 任超 on 15/7/7.
//  Copyright (c) 2015年 Roger Abyss. All rights reserved.
//

#import "HOME.h"

@interface HOME ()

@end

@implementation HOME

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    [self setTitle:@"首页"];
    
    [self configureBottom];
}

- (void)configureBottom
{
    self.pageControl.type                        = HMSegmentedControlTypeTextImages;
    
    self.pageControl.selectionStyle              = HMSegmentedControlSelectionStyleFullWidthStripe;
    self.pageControl.segmentWidthStyle           = HMSegmentedControlSegmentWidthStyleFixed;
    self.pageControl.backgroundColor             = rCOLOR(240);
    self.pageControl.selectionIndicatorLocation  = HMSegmentedControlSelectionIndicatorLocationDown;
    self.pageControl.selectionIndicatorHeight    = 2.f;
    
    self.pageControl.selectionIndicatorColor     = rCOLOR_TOPIC;
    
    self.pageControl.titleTextAttributes         = @{NSForegroundColorAttributeName     :rCOLOR_BLACK,
                                                     NSFontAttributeName                :rFONT_S};
    
    self.pageControl.selectedTitleTextAttributes = @{NSForegroundColorAttributeName     :rCOLOR_TOPIC,
                                                     NSFontAttributeName                :rFONT_S};
    
    self.pageControl.imageEdgeInset              = UIEdgeInsetsMake(-16, 0, 0, 0);
    self.pageControl.textEdgeInset               = UIEdgeInsetsMake(12, 0, 0, 0);
    self.pageControl.imageSize                   = CGSizeMake(16, 16);
}
@end
