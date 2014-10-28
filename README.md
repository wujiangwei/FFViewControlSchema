FFViewControlSchema
===================

Schema For IOS Project

****** Schema 用处 ******

1.定向页面推送（Push）

2.App内部配置web页面url，web页面点击跳转App内部界面（web 和 native app 界面互相跳转）

****** Schema 说明 ******

1. App内置schema格式

yourappname://pageName?param0=value0&param1=value1

你需要在项目中加入 schema.plist文件，文件内容格式如下


		<?xml version="1.0" encoding="UTF-8"?>
		<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
		<plist version="1.0">
		<dict>
			<key>name</key>
			<string>TestTableViewControl</string>
			<key>needlogin</key>
			<false/>
			<key>tabitemindex</key>
			<integer>-1</integer>
			<key>desc</key>
			<string>测试用的Tableview页面</string>
		</dict>
		</plist>

	默认参数（非schema链接中的参数，需要配置在App的schema.plist文件中）:

	needlogin:
	
		默认无此参数(needlogin = 0)
		
		如果为1,则会先跳转到你App的登录界面，登录完成后，继续跳转相关界面
		
	tabitemindex: 
	
		默认无此参数
		
		如果shcemma传入此参数:App主页界面结构需要是UITabBarController，否则 tabitemindex 设置无效
		
		tabitemindex数值范围应在UITabBarController.viewControllers.count范围内，超出则设置无效
	
	name:
	
		你对应UIViewcontroller的class的名字
		
	desc:
		描述信息，不用于代码，仅用于其他人看你的schema文件


2.程序内web页（暂未实现）

	yourappname://web?title=百度&linkurl=www.baidu.com&hasshare=0&shareurl=www.baidu.com

	title: web页导航栏title
		
	linkurl:跳转网页网址
	
	（下面是可选参数）	
	hasshare:分享按钮是否显示（默认显示，参数:0打开，1关闭）
		
	shareurl:分享链接
	

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
	


