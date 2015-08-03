/**
 *  ===============CRPersonWrapper=============
 *  CRPersonWrapper
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */

#import <Foundation/Foundation.h>

#import "CRTimeWrapper.h"
#import "CRAddressWrapper.h"

@interface CRPersonWrapper : NSObject <NSCoding>

/** 额外信息 */
@property (nonatomic, strong) NSDictionary* userInfo;

/** 权限表 */
@property (nonatomic, strong, readonly) NSArray* userAccessibility;

/** 唯一识别码 */
@property (nonatomic, copy) NSString* userId;

/** 登陆用户名 */
@property (nonatomic, copy) NSString* userName;

/** 登陆密码 */
@property (nonatomic, copy) NSString* userPassword;

/** Token */
@property (nonatomic, copy) NSString* userToken;

/** 用户电话 */
@property (nonatomic, copy) NSString* userPhone;

/** 用户电话隐藏 */
@property (nonatomic, copy, readonly) NSString* userPhoneDisplay;

/** 用户身份证号 */
@property (nonatomic, copy) NSString* userCardId;

/** 用户身份证号隐藏 */
@property (nonatomic, copy, readonly) NSString* userCardIdDisplay;

/** 用户真实姓名 */
@property (nonatomic, copy) NSString* userRealName;

/** 用户真实姓名隐藏 */
@property (nonatomic, copy, readonly) NSString* userRealNameDisplay;

/** 用户银行卡信息 */
@property (nonatomic, copy) NSString* userBankCardId;

/** 用户银行卡信息隐藏 */
@property (nonatomic, copy, readonly) NSString* userBankCardIdDisplay;

/** 用户性别 */
@property (nonatomic, copy) NSString* userSex;

/** 用户头像 */
@property (nonatomic, copy) NSString* userImg;

/** 用户生日 */
@property (nonatomic, strong) CRTimeWrapper* userBirthDay;

/** 用户地址 */
@property (nonatomic, strong) CRAddressWrapper* userAddress;

/** 登陆与否 */
@property (nonatomic, assign, readonly) BOOL isLogin;

/** 是否是测试人员 */
@property (nonatomic, assign, readonly) BOOL isAdministor;

/** 登陆 */
- (void)login;

/** 退出登陆 */
- (void)logout;

/** 权限判断 */
- (BOOL)addAccessibilityIn:(NSString *)accessibility;

/** 添加权限 */
- (void)addAccessibilityForPerson:(NSArray *)accessibility;

/** 移除权限 */
- (BOOL)removeAccessibilityForPerson:(NSArray *)accessibility;

/** 重置权限 */
- (void)resetAccessibilityForPerson:(NSArray *)accessibility;

/** 创建一个Person */
+ (CRPersonWrapper *)person;

/** 创建一个测试人员 */
+ (CRPersonWrapper *)personAdministor;

@end


