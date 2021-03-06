FFViewControlSchema
===================

Schema For IOS Project

****** Schema 用处 ******

1.定向页面推送（Push）

2.App内部配置web页面url，web页面点击跳转App内部界面（web 和 native app 界面互相跳转）

****** Schema 说明 ******

1. App内置schema格式:

yourappname://pageName?param0=value0&param1=value1

    如果是打开App首页 请传yourappname:// 这里maybe have a issue

yourappname:

    A. 自己配置，请调用以下方法:
        
        - (void)configSchema:(NSString *)configSchemaName;

    B. 默认配置：取自mainBundle infoDictionary objectForKey:@"CFBundleName"，并且全是小写

    //code

    yourappname = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleName"]

    _appName = [yourappname lowercaseString];

Note: 支持 IOS 官方Schema，若传入官方schema格式，将使用系统schema处理

2.Step 1

A.在IOS Project中未使用Storyboard：

    你支持schema的UIViewController中实现如下方法
	
        (params 为schema传入的参数)
	
        - (instancetype)initWithScheme:(NSDictionary *)params;

    若不实现，默认调用init方法（此处待优化）

    Note：理论上来说是必须要实现schema方法！

B.在IOS Project中使用Storyboard：

        在App启动时初始化你的storyboardName的名字

        - (void)configStoryboardSchema:(NSString *)storyboardName

        在你的storyboardName.storyboard中，对应支持schema的支持的VC中，勾选上support storyboard id

        （你的storyboard id就是你的FFSchema.plist中的name对应的字段）

        在你的支持schema的UIViewContrller中实现以下方法：
    
        - (void)setSchemaParam:(NSDictionary *)params;

3.Step 2：

Schema配置文件名：FFSchema.plist（建立该文件，加入到工程中，模块应用时会读取该配置文件）

文件内容格式如下

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

    ispresent:
    
        新的界面是不是需要present出来，而不是 navigation push

	desc:
		描述信息，不用于代码，仅用于其他人看你的schema文件


************  其他说明 **************

1.程序内web页（暂未实现）

	yourappname://web?title=百度&linkurl=www.baidu.com&hasshare=0&shareurl=www.baidu.com

	title: web页导航栏title
		
	linkurl:跳转网页网址
	
	（下面是可选参数）	
	hasshare:分享按钮是否显示（默认显示，参数:0打开，1关闭）
		
	shareurl:分享链接
	

2.schema示例说明：

    我的收藏页面schema：
    yourappname://myfav?userid=1000&param1=111111 （推荐）
    yourappname://my_fav?userid=1000&param1=111111 (应遵循浏览器)
    yourappname://wodeshoucang?userid=1000&param1=111111  (尽量用英文名)


****** IOS 官方Schema 说明 ******

IOS官方shema 具体参考苹果Maps Schema介绍

（https://developer.apple.com/library/ios/featuredarticles/iPhoneURLScheme_Reference/Introduction/Introduction.html）

	•	maps: 调起地图应用，需要提供必要参数如地址，经纬度等
例子: http://maps.apple.com/?q=shanghai
	
	•	http: 调起safari 
例子: http://tuan.baidu.com/
	
	•	sms: 调起短消息 
例子: sms://1-408-555-1212
	


