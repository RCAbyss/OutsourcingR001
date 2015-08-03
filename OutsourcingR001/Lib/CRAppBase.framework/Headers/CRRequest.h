/**
 *  ==============CRRequest====================
 *  Base of the NetClient
 *  ===========================================
 *
 *  ! You need <AFNetwoking.h>
 *
 *  # TODO: Add Useages
 *
 *  Copyright@2015 RogerAbyss
 */

#import <Foundation/Foundation.h>

#import "CRNetDefine.h"
#import "CRDictionaryWrapper.h"

/** 自定义模型, 自定义模型将跳过底层批处理, #(底层批处理)-->外层收发器-->控制器 */
extern NSString* CRRequestModelCustom;

@class AFHTTPRequestOperation;
@interface CRRequest : NSObject

/******************************************************
 * 属性
 ******************************************************
 * 一些基本属性
 */

/** 标记request的唯一记号*/
@property (nonatomic, assign, readonly) NSUInteger tag;

/** 处理模型,分类处理 */
@property (nonatomic, copy, readonly) NSString* model;

/** 每个request绑定一个operation:AFNetworking */
@property (nonatomic, strong) AFHTTPRequestOperation* operation;

- (void)start;
- (void)cancel;

- (BOOL)isExecuting;

/** 发送请求,并用block返回回调 */
- (void)startWithBlockSuccess:(successCompletionBlock)success
                      failure:(failureCompletionBlock)failure;



/******************************************************
 * 请求
 *****************************************************/

/** Api请求路径 */
@property (nonatomic, copy) NSString* url;

/** (有默认值)缓存的路径 */
@property (nonatomic, copy) NSString* cachePath;

/** (默认:nil)断点续传缓存地址 <下载时使用,GET> */
@property (nonatomic, copy) NSString* downloadPath;

/** 请求的方法 */
@property (nonatomic, assign) CRRequestMethod method;

/** (默认:30s)过期时间阀值 */
@property (nonatomic, assign) NSTimeInterval timeoutInterval;

/** 请求的参数 */
@property (nonatomic, strong) CRDictionaryWrapper* params;

/** (默认:nil)认证信息:@[username,password] */
@property (nonatomic, strong) NSArray* authorization;


/******************************************************
 * 接收
 *****************************************************/

/** 请求是否成功 <需要覆盖取值方法> */
@property (nonatomic, assign, readonly) BOOL isSuccess;

/** 错误信息 <需要覆盖取值方法> */
@property (nonatomic, copy, readonly) NSString* errorMsg;

/** 格式检查 <需要覆盖取值方法> */
@property (nonatomic, strong, readonly) id jsonValidator;

/** 取出数据 <需要覆盖取值方法> */
@property (nonatomic, strong, readonly) CRDictionaryWrapper* data;

/** 响应原始数据 */
@property (nonatomic, strong, readonly) id responseObject;

/** 响应状态码 */
@property (nonatomic, assign, readonly) NSInteger statuCode;

/** http报头 */
@property (nonatomic, strong, readonly) NSDictionary* allHeaderFields;

/** (默认:nil)修改的http报头 */
@property (nonatomic, strong, readonly) NSDictionary* changeHeaderFields;

/******************************************************
 * 缓存
 *****************************************************/

/** 是否缓存请求,默认不缓存 */
@property (nonatomic, assign) BOOL cacheEnable;

/** 设置缓存最大有限期,默认无限期 */
@property (nonatomic, assign) NSTimeInterval cacheMaxTime;

/******************************************************
 * 回调
 ******************************************************
 * 基本的回调
 */

@property (nonatomic, copy) successCompletionBlock successBlock;
@property (nonatomic, copy) failureCompletionBlock failureBlock;

@property (nonatomic, copy) downloadProgressBlock downloadBlock;
@property (nonatomic, copy) ConstructingBlock constructingBlock;


/******************************************************
 * 额外的方法
 ******************************************************
 * 处理一些特殊问题,一般不需要被调用
 */


/** 清除block,解决循环调用 */
- (void)clearCompletionBlock;


@end
