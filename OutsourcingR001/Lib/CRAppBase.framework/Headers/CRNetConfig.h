/**
 *  ==============CRNetConfig==================
 *  Config of defualt NetClient
 *  ===========================================
 *
 *  # Set Config here
 *  # Set Sender and Reciver to handle response before controller get it
 *  # Set Public Header, of course will be cover by params of request
 *
 *  Copyright@2015 RogerAbyss
 */

#import "CRNetDefine.h"
#import "CRDictionaryWrapper.h"

@interface CRNetConfig : NSObject

+ (CRNetConfig *)config;

/** 默认服务器地址 */
@property (nonatomic, copy) NSString* baseUrl;

/** (for CDN)图片地址 */
@property (nonatomic, copy) NSString* imageUrl;

/** (秒)最大加载时间 */
@property (nonatomic, assign) NSTimeInterval timeoutInterval;

/** 公共请求参数 */
@property (nonatomic, strong) CRDictionaryWrapper* publicParams;

/** Url缓存地址 */
@property (nonatomic, copy) NSString* cachePath;

/** 格式检查器 */
@property (nonatomic, copy) NetValidator validator;

/** 发送器(willSend) */
@property (nonatomic, copy) NetSender sender;

/** 接收器(willRecive) */
@property (nonatomic, copy) NetReciver reciver;


@end
