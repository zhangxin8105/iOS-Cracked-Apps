//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HTFileDownloaderDelegate.h"
#import "NSCacheDelegate.h"

@class CCCandyCacheConfig, CCThreadSafeMutableDictionary, HTFileDownloader, NSArray, NSCache, NSString;

@interface CCCacheManager : NSObject <NSCacheDelegate, HTFileDownloaderDelegate>
{
    CCCandyCacheConfig *_config;
    long long _state;
    NSString *_rootPath;
    unsigned long long _concurrentDownloadCount;
    unsigned long long _memCacheSize;
    id <CCAppUpdateProtocol> _delegate;
    NSString *_name;
    NSArray *_blackList;
    HTFileDownloader *_fileDownloader;
    CCThreadSafeMutableDictionary *_appMaps;
    CCThreadSafeMutableDictionary *_resourceIndexInfos;
    NSCache *_memCache;
    NSCache *_urlToKeyMapCache;
}

@property(copy, nonatomic) NSCache *urlToKeyMapCache; // @synthesize urlToKeyMapCache=_urlToKeyMapCache;
@property(retain, nonatomic) NSCache *memCache; // @synthesize memCache=_memCache;
@property(copy, nonatomic) CCThreadSafeMutableDictionary *resourceIndexInfos; // @synthesize resourceIndexInfos=_resourceIndexInfos;
@property(retain, nonatomic) CCThreadSafeMutableDictionary *appMaps; // @synthesize appMaps=_appMaps;
@property(retain, nonatomic) HTFileDownloader *fileDownloader; // @synthesize fileDownloader=_fileDownloader;
@property(copy, nonatomic) NSArray *blackList; // @synthesize blackList=_blackList;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <CCAppUpdateProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long memCacheSize; // @synthesize memCacheSize=_memCacheSize;
@property(nonatomic) unsigned long long concurrentDownloadCount; // @synthesize concurrentDownloadCount=_concurrentDownloadCount;
@property(readonly, copy, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak CCCandyCacheConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)allAppInfos;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)clearMemCache;
- (void)clearCacheOfApps;
- (void)clearMemCacheOfAppWithName:(id)arg1;
- (void)clearCacheOfAppWithName:(id)arg1;
- (unsigned long long)diskSizeOfApps;
- (id)appInfos;
- (id)localResourcePathOfURL:(id)arg1;
- (id)appInfoWithName:(id)arg1;
- (void)updateMetaOfAppInfo:(id)arg1;
- (void)updateResourceOfAppInfo:(id)arg1;
- (void)firstInitWithCheckPackagePath:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)initializeWithCompleteBlock:(CDUnknownBlockType)arg1;
- (_Bool)isFirstInstall;
- (void)setupNotification;
- (id)initWithRootPath:(id)arg1;
- (id)initWithName:(id)arg1 rootPath:(id)arg2;
- (void)dealloc;
- (_Bool)handleDBWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)clearTable:(id)arg1;
- (id)stringFromChars:(char *)arg1;
- (_Bool)DB_deleteResourceIndexInfoWithAppNames:(id)arg1;
- (_Bool)DB_deleteAppInfoWithNames:(id)arg1;
- (_Bool)DB_insertResourceIndexInfos:(id)arg1;
- (_Bool)DB_writeResourceIndexInfos:(id)arg1;
- (id)DB_readResourceIndexInfos;
- (_Bool)DB_updateAppInfo:(id)arg1;
- (_Bool)DB_deleteAppInfo:(id)arg1;
- (_Bool)DB_insertAppInfo:(id)arg1;
- (_Bool)DB_writeAppInfos:(id)arg1;
- (id)DB_readAppInfos;
- (_Bool)DB_createDatabaseAtPath:(id)arg1;
@property(readonly, nonatomic) Class pathIndexInfoClass;
@property(readonly, nonatomic) Class appInfoClass;
@property(readonly, nonatomic) NSString *DB_TABLE_PATHINDEXINFOS;
@property(readonly, nonatomic) NSString *DB_TABLE_APPINFOS;
@property(retain, nonatomic) NSString *dbPath;
- (_Bool)addResourceIndexInfos:(id)arg1;
- (_Bool)replaceOrAddAppInfo:(id)arg1;
- (void)updateStatusOfAppInfo:(id)arg1 status:(long long)arg2;
- (void)didCancelledWithDownloadTask:(id)arg1;
- (void)HTFileDownloadTask:(id)arg1 didUpdatedWithProgress:(double)arg2 receivedSize:(long long)arg3 totalSizeExpected:(long long)arg4 totalSizeReceived:(long long)arg5;
- (void)_updateResourceIndexInfoOfApp:(id)arg1 atPath:(id)arg2;
- (_Bool)untarInfosWithTarFile:(id)arg1 toAppInfo:(id)arg2;
- (_Bool)unzipInfosWithZipFile:(id)arg1 toAppInfo:(id)arg2 toPath:(id *)arg3;
- (void)didFinishSuccessWithDownloadTask:(id)arg1;
- (void)HTFileDownloadTask:(id)arg1 didFailedWithError:(id)arg2;
- (void)appDidEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (id)urlOfAppInfo:(id)arg1;
- (id)appInfoForDownloadTask:(id)arg1;
- (void)innerUpdateResourceOfAppInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

