$version = "0.0.1"

Pod::Spec.new do |s|
  s.name         = "BKDerivatives" 
  s.version      = $version
  s.summary      = "BKDerivatives."
  s.description  = "BKDerivatives description."
  s.homepage     = "https://www.lib.com"
  
  s.license      = "MIT"
  s.author       = { "lib" => "lib@lib.com" }
  s.source       = { :git => "http://gitlab.lib.io/mobile/mobile-lib-ios.git", :tag => $version }
  s.platform     = :ios, "11.0"

  s.resource     = ['Library/Resource/*']
  s.vendored_frameworks = 'Library/BKDerivatives.framework'
  s.frameworks = 'SystemConfiguration'

  # 外部依赖
  s.dependency 'CocoaAsyncSocket'
  s.dependency 'Masonry'
  s.dependency 'MJRefresh','3.2.0'
  s.dependency 'TPKeyboardAvoiding'
  s.dependency 'Base64', '~> 1.1.2'
  s.dependency 'mob_sharesdk'
  s.dependency 'mob_sharesdk/ShareSDKPlatforms/Telegram'
  s.dependency 'mob_sharesdk/ShareSDKPlatforms/Facebook'
  s.dependency 'mob_sharesdk/ShareSDKPlatforms/Apple'
  s.dependency 'mob_sharesdk/ShareSDKPlatforms/GooglePlus'
  s.dependency 'TTTAttributedLabel'
  s.dependency 'SAMKeychain'
  s.dependency 'lottie-ios', '~> 3.1.8'
  s.dependency 'RSAEncrypt'
  s.dependency 'Bugly'
  s.dependency 'SnapKit', '~> 4.0.0'
  s.dependency 'SwiftyJSON'
  s.dependency 'M80AttributedLabel', '~> 1.6.3'
  s.dependency 'TZImagePickerController', '~> 3.2.1'
  s.dependency 'SocketRocket', '~> 0.5.1'
  s.dependency 'IQKeyboardManager', '~> 4.0.10'
  s.dependency 'Alamofire'
  s.dependency 'RxSwift'
  s.dependency 'RxCocoa'
  s.dependency 'RxDataSources'
  s.dependency 'RxAlamofire'
  s.dependency 'Kingfisher', '~> 6.3.1'
  s.dependency 'SwifterSwift'
  s.dependency 'Socket.IO-Client-Swift', '~> 15.2.0'
  s.dependency 'JXSegmentedView','~> 1.0.6'
  s.dependency 'SnapshotKit'
  s.dependency 'SwiftSoup'
  s.dependency 'CryptoSwift'
  s.dependency 'ReverseExtension'
  #s.dependency 'FingerprintJS', '~> 1.2.0'
  
  #bkex
  s.dependency 'BKLine', :git => 'https://github.com/tang4595/BKLine.git', :branch => 'master'
  
  #third-party frameworks
  s.dependency 'GTCaptcha4', :git => 'https://github.com/tang4595/GTCaptcha4.git', :branch => 'master'
  s.dependency 'ApiGatewaySdk', :git => 'https://github.com/tang4595/ApiGatewaySdk.git', :branch => 'master'
  s.dependency 'WSAPM', :git => 'https://github.com/tang4595/WSAPM.git', :branch => 'master'
  s.dependency 'SDVersion', :git => 'https://github.com/tang4595/SDVersion.git', :branch => 'master'
  s.dependency 'WebViewJavascriptBridge', :modular_headers => true, :git => 'https://github.com/tang4595/WebViewJavascriptBridge.git', :branch => 'master'

end

