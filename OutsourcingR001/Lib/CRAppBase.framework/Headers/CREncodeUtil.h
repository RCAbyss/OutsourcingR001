/**
 *  ==============CREncodeUtil=================
 *   Encoder
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */

#import <Foundation/Foundation.h>

@interface CREncodeUtil : NSObject
@end

/******************************************************
 * 拓展 NSString
 ******************************************************
 * 编码器
 */

@interface NSString (EncodeUtil)

/** 编码->URL */
- (NSString *)encodeUrl;

/** 编码->Unicode,从Server拿回来方便在控制台显示 */
- (NSString *)encodeUnicode;

@end
