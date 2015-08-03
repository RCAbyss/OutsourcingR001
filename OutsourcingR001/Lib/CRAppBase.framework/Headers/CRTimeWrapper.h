/**
 *  ===============CRTimeWrapper===============
 *  TimeWrapper
 *  ===========================================
 *
 *  Copyright@2015 RogerAbyss
 */

#import <Foundation/Foundation.h>

@class CRTimeWrapper;
typedef void(^TimesChangeBlock)(CRTimeWrapper *timeWrapper);

@interface CRTimeWrapper : NSObject <NSCoding>

/** 时间,NSDate */
@property (nonatomic, strong, readonly) NSDate* date;

/** 时间,NSTimeInterval */
@property (nonatomic, assign, readonly) NSTimeInterval timeInterval;

/** 时间,NSString */
@property (nonatomic, strong, readonly) NSString* dateDescription;

/** 时间差值, EXP:1分钟以前 */
@property (nonatomic, strong, readonly) NSString* datePeriodDescription;

/** 参照物时间, 默认nil 影响datePeriodDescription, 进行中的时间=pDate 会自动停止 */
@property (nonatomic, strong) CRTimeWrapper* pDate;

/** 保质期,0 不计算是否过期 */
@property (nonatomic, assign) NSTimeInterval timeout;

/** 时间格式, 默认nil */
@property (nonatomic, strong) NSDateFormatter* formatter;

+ (CRTimeWrapper *)wrapperNow;
+ (CRTimeWrapper *)wrapperFromDate:(NSDate *)date;
+ (CRTimeWrapper *)wrapperFromDateString:(NSString *)dateString;
+ (CRTimeWrapper *)wrapperFromTimeInterval:(NSTimeInterval)timeInterval;

/** 时间改变回调 */
@property (nonatomic, strong) TimesChangeBlock timesChangeBlock;

/** 时间前进 */
- (void)startUp;

/** 时间倒推 */
- (void)startDown;

/** 时间停止 */
- (void)stop;

/** 是否过期 */
- (BOOL)isValidate;

@end

@interface NSDate (CRTimeWrapper)

- (CRTimeWrapper *)wrapper;

@end
