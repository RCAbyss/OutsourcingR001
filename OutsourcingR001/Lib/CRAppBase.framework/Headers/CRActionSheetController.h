/**
 *  CRActionSheetController.h
 *
 *  NetClient.framework
 *  Copyright (c) 2015年 Roger Abyss. All rights reserved.
 *
 *  ActionSheet
 *
 *  Useage:
 *  Only showActionSheetWith
 *
 *  Function:
 *  相比系统的ActionSheet
 *  1.可以用自定义View
 *  2.图+文字
 *  3.所有元素自定义
 *
 */

#import <UIKit/UIKit.h>

typedef NS_ENUM(int, ActionSheetAnimationType)
{
    ActionSheetAnimationTypeNormal = 0,
    
    ActionSheetAnimationTypeFade   = 1,
    ActionSheetAnimationTypePop    = 2,
};

typedef void(^ActionSheetHandler)(int hanlderIndex);

#define ACTIONSHEETBTI UIEdgeInsetsMake(0, 10, 0, 0)
#define ACTIONSHEETBII UIEdgeInsetsMake(0, 10, 0, 0)
#define ACTIONSHEETCANCELTAG 999

@interface ActionSheet : UIView
{
@private
    NSString*               _strTitle;
    NSString*               _strCancel;
    
    UIWindow*               _actionWindow;
    ActionSheetHandler      _handler;
}

@property (assign, nonatomic) BOOL                     isButtonStyle;
@property (assign, nonatomic) CGFloat                  buttonHeight;
@property (readwrite        ) int                      nDestructiveIndex;
@property (assign, nonatomic) ActionSheetAnimationType animateType;

@property (strong, nonatomic) UIScrollView*     contentView;
@property (strong, nonatomic) UIView*           customView;
@property (strong, nonatomic) UIView*           vActionSheet;
@property (strong, nonatomic) NSArray*          buttonTitles;
@property (strong, nonatomic) NSArray*          buttonImages;

@property (readwrite) UIEdgeInsets titleInset;
@property (readwrite) UIEdgeInsets buttonInset;

@property (readwrite) UIEdgeInsets buttonImageInset;
@property (readwrite) UIEdgeInsets buttontitleInset;

- (void)showActionSheetWith:(NSString *)title
                    buttons:(NSArray *)buttons
                     handle:(ActionSheetHandler)handle;

- (void)showActionSheetWith:(NSString *)title
                     custom:(UIView *)customView
                    buttons:(NSArray *)buttons
                     images:(NSArray *)images
                     handle:(ActionSheetHandler)handle;
@end