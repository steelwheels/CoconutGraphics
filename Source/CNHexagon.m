/**
 * @file	CNHexagon.m
 * @brief	Define CNHexagon data structure
 * @par Copyright
 *   Copyright (C) 2014-2015 Steel Wheels Project
 */

#import "CNHexagon.h"
#import "CNGraphicsMacro.h"

static inline CGPoint
makeVertex(CGPoint center, CGFloat radius, CGFloat angle)
{
	CGFloat x = center.x + radius * cos(angle) ;
	CGFloat y = center.y + radius * sin(angle) ;
	return CGPointMake(x, y) ;
}

struct CNHexagon
CNMakeHexagon(CGPoint center, CGFloat radius)
{
	struct CNHexagon result ;
	result.center	= center ;
	result.radius	= radius ;
	CGFloat		angle = CNPi / 2.0 ;
	CGFloat		adiff = CNPi * 2.0 / 6.0 ;
	for(unsigned int i=0 ; i<6 ; i++){
		result.vertexes[i] = makeVertex(center, radius, angle) ;
		angle -= adiff ;
	}
	return result ;
}
