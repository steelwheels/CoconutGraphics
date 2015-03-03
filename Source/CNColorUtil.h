/**
 * @file	CNColorUtil.h
 * @brief	Define Utility function for color
 * @par Copyright
 *   Copyright (C) 2015 Steel Wheels Project
 */

#import "CNGraphicsType.h"

#import <TargetConditionals.h>
#if TARGET_OS_IPHONE
#	define	KCColor		UIColor
#else
#	define	KCColor		NSColor
#endif

static inline KCColor *
CNRGBtoColor(const struct CNRGB col)
{
	KCColor * result ;
#if TARGET_OS_IPHONE
	result = [[UIColor alloc] initWithRed: col.red
					green: col.green
					 blue: col.blue
					alpha: col.alpha] ;
#else
	result = [NSColor colorWithRed: col.red
				 green: col.green
				  blue: col.blue
				 alpha: col.alpha] ;
#endif
	return result ;
}
		  
#undef KCColor
	
