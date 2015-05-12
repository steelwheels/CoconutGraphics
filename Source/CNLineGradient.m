/**
 * @file	CNLineGradient.m
 * @brief	Define CNLineGradient data structure
 * @par Copyright
 *   Copyright (C) 2015 Steel Wheels Project
 */

#import "CNLineGradient.h"

static inline void
setColor(CGFloat cols[], const struct CNRGB * rgb)
{
	cols[0] = rgb->red ;
	cols[1] = rgb->green ;
	cols[2] = rgb->blue ;
	cols[3] = rgb->alpha ;
}

struct CN2PointsLineGradient
CNAllocate2PointsLineGradient(struct CNRGB start, struct CNRGB end)
{
	struct CN2PointsLineGradient result ;
	setColor(&(result.referenceColors[0]), &start) ;
	setColor(&(result.referenceColors[4]), &end) ;
	CGFloat locs[2] = {0.0, 1.0};
	result.colorSpaceRef = CGColorSpaceCreateDeviceRGB();
	result.gradientRef   = CGGradientCreateWithColorComponents(result.colorSpaceRef,
								   result.referenceColors,
								   locs,
								   2);
	return result ;
}

void
CNRelease2PointsLineGradient(struct CN2PointsLineGradient * dst)
{
	CGGradientRelease(dst->gradientRef);
	CGColorSpaceRelease(dst->colorSpaceRef);
}

struct CN3PointsLineGradient
CNAllocate3PointsLineGradient(struct CNRGB start, struct CNRGB middle, struct CNRGB end)
{
	struct CN3PointsLineGradient result ;
	setColor(&(result.referenceColors[0]), &start) ;
	setColor(&(result.referenceColors[4]), &middle) ;
	setColor(&(result.referenceColors[8]), &end) ;
	CGFloat locs[3] = {0.0, 0.5, 1.0};
	result.colorSpaceRef = CGColorSpaceCreateDeviceRGB();
	result.gradientRef   = CGGradientCreateWithColorComponents(result.colorSpaceRef,
								   result.referenceColors,
								   locs,
								   3);
	return result ;
}

void
CNRelease3PointsLineGradient(struct CN3PointsLineGradient * dst)
{
	CGGradientRelease(dst->gradientRef);
	CGColorSpaceRelease(dst->colorSpaceRef);
}