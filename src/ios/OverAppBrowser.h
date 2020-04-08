//
//  	OverAppBrowser.h
//  	OverAppBrowser Cordova Plugin
//
//  	Copyright 2014 Emmanuel Tabard. All rights reserved.
//      MIT Licensed
//

#import <Cordova/CDVPlugin.h>
#import <WebKit/WebKit.h>

@interface OverAppBrowser : CDVPlugin <WKNavigationDelegate> {
	NSString* callbackId;
	WKWebView* overWebView;
    NSURL* currentUrl;
    BOOL isAutoFadeIn;
    BOOL _injectedIframeBridge;
}

@property (nonatomic, copy) NSString* callbackId;
@property (nonatomic, retain) WKWebView* overWebView;
@property (nonatomic, retain) NSURL* currentUrl;

@property (nonatomic, copy) NSRegularExpression *callbackIdPattern;


- (void)open:(CDVInvokedUrlCommand *)command;
- (void)fade:(CDVInvokedUrlCommand *)command;
- (void)resize:(CDVInvokedUrlCommand *)command;
- (void)injectScriptCode:(CDVInvokedUrlCommand*)command;
- (void)close:(CDVInvokedUrlCommand *)command;

@end
