/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * appId;
@property(copy) NSArray * callbacks;
@property(copy) NSString * refId;

+ (id)baseClientBoundCommand;
+ (id)baseClientBoundCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)appId;
- (id)callbacks;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setAppId:(id)arg1;
- (void)setCallbacks:(id)arg1;

@end
