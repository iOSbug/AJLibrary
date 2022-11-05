//
//  AJCloudStorageModel.h
//  AJLibrary
//
//  Created by HX on 2022/11/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AJCloudStorageModel : NSObject
@property (nonatomic, strong) NSString *intraPicture;
@property (nonatomic, strong) NSString *m3u8Url;
@property (nonatomic, strong) NSString *fps;
@property (nonatomic, strong) NSString *tsStart;
@property (nonatomic, strong) NSString *tsEnd;
@property (nonatomic, strong) NSString *groupId;
@property (nonatomic, strong) NSString *recordType;

@end



NS_ASSUME_NONNULL_END

