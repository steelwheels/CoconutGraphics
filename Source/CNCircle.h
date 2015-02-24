/**
 * @file	CNCircle.h
 * @brief	Define CNCircle data structure
 * @par Copyright
 *   Copyright (C) 2014-2015 Steel Wheels Project
 */

#import "CNGraphicsType.h"

struct CNCircle {
	CGPoint			center ;
	CGFloat			radius ;
} ;

static inline struct CNCircle
CNMakeCircle(CGFloat x, CGFloat y, CGFloat r)
{
	struct CNCircle result = {
		.center = {
			.x = x,
			.y = y
		},
		.radius = r
	} ;
	return result ;
}
