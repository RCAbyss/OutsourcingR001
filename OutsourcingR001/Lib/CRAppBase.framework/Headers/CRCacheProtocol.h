/**
 *  ==============CRCacheProtocol==============
 *   Cache the http
 *  ===========================================
 *
 *  # TODO: Add Useages
 *
 *  Copyright@2015 RogerAbyss
 */

#import <Foundation/Foundation.h>

@interface CRCacheProtocol : NSURLProtocol

/** 打印缓存协议的日志 */
+ (void)openDebugInfo;

/** 不打印日志 */
+ (void)closeDebugInfo;

/** 支持的scheme */
+ (NSSet *)supportedSchemes;

/** 设置支持的scheme */
+ (void)setSupportedSchemes:(NSSet *)supportedSchemes;

@end
