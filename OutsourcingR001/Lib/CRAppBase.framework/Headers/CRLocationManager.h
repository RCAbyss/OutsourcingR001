//
//  CRLocationManager.h
//  ZGXL
//
//  Created by 任超 on 15/7/12.
//  Copyright (c) 2015年 Roger Abyss. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "CRLocationDefiner.h"


#define APP_LBS [CRLocationManager share]

typedef NSInteger CRLocationRequestID;
typedef void(^CRLocationRequestBlock)(CLLocation *currentLocation, CRLocationAccuracy achievedAccuracy, CRLocationStatus status);

@interface CRLocationManager : NSObject

+ (instancetype)share;
+ (CRLocationServiceState)locationServicesState;

- (CRLocationRequestID)requestLocationUserblock:(CRLocationRequestBlock)block;
- (CRLocationRequestID)requestLocationCityblock:(CRLocationRequestBlock)block;

- (CRLocationRequestID)requestLocationWithDesiredAccuracy:(CRLocationAccuracy)desiredAccuracy
                                                  timeout:(NSTimeInterval)timeout
                                                    block:(CRLocationRequestBlock)block;

- (CRLocationRequestID)subscribeToLocationUpdatesWithBlock:(CRLocationRequestBlock)block;

- (void)forceCompleteLocationRequest:(CRLocationRequestID)requestID;
- (void)cancelLocationRequest:(CRLocationRequestID)requestID;

@end



















