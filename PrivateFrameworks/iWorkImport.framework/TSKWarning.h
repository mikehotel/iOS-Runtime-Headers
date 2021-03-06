/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString;

@interface TSKWarning : NSObject {
    NSArray *mInfos;
    unsigned int mKind;
    NSString *mMessage;
    int mSeverity;
}

@property(copy) NSArray * infos;
@property(readonly) unsigned int kind;
@property(copy) NSString * message;
@property(readonly) int severity;

+ (id)warningWithMessage:(id)arg1 kind:(unsigned int)arg2 infos:(id)arg3;
+ (id)warningWithMessage:(id)arg1 kind:(unsigned int)arg2 severity:(int)arg3 infos:(id)arg4;
+ (id)warningWithMessage:(id)arg1 severity:(int)arg2;
+ (id)warningWithMessage:(id)arg1;

- (void)dealloc;
- (unsigned int)hash;
- (id)infos;
- (id)initWithMessage:(id)arg1 kind:(unsigned int)arg2 severity:(int)arg3 infos:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)kind;
- (id)message;
- (void)setInfos:(id)arg1;
- (void)setMessage:(id)arg1;
- (int)severity;

@end
