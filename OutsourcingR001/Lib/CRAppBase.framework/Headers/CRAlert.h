//
//  CRAlert.h
//  Pods
//
//  Created by 任超 on 15/7/31.
//
//

#import <Foundation/Foundation.h>

@interface CRAlert : NSObject

+ (void)defualtAlert;
+ (void)showDebugInfo:(NSString *)info;

@end

@interface UIViewController (CRAlert)

- (void)debugInfo:(NSString *)info;

@end
