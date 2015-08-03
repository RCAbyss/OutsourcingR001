/**
 *  ==========CRAppDelegatePersister===========
 *   CRAppDelegatePersister
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */


#import "CRDictionaryWrapper.h"

typedef NS_ENUM(NSInteger, APP_LoginStatu)
{
    APP_LoginStatu_Visitor = 0,
    
    APP_LoginStatu_Member  = 1 << 0,
    APP_LoginStatu_VIP     = 1 << 1,
    
    APP_LoginStatu_Loginer = (APP_LoginStatu_Member | APP_LoginStatu_VIP),
};

typedef NS_ENUM(NSInteger, APP_NetStatu)
{
    APP_NetStatu_Unkwon     = -1,
    
    APP_NetStatu_OFF        = 0,
    APP_NetStatu_234G       = 1 << 0,
    APP_NetStatu_WIFI       = 1 << 1,
    
    APP_NetStatu_ON         = (APP_NetStatu_234G | APP_NetStatu_WIFI),
};


static NSString* Persister              = @"Persister";

static NSString* Persister_LoginStatu   = @"Persister_LoginStatu";  // 登陆状态
static NSString* Persister_NetStatu     = @"Persister_NetStatu";    // 网络状态

static NSString* Persister_AutoClean    = @"Persister_AutoClean";   // 自动清理缓存
static NSString* Persister_Voice        = @"Persister_Voice";       // 声音开关
static NSString* Persister_ImageLevel   = @"Persister_ImageLevel";  // 图像清晰度
static NSString* Persister_FirstInstall = @"Persister_FirstInstall";// 首次安装
static NSString* Persister_Push         = @"Persister_Push";        // 推送开关

static NSString* Persister_ColorStyle   = @"Persister_ColorStyle";  // 颜色风格
static NSString* Persister_FontStyle    = @"Persister_FontStyle";   // 字体风格

static NSString* Persister_User         = @"Persister_User";        // 用户信息
static NSString* Persister_Token        = @"Persister_Token";       // Token

/**
 *  其他需要缓存的设置 可以继承子类
 */


@interface CRAppDelegatePersister : NSObject
@property (nonatomic, assign) APP_LoginStatu            login_statu;
@property (nonatomic, assign) APP_NetStatu              net_statu;
@property (nonatomic, strong) NSString*                 token;
@property (nonatomic, strong) CRDictionaryWrapper*      userInfo;

- (void)turnOpen:(NSString *)name;
- (void)turnClose:(NSString *)name;
- (void)turnStyle:(int)style name:(NSString *)name;

- (BOOL)isOpen:(NSString *)name;
- (int)getType:(NSString *)name;

- (void)list;

@end
