//
//  CRNetworkAgent+Cache.h
//  Pods
//
//  Created by 任超 on 15/7/25.
//
//

#import "CRNetworkAgent.h"

@interface CRNetworkAgent (Cache)

/**
 *  容量,Agent会缓存发送过的请求,方便进行处理
 *
 *  Tops:   目前处理在内部,获取对应Request方法没有暴露.
 *          拓展AFNetworking属性 --> 拓展苹果自己的.
 *          Capacity并不会实时检查, 它只会管你加入列队时有没有越界!
 *          如果你手动停止-->启动-->呵呵哒！
 */
@property (nonatomic, assign) NSUInteger capacity;

/** 缓存池 */
- (NSMutableDictionary *)cacheRequests;

/** 寻找缓存池中的request */
- (NSString *)keyFrom:(NSObject *)operation;

/** 加入缓存池 */
- (void)addOperation:(CRRequest *)request;

/** 取消缓存池 */
- (void)removeOperation:(AFHTTPRequestOperation *)operation;

@end
