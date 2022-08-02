//
//  ZoomVideoSDKVideoHelper.h
//  ZoomVideoSDK
//
//  Created by Zoom Video Communications on 2018/12/6.
//  Copyright © 2018 Zoom Video Communications, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZoomVideoSDKConstants.h"


/**
 @brief Video preference interface.When setting custom modes, the maximum and minimum frame rates are provided by the developer. If the current bandwidth cannot maintain the minimum frame rate, the video system will drop to the next lower frame rate. The default maximum and minimum frame rates for other modes are 0.
 */

@interface ZoomVideoSDKVideoPreferenceSetting : NSObject
/**
 @brief Preferred video mode.
 */
@property (nonatomic, assign) ZoomVideoSDKVideoPreferenceMode mode;

/**
 @brief Minimum frame rate, default is 0.
 @note The value of minimumFrameRate range from 0 to 30. Otherwise, will use default frame-rate of Zoom.
 */
@property (nonatomic, assign) NSUInteger minimumFrameRate;

/**
 @brief Maximum frame rate, default is 0.
 @note The value of maximumFrameRate range from 0 to 30. Otherwise, will use default frame-rate of Zoom.
 */
@property (nonatomic, assign) NSUInteger maximumFrameRate;

@end


/*!
 @class ZoomVideoSDKVideoHelper
 @brief A class to operate the video action.
 */
@interface ZoomVideoSDKVideoHelper : NSObject

/*!
 @brief Start send video.
 @return the result of it.
 */
- (ZoomVideoSDKERROR)startVideo;

/*!
 @brief Stop send video.
 @return the result of it.
 */
- (ZoomVideoSDKERROR)stopVideo;

/*!
 @brief Rotate my video. When the device onConfigurationChanged.
 @return the result of it.
 @warning the function only for internal video source, it's not work for capture video source.
 */
- (BOOL)rotateMyVideo:(UIDeviceOrientation)rotation;

/*!
 @brief Set to Switch the camera of the current user in local device.
 */
- (void)switchCamera;

/**
 @brief Adjust user's video resolution and frame-rate.
 @param preferenceSetting An instance of ZoomVideoSDKVideoPreferenceSetting.
 @return If the function succeeds, it will return Errors_Success.
 */
-(ZoomVideoSDKERROR)setVideoQualityPreference:(ZoomVideoSDKVideoPreferenceSetting * _Nullable)preferenceSetting;

@end
