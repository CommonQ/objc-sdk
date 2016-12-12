//
//  AVIMConversation_Internal.h
//  AVOSCloudIM
//
//  Created by Qihe Bian on 12/12/14.
//  Copyright (c) 2014 LeanCloud Inc. All rights reserved.
//

#import "AVIMConversation.h"

#define KEY_NAME @"name"
#define KEY_ATTR @"attr"
#define KEY_TIMESTAMP @"timestamp"
#define KEY_DATA @"data"
#define KEY_FROM @"from"
#define KEY_MSGID @"msgId"

@class AVIMConversationUpdateBuilder;

@interface AVIMConversation ()



//@property(nonatomic, strong)AVIMConversationUpdateBuilder *updateBuilder;
- (instancetype)initWithConversationId:(NSString *)conversationId;
- (void)setConversationId:(NSString *)conversationId;
- (void)setMembers:(NSArray *)members;
- (void)setCreator:(NSString *)creator;
- (void)setImClient:(AVIMClient *)imClient;
- (void)addMembers:(NSArray *)members;
- (void)addMember:(NSString *)clientId;
- (void)removeMembers:(NSArray *)members;
- (void)removeMember:(NSString *)clientId;

- (void)setKeyedConversation:(AVIMKeyedConversation *)keyedConversation;

+ (NSDictionary *)filterCustomAttributesFromDictionary:(NSDictionary *)dictionary;

@end
