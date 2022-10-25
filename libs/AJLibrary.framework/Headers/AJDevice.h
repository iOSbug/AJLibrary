//
//  AJDevice.h
//  AJLibrary
//
//  Created by Tianbao Wang on 2022/9/22.
//

#import <Foundation/Foundation.h>
#import "AJError.h"
#import "AJDeviceInfoModel.h"
//#import "SwiftHeader.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    AJDeviceConnectStatusConnecting=1,
    AJDeviceConnectStatusConnected,
    AJDeviceConnectStatusDisConnected,
    AJDeviceConnectStatusFailed,
    AJDeviceConnectStatusOffline
}AJDeviceConnectStatus;


typedef enum : NSUInteger {
    AJDevicePTZControlDirectionUp,
    AJDevicePTZControlDirectionLeft,
    AJDevicePTZControlDirectionDown,
    AJDevicePTZControlDirectionnRight,
    AJDevicePTZControlDirectionCenter,
} AJDevicePTZControlDirection;

@protocol AJDeviceDelegate <NSObject>
@optional
/**
 *  设备连接P2P状态回调
 *  @param     deviceId              摄像头id
 *  @param     status                连接状态
 */
- (void)AJDeviceConnectStatusDeviceId:(NSString *)deviceId status:(AJDeviceConnectStatus)status;

@end





@interface AJDevice : NSObject
@property (weak)                        id<AJDeviceDelegate>   delegate;
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
- (void)queryDevices:(nullable void (^)(NSArray<AJDeviceInfoModel *> *))success
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
 *    加载摄像头页面
 *    @param     deviceId              摄像头id
 */
- (void)startCameraView:(NSString *)deviceId;



/**
 *    初始化Connection
 *
 */
-(void)loadCameras;

/**
 *  对设备进行P2P连线（状态回掉请注册AJDeviceDelegate）
 *  @param     deviceId              摄像头id
 */
-(void)ConnectedWithDeviceId:(NSString *)deviceId;


/**
 *    强制重联设备
 *    @param     deviceId              摄像头id
 */
-(void)forceReConectedWithCameraID:(NSString *)deviceId;


/**
 *    重置所有P2P连接
 *
 */
-(void)resetConnection;

/**
 *    网络环境发生变化请调用
 *
 */
-(void)networkChangeAction;
/**
 *    查询设备连接状态
 *
 */
-(AJDeviceConnectStatus)statusForCamera:(NSString *)deviceId;

/**
 *    断开设备连接
 *    @param     deviceId              摄像头id
 */
-(void)disConnectedWithCamID:(NSString *)deviceId;

/**
 *    连接电池设备
 *    @param     deviceId              摄像头id
 */
-(void)batterySingleBeginConnect:(NSString *)deviceId;

/**
 *    PTZControl单步移动云台
 *    @param     deviceId              摄像头id
 */
- (void)cameraPtzControl:(NSString *)deviceId direction:(AJDevicePTZControlDirection)direct;

/**
 *    PTZControl连续移动开始
 *    @param     deviceId              摄像头id
 */
- (void)cameraPtzContinueControl:(NSString *)deviceId direction:(AJDevicePTZControlDirection)direct;

/**
 *    PTZControl连续移动结束
 *    @param     deviceId              摄像头id
 */
- (void)cameraPtzControlEnd:(NSString *)deviceId;

/**
 *    PTZControl回正
 *    @param     deviceId              摄像头id
 */
- (void)cameraPtzResetControl:(NSString *)deviceId;



/**
 *    改变视频分辨率
 *    @param     deviceId              摄像头id
 *    @param     resoNum              分辨率参数
 */
- (void)changeResolution:(NSString *)deviceId Quilt:(NSString *)resoNum;



/**
 *    初始化远程TF卡
 *    @param     deviceId              摄像头id
 *    YES :成功
 *    NO: 失败
 */
- (BOOL)initRemoteTF:(NSString *)deviceId;

/**
 *    强制断开设备
 *    @param     deviceId              摄像头id
 */
- (void)forceDisconenct:(NSString *)deviceId;
@end

NS_ASSUME_NONNULL_END
