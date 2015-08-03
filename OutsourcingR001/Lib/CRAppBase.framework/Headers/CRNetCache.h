/**
 *  ===============CRNetCache==================
 *   NetCache
 *  ===========================================
 *
 *  # TODO: Add Useages
 *
 *  Copyright@2015 RogerAbyss
 */


#import "CRRequest.h"
#import "CRTimeWrapper.h"

@interface CRNetCache : NSObject <NSCoding>

/** 缓存的data */
@property (nonatomic, strong) NSData* data;

/** 缓存的response */
@property (nonatomic, strong) NSURLResponse* response;

/** 缓存的日期 */
@property (nonatomic, strong) CRTimeWrapper* time;

@end
