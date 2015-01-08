/**
 * @file	CNColorTable.h
 * @brief	Define CNColorTable class
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import "CNGraphicsType.h"
#import <Foundation/Foundation.h>

@interface CNColorTable : NSObject
@property (assign, nonatomic, readonly) NSUInteger	count ;
@property (assign, nonatomic) struct CNRGB *		rgbArray ;

- (id) initWithCount: (NSUInteger) cnt ;
- (void) dealloc ;

@end

