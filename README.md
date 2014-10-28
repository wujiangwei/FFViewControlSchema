FFViewControlSchema
===================

Schema For IOS Project


1. App内置schema格式

yourappname://pageName?param0=value0&param1=value1

页面跳转筛选功能（比如 该页面一定需要登录）

参数：isNeedLogin=1(需要登录),配置好你的App的登录页面schema（比如说MyAppLoginViewController）

schema将会先跳转到MyAppLoginViewController，然后登录完成后，再跳转到你要去的界面


    示例说明：
    我的收藏页面（myfav）schema：
    yourappname://myFav?userid=1000&param1=111111 （推荐）
    yourappname://my_fav?userid=1000&param1=111111 (应遵循浏览器)
    yourappname://wodeshoucang?userid=1000&param1=111111  (尽量用英文名)


IOS官方shema 具体参考苹果Maps Schema介绍

（https://developer.apple.com/library/ios/featuredarticles/iPhoneURLScheme_Reference/Introduction/Introduction.html）

	•	maps: 调起地图应用，需要提供必要参数如地址，经纬度等 例子: http://maps.apple.com/?q=shanghai
	
	•	http: 调起safari  例子: http://tuan.baidu.com/
	
	•	sms: 调起短消息  例子: sms://1-408-555-1212
	


