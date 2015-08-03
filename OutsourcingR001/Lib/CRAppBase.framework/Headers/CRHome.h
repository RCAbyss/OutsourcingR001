/**
 *  CRHome.h
 *
 *  NetClient.framework
 *  Copyright (c) 2015年 Roger Abyss. All rights reserved.
 *
 *  PaperViewController
 *  
 *  Useage:
 *  1.继承此类
 *  2.storyboard与xib,创建HMSegmentedControl 与 ContentView关联
 *  3.自定义你的HMSegmentedControl
 *  4.实现CRHomeDelegate 注意 图片与标题同名    title title.png titleselect.png
 *
 */


#import <UIKit/UIKit.h>
@class HMSegmentedControl;

@protocol CRHomeDelegate <NSObject>
@optional
- (NSString *)viewControllerTitle;
@end

@interface CRHome : UIViewController<UIPageViewControllerDataSource,UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (weak, nonatomic) IBOutlet HMSegmentedControl *pageControl;
@property (weak, nonatomic) IBOutlet UIView *contentContainer;

@property (strong, nonatomic) NSMutableArray *pages;

- (void)setupPagesFromStoryboardWithIdentifiers:(NSArray *)identifiers;

- (void)setPageControlHidden:(BOOL)hidden animated:(BOOL)animated;
- (void)setSelectedPageIndex:(NSUInteger)index animated:(BOOL)animated;


- (UIViewController *)selectedController;

- (void)updateTitleLabels;

@end
