//
//  AJDeviceInfoModel.h
//  AJLibrary
//
//  Created by tmz on 2022/9/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AJDeviceInfoModel : NSObject

// 设备名称
@property (nonatomic, strong) NSString *deviceName;
@property (nonatomic, strong) NSString *deviceId;
// 离线 - 1, 在线 - 2, 升级中 - 4, 休眠 - 8
@property (nonatomic, assign) NSInteger onlineStatus;

@end

NS_ASSUME_NONNULL_END
