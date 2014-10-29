Pod::Spec.new do |spec|
spec.name         = 'FFViewControlSchema'
spec.license      = { :type => 'MIT' }
spec.platform     = :ios, '6.0'
spec.homepage     = 'https://github.com/wujiangwei/FFViewControlSchema'
spec.authors      = 'Kevin.Wu'
spec.summary      = 'FFViewControlSchema'
spec.source       =  {:git => 'https://github.com/wujiangwei/FFViewControlSchema.git'}
spec.source_files = '{FFSchemaManager,NSString+FFStringUrlEncode,NSURL+FFURLShemaParse}.{h,m}'
spec.ios.deployment_target = '6.0'
spec.requires_arc = true
end
