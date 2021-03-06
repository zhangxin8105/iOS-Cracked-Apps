//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMSongUrlInfoRequest, NSArray;

@interface NMSongUrlInfoFixer : NSObject
{
    NMSongUrlInfoRequest *_playUrlRequest;
    NMSongUrlInfoRequest *_fmUrlRequest;
    NMSongUrlInfoRequest *_downloadUrlRequest;
    NSArray *_timeoutArray;
}

+ (void)logUrlInfoError:(id)arg1 code:(long long)arg2 songId:(id)arg3 songType:(unsigned long long)arg4 isDownload:(_Bool)arg5;
+ (id)parseSongInfoWithFilePath:(id)arg1 sourceSongId:(id)arg2;
+ (id)localSongUrlInfoWithLocalFile:(id)arg1;
+ (void)cancelFixFMUrlInfo;
+ (void)cancelFixDownloadUrlInfo;
+ (void)cancelFixPlayUrlInfo;
+ (void)fixFMPlayUrlInfo:(id)arg1 bitrate:(long long)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (void)fixSongDownloadUrlInfo:(id)arg1 bitrate:(long long)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (void)fixSongPlayUrlInfo:(id)arg1 bitrate:(long long)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (void)fixFMUrlInfo:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (void)fixSongUrlInfo:(id)arg1 type:(long long)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (id)_sharedInstance;
- (void).cxx_destruct;
- (void)_cancelFixFMUrlInfo;
- (void)_cancelFixDownloadUrlInfo;
- (void)_cancelFixPlayUrlInfo;
- (void)_fixFMUrlInfo:(id)arg1 bitrate:(long long)arg2 completeBlock:(CDUnknownBlockType)arg3 retryCount:(long long)arg4;
- (void)_fixFMUrlInfo:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)fmUrlRequest;
- (id)playUrlRequest;
- (id)downloadUrlRequest;
- (void)_fixSongDownloadUrlInfo:(id)arg1 bitrate:(long long)arg2 completeBlock:(CDUnknownBlockType)arg3 retryCount:(long long)arg4;
- (void)_fixSongPlayUrlInfo:(id)arg1 bitrate:(long long)arg2 completeBlock:(CDUnknownBlockType)arg3 retryCount:(long long)arg4;
- (void)_fixSongUrlInfo:(id)arg1 type:(long long)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

