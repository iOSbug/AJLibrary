//
//  AJBinder.h
//  AJLibrary
//
//  Created by Tianbao Wang on 2022/9/22.
//

#import <Foundation/Foundation.h>
#import "AJError.h"

NS_ASSUME_NONNULL_BEGIN

@interface AJBinder : NSObject

/**
*    单例
*/
+ (instancetype)shared;

/**
 *    加载配网流程页面
 *
 *    @param     success                成功 回调
 *    @param     failure                失败回调
 */
- (void)startBinderView:(nullable void (^)(void))success
                failure:(nullable void (^)(AJError *))failure;

@end

NS_ASSUME_NONNULL_END
