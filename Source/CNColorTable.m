/**
 * @file	CNColorTable.m
 * @brief	Define CNColorTable class
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import "CNColorTable.h"

@interface CNColorTable (CNPrivate)
@property (assign, nonatomic, readwrite) NSUInteger	count ;
@end

@implementation CNColorTable
@synthesize count ;
@synthesize rgbArray ;

- (id) initWithCount: (NSUInteger) cnt
{
	if((self = [super init]) != nil){
		self.count = cnt ;
		self.rgbArray = malloc(sizeof(struct CNRGB) * cnt) ;
	}
	return self ;
}

- (void) dealloc
{
	free(self.rgbArray) ;
}

@end

