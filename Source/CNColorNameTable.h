/**
 * @file	CNColorNameTable.h
 * @brief	Define CNColorNameTable class
 * @par Copyright
 *   Copyright (C) 2015 Steel Wheels Project
 */

#import "CNGraphicsType.h"

@interface CNColorNameTable : NSObject
{
	NSMutableDictionary *	colorTable ;
}

+ (CNColorNameTable *) sharedColorNameTable ;

- (instancetype) init ;
- (BOOL) getColor: (struct CNRGB *) dst byName: (NSString *) name ;

@end
