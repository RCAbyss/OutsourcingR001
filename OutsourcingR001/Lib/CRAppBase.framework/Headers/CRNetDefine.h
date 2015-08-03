/**
 *  ===============CRNetDefine=================
 *  Defines of NetClient
 *  ===========================================
 *
 *  # Define EnumTypes, Blocks and NewTypes of NetClient;
 *
 *  Copyright@2015 RogerAbyss
 */

#import <Foundation/Foundation.h>

@class CRRequest;
@class AFDownloadRequestOperation;

typedef NSString* Api;

typedef NS_ENUM(NSInteger , CRRequestMethod)
{
    /** 默认 */
    CRRequestMethodGet  = 0,
    
    CRRequestMethodPost,
    
    CRRequestMethodPut,
    CRRequestMethodHead,
    CRRequestMethodPatch,
    CRRequestMethodDelete,
};

/** 数据检查器 */
typedef id (^NetValidator)(id objct);

/** 发送器 */
typedef id (^NetSender)(CRRequest* CRRequest);

/** 接收器 */
typedef id (^NetReciver)(CRRequest* CRRequest);

/** 成功回调 */
typedef void (^successCompletionBlock)(CRRequest* request);

/** 失败回调 */
typedef void (^failureCompletionBlock)(CRRequest* request);

/** FormData构造器 */
typedef void (^ConstructingBlock)(id formData);

/** 下载进度监听器 */
typedef void (^downloadProgressBlock)(AFDownloadRequestOperation *operation,NSInteger bytesRead,long long totalBytesRead,long long totalBytesExpected,long long totalBytesReadForFile,long long totalBytesExpectedToReadForFile);

@interface CRNetDefine : NSObject
@end
