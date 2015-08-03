/**
 *  =============CRDictionaryWrapper===========
 *   Help u use CRDictionaryWrapper
 *  ===========================================
 *
 *  # Now CRMutableDictionaryWrapper help you save value of CRDictionaryWrapper
 *  # Now CRPersistSettingWrpper help you control plist file
 *
 *  Copyright@2015 RogerAbyss
 */

#import "CRDictionaryWrapper.h"


@interface CRMutableDictionaryWrapper : CRDictionaryWrapper

/** 存一个 int 值 */
- (void)set:(NSString *)name int:(int)value;

/** 存一个 id 值 */
- (void)set:(NSString *)name value:(id)value;

/** 存一个 long 值 */
- (void)set:(NSString *)name long:(long)value;

/** 存一个 BOOL 值 */
- (void)set:(NSString *)name bool:(BOOL)value;

/** 存一个 float 值 */
- (void)set:(NSString *)name float:(float)value;

/** 存一个 double 值 */
- (void)set:(NSString *)name double:(double)value;

/** 存一个 NSString 值 */
- (void)set:(NSString *)name string:(NSString *)value;

@end



///**********************************************
// *  用于存取plist 文件,并且判断过期时间
// ***********************************************/
//
//@class CRPersister;
//@interface CRPersistSettingWrpper : CRMutableDictionaryWrapper
//
///** 取得出Plist文件并封装 */
//+ (instancetype)wrapperFromName:(NSString*)name;
//
///** 取得NSArray,如果没有或者过期取 @[] */
//- (NSArray *)getArray_t:(NSString *)name;
//
///** 取得NSInteger,如果没有或者过期取 0 */
//- (NSInteger)getInteger_t:(NSString *)name;
//
///** 取得NSString,如果没有或者过期取 @"" */
//- (NSString *)getString_t:(NSString *)name;
//
///** 取得NSDictionary,如果没有或者过期取 @{} */
//- (NSDictionary *)getDictionary_t:(NSString *)name;
//
///** 取得CRDictionaryWrapper,如果没有或者过期取 @{}.wrapper */
//- (CRDictionaryWrapper *)getDictionaryWrapper_t:(NSString *)name;
//
///** 存一个值,默认无过期时间, 设置 CRPersister.timeout */
//- (void)save:(CRPersister *)persister name:(NSString *)name;
//
//- (void)remove;
//
//@end
//
//@interface CRPersister : CRDictionaryWrapper
//
///** 返回保存的对象 */
//@property (nonatomic, strong, readonly) id object;
//
///** 判断过期与是否有值 */
//@property (nonatomic, assign, readonly) BOOL isValidate;
//
///** 保存时间 */
//@property (nonatomic, strong, readonly) CRTimeWrapper* date;
//
///** 保质期,0 不计算是否过期 */
//@property (nonatomic, assign) NSTimeInterval timeout;
//
///** 保存的对象的key, 因为object 是id 类型, 取值非安全 */
//@property (nonatomic, copy, readonly) NSString* key;
//
//+ (CRPersister *)persisterForm:(id)objct;
//
//@end