/**
 * @file	CNLineGradient.h
 * @brief	Define CNLineGradient data structure
 * @par Copyright
 *   Copyright (C) 2015 Steel Wheels Project
 */

#import "CNGraphicsType.h"

struct CN2PointsLineGradient
{
	CGFloat		referenceColors[2 * 4] ; // 4 for R,G,B and A
	CGColorSpaceRef	colorSpaceRef ;
	CGGradientRef	gradientRef ;
} ;

struct CN3PointsLineGradient
{
	CGFloat		referenceColors[3 * 4] ; // 4 for R,G,B and A
	CGColorSpaceRef	colorSpaceRef ;
	CGGradientRef	gradientRef ;
} ;

struct CN2PointsLineGradient
CNAllocate2PointsLineGradient(struct CNRGB start, struct CNRGB end) ;

void
CNRelease2PointsLineGradient(struct CN2PointsLineGradient * dst) ;

struct CN3PointsLineGradient
CNAllocate3PointsLineGradient(struct CNRGB start, struct CNRGB middle, struct CNRGB end) ;

void
CNRelease3PointsLineGradient(struct CN3PointsLineGradient * dst) ;
