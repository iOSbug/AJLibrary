//
//  AJMessage.h
//  AJLibrary
//
//  Created by Tianbao Wang on 2022/9/22.
//

#import <Foundation/Foundation.h>
#import "AJError.h"
#import <UserNotifications/UserNotifications.h>

NS_ASSUME_NONNULL_BEGIN

@interface AJMessage : NSObject

/**
*    单例
*/
+ (instancetype)shared;

- (void)initPush;

- (void)handleApnsNotiReponse:(UNNotificationResponse *)notiResponse;

@end

NS_ASSUME_NONNULL_END
