/**
 *  =============CRSimpleRequest===============
 *  Base of the NetClient
 *  ===========================================
 *
 *  ! You need <AFNetwoking.h>
 *
 *  # Do simple reqyust faster like AFNetworking dose
 *
 *  Copyright@2015 RogerAbyss
 */

#import "CRRequest.h"

@interface CRSimpleRequest : CRRequest

/** 发送GET请求 */
+ (CRSimpleRequest *)GET:(Api)Api
                  params:(CRDictionaryWrapper *)params
                 success:(successCompletionBlock)success
                 failure:(failureCompletionBlock)failure;

/** 发送POST请求 */
+ (CRSimpleRequest *)POST:(Api)Api
                   params:(CRDictionaryWrapper *)params
                  success:(successCompletionBlock)success
                  failure:(failureCompletionBlock)failure;

@end
