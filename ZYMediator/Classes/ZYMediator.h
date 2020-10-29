//
//  ZYMediator.h
//  ZYMediator
//
//  Created by Apple on 2020/10/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
extern NSString * const kZYMediatorParamsKeySwiftTargetModuleName;
@interface ZYMediator : NSObject
+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
