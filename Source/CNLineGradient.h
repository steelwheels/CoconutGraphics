/**
 * @file	CNLineGradient.h
 * @brief	Define CNLineGradient data structure
 * @par Copyright
 *   Copyright (C) 2015 Steel Wheels Project
 */

#import "CNGraphicsType.h"

#define CNPointNumOfLineGradient		2

struct CNLineGradient
{
	CGFloat		referenceColors[CNPointNumOfLineGradient * 4] ; // 4 for R,G,B and A
	CGColorSpaceRef	colorSpaceRef ;
	CGGradientRef	gradientRef ;
} ;

struct CNLineGradient
CNAllocateLineGradient(struct CNRGB start, struct CNRGB end) ;

void
CNReleaseLineGradient(struct CNLineGradient * dst) ;
