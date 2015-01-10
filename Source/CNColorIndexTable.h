/**
 * @file	CNColorIndexTable.h
 * @brief	Define CNColorIndexTable class
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import "CNGraphicsType.h"
#import <Foundation/Foundation.h>

@interface CNColorIndexTable : NSObject
@property (assign, nonatomic, readonly) NSUInteger	count ;
@property (assign, nonatomic) struct CNRGB *		rgbArray ;

- (id) initWithCount: (NSUInteger) cnt ;
- (void) dealloc ;

@end

