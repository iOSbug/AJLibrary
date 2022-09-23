//
//  AJDevice.h
//  AJLibrary
//
//  Created by Tianbao Wang on 2022/9/22.
//

#import <Foundation/Foundation.h>
#import "AJError.h"
#import "SwiftHeader.h"
NS_ASSUME_NONNULL_BEGIN

@interface AJDevice : NSObject

/**
*    单例
*/
+ (instancetype)shared;


/**
 *    获取设备列表
 *
 *    @param     success                成功 回调
 *    @param     failure                失败回调
 */
- (void)queryDevices:(nullable void (^)(void))success
             failure:(nullable void (^)(AJError *))failure;


/**
 *    设备解绑
 *
 *    @param     success                成功 回调
 *    @param     failure                失败回调
 */
- (void)unbindDevice:(NSString *)deviceId
             success:(nullable void (^)(void))success
             failure:(nullable void (^)(AJError *))failure;


/**
 *    设备解绑
 *    @param     deviceId              摄像头id
 *    @param     success                成功 回调
 *    @param     failure                失败回调
 */
- (void)unbindDevice:(NSString *)deviceId
             success:(nullable void (^)(void))success
             failure:(nullable void (^)(AJError *))failure;


/**
 *    加载摄像头页面
 *    @param     deviceId              摄像头id
 *    @param     success                成功 回调
 *    @param     failure                失败回调
 */
- (void)startCameraView:(NSString *)deviceId
                success:(nullable void (^)(void))success
                failure:(nullable void (^)(AJError *))failure;
@end

NS_ASSUME_NONNULL_END
