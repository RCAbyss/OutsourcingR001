//
//  CRValidator.h
//  Pods
//
//  Created by 任超 on 15/7/22.
//
//

#import <Foundation/Foundation.h>

@interface CRValidator : NSObject
@end

@interface NSString (CRValidator)

- (BOOL)isPhone;

- (BOOL)isEmail;

- (BOOL)isCardID;

- (BOOL)isBankCardID;

@end
