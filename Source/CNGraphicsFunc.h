/**
 * @file	CNGraphicsFunc.h
 * @brief	Basic function definition
 * @par Copyright
 *   Copyright (C) 2015 Steel Wheels Project
 */

#import "CNGraphicsType.h"

static inline struct CNRGB
CNMakeRGB(CGFloat red, CGFloat green, CGFloat blue, CGFloat alpha)
{
	struct CNRGB result = {
		.red		= red,
		.green		= green,
		.blue		= blue,
		.alpha		= alpha
	} ;
	return result ;
}

static inline CGPoint
CNAddPoints(const CGPoint * p0, const CGPoint * p1)
{
	CGPoint result = {
		.x = p0->x + p1->x,
		.y = p0->y + p1->y
	} ;
	return result ;
}