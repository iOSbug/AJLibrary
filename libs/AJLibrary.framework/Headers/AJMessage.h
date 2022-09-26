//
//  AJMessage.h
//  AJLibrary
//
//  Created by Tianbao Wang on 2022/9/22.
//

#import <Foundation/Foundation.h>
#import "AJError.h"
#import "AJAlertSurveyModel.h"
#import <UserNotifications/UserNotifications.h>

NS_ASSUME_NONNULL_BEGIN

@interface AJMessage : NSObject

/**
*    单例
*/
+ (instancetype)shared;

/**
 *    初始化推送参数
 */
- (void)initPush;

/**
 *    处理推送消息
 *    @param     notiResponse               推送消息
 */
- (void)handleApnsNotiReponse:(UNNotificationResponse *)notiResponse;

/**
 *    获取设备告警消息概览
 *
 *    @param     success                成功 回调
 *    @param     failure                失败回调
 */
- (void)queryAlertsSurvey:(nullable void (^)(NSArray<AJAlertSurveyModel *> *))success
                  failure:(nullable void (^)(AJError *))failure;

/**
 *    加载摄像头告警页面
 *    @param     deviceId              摄像头id
 *    @param     date                       展示告警的日期 (若传空，则展示最新一天的数据)
 */
- (void)startAlertView:(NSString *)deviceId
                  date:(NSString *)date;

@end

NS_ASSUME_NONNULL_END
