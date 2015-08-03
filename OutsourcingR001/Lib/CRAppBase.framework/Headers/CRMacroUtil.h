/**
 *  =================CRMacroUtil===============
 *   Macro
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */

#import "CRBaseStrategy.h"

#ifdef DEBUG
    #define NSLog(format, ...)      do {                                                                                \
                                            fprintf(stderr, "<%s : %d> %s\n",                                           \
                                            [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String],  \
                                            __LINE__, __func__);                                                        \
                                            (NSLog)((format), ##__VA_ARGS__);                                           \
                                            fprintf(stderr, "-----------\n\n");                                         \
                                    } while (0)
    /** 服务器地址管理 */
    #define rBaseUrl                @""
    #define rImageUrl               @""
#else
    #define NSLog(format, ...)
    #define NSAssert(...)

    #define rBaseUrl                @""
    #define rImageUrl               @""
#endif

/** 模拟器与真机 */
#if TARGET_OS_IPHONE
#elif TARGET_IPHONE_SIMULATOR
#endif

/** 实例化对象 */
#define rINSTANCE(_class, _name) rINSTANCE_STRONG(_class, _name)

#if __has_feature(objc_arc)
    #define rINSTANCE_STRONG(_class, _name) _class* sd = [[_class alloc] init];
    #define rINSTANCE_WEAK  (_class, _name) rINSTANCE_STRONG(_class, _name)
#else
    #define rINSTANCE_STRONG(_class, _name) _class* sd = [[_class alloc] init];
    #define rINSTANCE_WEAK  (_class, _name) _class* sd = [[[_class alloc] init] autorelease];
#endif

/** 系统版本 */
#define rSYSTEM_VERSION_ABOVE(_v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)

/** PUSH */
#define rPUSH_VIEWCONROLLER(_class) \
_class* model = [[_class alloc] init]; \
[self.navigationController pushViewController:model animated:YES];

@interface CRMacroUtil : NSObject
@end
