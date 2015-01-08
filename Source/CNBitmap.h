/**
 * @file	CNBitmap.h
 * @brief	Define CNBitmap class
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import <Foundation/Foundation.h>

typedef UInt16	CNColorIndex ;

@interface CNBitmap : NSObject
@property (assign, nonatomic, readonly) NSUInteger		width ;
@property (assign, nonatomic, readonly) NSUInteger		height ;
@property (assign, nonatomic)		CNColorIndex *		indexTable ;

- (id) initWithWidth: (NSUInteger) w withHeiht: (NSUInteger) h ;
- (void) dealloc ;

@end
