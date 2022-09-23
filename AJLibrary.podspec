#
# Be sure to run `pod lib lint AJLibrary.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'AJLibrary'
  s.version          = '0.1.2'
  s.summary          = 'A short description of AJLibrary.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/iOSbug/AJLibrary'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Tianbao Wang' => '519955268@qq.com' }
  s.source           = { :git => 'https://github.com/iOSbug/AJLibrary.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'
  s.swift_version = '5.0'

  s.vendored_frameworks = "libs/*.{framework}"
#   s.source_files = 'AJLibrary/Classes/**/*'

  s.frameworks   = 'OpenGLES','Foundation','SystemConfiguration','OpenAL','Security','MediaPlayer','AVFoundation','CoreVideo','CoreAudio','CoreMedia','VideoToolbox','AudioToolbox','AdSupport','NetworkExtension','GLKit'
  
#    s.libraries = "libc++.1", "libiconv", "libz", "libbz2.1.0"

  s.dependency 'HandyJSON', '~> 5.0.3-beta'
  s.dependency 'Alamofire', '4.9.1'
  s.dependency 'Firebase/Crashlytics'
  s.dependency 'Firebase/Core'
  s.dependency 'Firebase/Messaging' 
  s.dependency 'Firebase/Analytics'

  s.dependency 'MBProgressHUD'
  s.dependency 'SnapKit'
  s.dependency 'CocoaAsyncSocket', '7.6.5'
  s.dependency 'MJRefresh'
  s.dependency 'Material'
  s.dependency 'lottie-ios','2.5.0'
  s.dependency 'EFMarkdown'
  s.dependency 'SDWebImage', "~> 5.11.0"
  s.dependency 'AFNetworking', "~> 4.0.1"
  s.dependency 'FCUUID'
  s.dependency 'CocoaSecurity'
  s.dependency 'Sodium', '0.8.0'
  s.dependency 'AliyunOSSiOS'
  s.dependency 'Masonry'
  s.dependency 'SDVersion'
  s.dependency 'SocketRocket'
  s.dependency 'XCGLogger'
  s.dependency 'ZipArchive'
  s.dependency 'LSTCategory'
  s.dependency 'CHIPageControl'
  s.dependency 'ZKCycleScrollView'
  s.dependency 'MobileVLCKit', "~> 3.4.1b11"
  s.dependency 'mobile-ffmpeg-full', '~> 4.4'


  # s.resource_bundles = {
  #   'AJLibrary' => ['AJLibrary/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
