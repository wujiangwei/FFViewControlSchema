FFViewControlSchema
===================

Schema For IOS Project

****** Schema 用处 ******

1.定向页面推送（Push）

2.App内部配置web页面url，web页面点击跳转App内部界面（web 和 native app 界面互相跳转）

****** Schema 说明 ******

1. App内置schema格式

yourappname://pageName?param0=value0&param1=value1


默认参数（非schema链接中的参数，需要配置在App的schema.plist文件中）:

	isneedlogin:
	
		默认无此参数(isneedlogin = 0)
		
		如果为1,则会先跳转到你App的登录界面，登录完成后，继续跳转相关界面
		
	tabbarindex: 
	
		默认无此参数
		
		如果shcemma传入此参数:App主页界面结构需要是UITabBarController，否则 tabbarindex 设置无效
		
		tabbarindex数值范围应在UITabBarController.viewControllers.count范围内，超出则设置无效
	


2.程序内web页

	yourappname://web?title=百度&hasnav=1&hasshare=0&shareurl=www.baidu.com

	title: web页导航栏title
		
	hasnav:是否开启导航条（默认打开，参数:0打开，1关闭）(App无不是基于UINavigationController的此参数无效)
		
	hasshare:分享按钮是否显示（默认显示，参数:0打开，1关闭）
		
	shareurl:分享链接
	
3.当App主页是基于底部导航栏的设计

	tabbarindex:0-x,0第一个tabbarindex高亮，若是负数则无效

    schema示例说明：
    我的收藏页面schema：
    yourappname://myfav?userid=1000&param1=111111 （推荐）
    yourappname://my_fav?userid=1000&param1=111111 (应遵循浏览器)
    yourappname://wodeshoucang?userid=1000&param1=111111  (尽量用英文名)


****** IOS 官方Schema 说明 ******

IOS官方shema 具体参考苹果Maps Schema介绍

（https://developer.apple.com/library/ios/featuredarticles/iPhoneURLScheme_Reference/Introduction/Introduction.html）

	•	maps: 调起地图应用，需要提供必要参数如地址，经纬度等 例子: http://maps.apple.com/?q=shanghai
	
	•	http: 调起safari  例子: http://tuan.baidu.com/
	
	•	sms: 调起短消息  例子: sms://1-408-555-1212
	


