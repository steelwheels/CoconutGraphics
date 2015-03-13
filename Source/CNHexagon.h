/**
 * @file	CNHexagon.h
 * @brief	Define CNHexagon data structure
 * @par Copyright
 *   Copyright (C) 2014-2015 Steel Wheels Project
 */

#import <Foundation/Foundation.h>
#import "CNGraphicsType.h"

struct CNHexagon {
	CGPoint			center ;
	CGFloat			radius ;
	CGPoint			vertexes[6] ;
} ;

struct CNHexagon
CNMakeHexagon(CGPoint center, CGFloat radius) ;
