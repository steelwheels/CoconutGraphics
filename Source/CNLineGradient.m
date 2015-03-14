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

struct CNLineGradient
CNAllocateLineGradient(struct CNRGB start, struct CNRGB end)
{
	struct CNLineGradient result ;
	setColor(&(result.referenceColors[0]), &start) ;
	setColor(&(result.referenceColors[4]), &end) ;
	CGFloat locs[CNPointNumOfLineGradient] = {0.0, 1.0};
	result.colorSpaceRef = CGColorSpaceCreateDeviceRGB();
	result.gradientRef   = CGGradientCreateWithColorComponents(result.colorSpaceRef,
								   result.referenceColors,
								   locs,
								   CNPointNumOfLineGradient);
	return result ;
}

void
CNReleaseLineGradient(struct CNLineGradient * dst)
{
	CGGradientRelease(dst->gradientRef);
	CGColorSpaceRelease(dst->colorSpaceRef);
}
