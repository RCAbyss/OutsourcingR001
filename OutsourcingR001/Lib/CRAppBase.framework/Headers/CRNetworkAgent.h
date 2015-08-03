/**
 *  ==============CRNetworkAgent===============
 *   NetworkAgent
 *  ===========================================
 *
 *  ! You need <AFNetwoking.h>
 *
 *  # Manage requests
 *
 *  Copyright@2015 RogerAbyss
 */

#import "CRRequest.h"

@interface CRNetworkAgent : NSObject

+ (CRNetworkAgent *)agent;

/** 发送请求,并添加到管理列队 */
- (void)addRequest:(CRRequest *)request;

/** 取消请求,并从管理列队中移除 */
- (void)cancelRequest:(CRRequest *)request;

/** 取消所有请求,清空列队 */
- (void)cancelAllRequests;

@end
