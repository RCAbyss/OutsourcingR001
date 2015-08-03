/**
 *  ==============CRAddressWrapper=============
 *  CRAddressWrapper
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

#import "CRBaseStrategy.h"

@interface CRAddressWrapper : NSObject <NSCoding>

/** 地址是否合法，标准为至少有一个属性,如果有坐标 坐标能请求成功 */
@property (nonatomic, assign, readonly) BOOL isValidate;

/** 地址唯一识别码,用于和服务器对接 */
@property (nonatomic, assign, readonly) NSUInteger Id;

/** 坐标等信息 */
@property (nonatomic, strong, readonly) CLLocation* map;

@property (nonatomic, copy) NSString* country;
@property (nonatomic, copy) NSString* province;
@property (nonatomic, copy) NSString* city;
@property (nonatomic, copy) NSString* district;

/** 用户附加的地址详情 或者地址概要 */
@property (nonatomic, copy) NSString* address;

/**
 *  异步地址
 *  当仅使用坐标时,会用GEO请求地址,这时属性不会立刻得到。
 */
@property (nonatomic, copy) GetValueBlock reserveAddress;

/** 标记地址唯一识别码 */
- (void)mark:(NSUInteger)tag;

/** 更改坐标,会重新定位刷新地址信息 */
- (void)changeMap:(CLLocation *)map;

+ (CRAddressWrapper *)wrapperFromAdress:(NSString *)address;

+ (CRAddressWrapper *)wrapperFrom:(CLLocation *)map;

@end