//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DataPersistence : NSObject
{
}

- (id)dataPersistenceLock;
- (id)dataSetLock;
- (_Bool)isAvailable;
- (_Bool)exeTransactionCodeWithSqls:(id)arg1 withParameters:(id)arg2;
- (_Bool)exeTransactionCodeWithSqls:(id)arg1;
- (_Bool)exeTransactionCode:(id)arg1;
- (_Bool)endTransaction;
- (_Bool)beginTransaction;
- (id)exeTransactionQueryWithSqls:(id)arg1;
- (_Bool)executeUpdateWithArg:(id)arg1;
- (id)executeQueryNew:(id)arg1;
- (id)executeQueryWithArg:(id)arg1;
- (id)executeQuery:(id)arg1;
- (long long)executeUpdateReturnRowId:(id)arg1 withParameterDictionary:(id)arg2;
- (long long)executeUpdateReturnRowId:(id)arg1;
- (_Bool)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2;
- (void)executeUpdate:(id)arg1 AndNSError:(id *)arg2;
- (_Bool)executeUpdate:(id)arg1;
- (_Bool)openWithRealPath:(id)arg1;

@end
