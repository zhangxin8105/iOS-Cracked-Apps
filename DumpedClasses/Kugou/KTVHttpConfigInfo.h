//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EZHttp, KTVHttpAsyncCallBack, NSDictionary, NSString;

@interface KTVHttpConfigInfo : NSObject
{
    _Bool _isNeedCheckIP;
    _Bool _askWithOnlyWifi;
    _Bool _reportOid;
    _Bool _uploadStatics;
    _Bool _notifyNetError;
    _Bool _keepConnectAlive;
    int _monitorType;
    int _othermonitorType;
    int _secondmonitorType;
    int _submonitorType;
    int _returnDataType;
    NSString *_urlKey;
    NSString *_fillUrl;
    NSDictionary *_header;
    long long _httpRequstType;
    long long _oid;
    KTVHttpAsyncCallBack *_callBack;
    EZHttp *_ezhttp;
}

@property(nonatomic) int returnDataType; // @synthesize returnDataType=_returnDataType;
@property(nonatomic) __weak EZHttp *ezhttp; // @synthesize ezhttp=_ezhttp;
@property(nonatomic) _Bool keepConnectAlive; // @synthesize keepConnectAlive=_keepConnectAlive;
@property(readonly, nonatomic) _Bool notifyNetError; // @synthesize notifyNetError=_notifyNetError;
@property(retain, nonatomic) KTVHttpAsyncCallBack *callBack; // @synthesize callBack=_callBack;
@property(nonatomic) _Bool uploadStatics; // @synthesize uploadStatics=_uploadStatics;
@property(nonatomic) int submonitorType; // @synthesize submonitorType=_submonitorType;
@property(nonatomic) int secondmonitorType; // @synthesize secondmonitorType=_secondmonitorType;
@property(nonatomic) int othermonitorType; // @synthesize othermonitorType=_othermonitorType;
@property(nonatomic) int monitorType; // @synthesize monitorType=_monitorType;
@property(nonatomic) long long oid; // @synthesize oid=_oid;
@property(nonatomic) _Bool reportOid; // @synthesize reportOid=_reportOid;
@property(nonatomic) long long httpRequstType; // @synthesize httpRequstType=_httpRequstType;
@property(retain, nonatomic) NSDictionary *header; // @synthesize header=_header;
@property(nonatomic) _Bool askWithOnlyWifi; // @synthesize askWithOnlyWifi=_askWithOnlyWifi;
@property(nonatomic) _Bool isNeedCheckIP; // @synthesize isNeedCheckIP=_isNeedCheckIP;
@property(copy, nonatomic) NSString *fillUrl; // @synthesize fillUrl=_fillUrl;
@property(copy, nonatomic) NSString *urlKey; // @synthesize urlKey=_urlKey;
- (void).cxx_destruct;
- (void)setNotifyNetError:(_Bool)arg1;
- (void)dealloc;
- (void)setMonitorTypeWhenStarted:(int)arg1;
- (id)init;

@end
