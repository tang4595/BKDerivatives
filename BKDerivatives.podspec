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

end

