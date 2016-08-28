//
//  AVFileBreakpoint.h
//  AVOS
//
//  Created by Tang Tianyong on 8/26/16.
//  Copyright © 2016 LeanCloud Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AVFileBreakpoint : NSObject <NSCoding>

@property (nonatomic, assign) uint64_t  size;
@property (nonatomic, assign) uint64_t  offset;
@property (nonatomic,   copy) NSString *checksum;
@property (nonatomic, strong) NSArray  *contexts;

@end
