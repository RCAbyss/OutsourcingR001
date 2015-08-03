/**
 *  ============CRAppDelegateManager===========
 *   CRAppDelegateManager
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "CRAppDelegatePersister.h"

#define APP_DELEGATE ((AppDelegate *)[UIApplication sharedApplication].delegate)
#define APP_MANAGER  [CRAppDelegateManager share]

/**
 *  AppDelegate 管理器(单例)
 *  处理界面宏观调用一些列事务
 *  需要在启动最后将 window 和 navigationContoller 给AppDelegate
 *  MARK: 首先 self.windon = [APP_MANAGER defualtWindow]
 */

@class CRAppDelegatePersister;
@interface CRAppDelegateManager : NSObject
@property (strong, nonatomic) CRAppDelegatePersister* persister;
@property (strong, nonatomic) UIWindow* window;
@property (strong, nonatomic) UINavigationController* navigationController;

+ (CRAppDelegateManager *)share;


- (void)sendSMS:(NSString *)str;
- (void)sendPhoneCall:(NSString *)str;
- (void)openURL:(NSString *)str;

/**
 *  App启动,CustomNavigation。
 *  也可调用自己的Navigation
 */

- (void)startWithClass:(Class)className;
- (void)startWithViewController:(UIViewController *)viewController;
- (void)startWithViewController:(UIViewController *)viewController forNavigation:(Class)NavigationClass;

/**
 *  Navigation 与 StatuBar 控制
 */

- (void)showNavigation;
- (void)hideNavigation;

- (void)showStatuBar;
- (void)hideStatuBar;

/**
 *  创建默认Window的方法
 */

- (UIWindow *)defualtWindow;

/**
 *  唤醒linker忽略的类,解决 Unknown class <XXClass>  in InterfaceBuilder file 问题
 *
 *  @param classArray @[[ClassName class],[ClassName class]]
 */

- (void)weakUpClasses:(NSArray *)classArray;

@end

extern UINavigationController* customNavigation (UINavigationController *navigation);
