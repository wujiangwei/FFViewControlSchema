Pod::Spec.new do |spec|
spec.name         = 'FFSchemaManager'
spec.version      = '0.9'
spec.license      = { :type => 'MIT' }
spec.platform     = :ios, '6.0'
spec.homepage     = 'https://github.com/wujiangwei/FFSchemaManager'
spec.authors      = 'Kevin.Wu'
spec.summary      = 'FFSchemaManager'
spec.source       =  {:git => 'https://github.com/wujiangwei/FFSchemaManager.git'}
spec.source_files = '{FFSchemaManager,NSString+FFStringUrlEncode,NSURL+FFURLShemaParse}.{h,m}'
spec.frameworks = 'Foundation'
spec.ios.deployment_target = '6.0'
spec.requires_arc = true
end
