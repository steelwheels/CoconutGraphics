/**
 * @file	CNBitmap.m
 * @brief	Define CNBitmap class
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import "CNBitmap.h"

@interface CNBitmap ()
@property (assign, nonatomic, readwrite) NSUInteger		width ;
@property (assign, nonatomic, readwrite) NSUInteger		height ;
@end

@implementation CNBitmap

@synthesize width ;
@synthesize height ;

- (id) initWithWidth: (NSUInteger) w withHeiht: (NSUInteger) h
{
	if((self = [super init]) != nil){
		self.width  = w ;
		self.height = h ;
		self.indexTable = malloc(sizeof(CNColorIndex) * w * h) ;
	}
	return self ;
}

- (void) dealloc
{
	free(self.indexTable) ;
}

@end

