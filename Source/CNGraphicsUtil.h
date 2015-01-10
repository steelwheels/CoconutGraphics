/**
 * @file	CNGraphicsUtil.h
 * @brief	Define CNGraphicsUtil class
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import "CNGraphicsType.h"

#if TARGET_OS_IPHONE
#	define CNColor		UIColor
#else
#	define CNColor		NSColor
#endif

static inline struct CNRGB
CNColorToRGB(CNColor * src)
{
#	if TARGET_OS_IPHONE
	CGFloat r, g, b, a ;
	[src getRed: &r green: &g blue: &b alpha: &a] ;
	struct CNRGB result = {
		.red   = r,
		.green = g,
		.blue  = b,
		.alpha = a
	} ;
#	else
	struct CNRGB result = {
		.red   = [src redComponent],
		.green = [src greenComponent],
		.blue  = [src blueComponent],
		.alpha = [src alphaComponent]
	} ;
#	endif
	return result ;
}

#if !defined(TARGET_OS_IPHONE)

static inline void
CNNSPointToCGPoint(CGPoint * dst, const NSPoint * src)
{
	dst->x = src->x ; dst->y = src->y ;
}

static inline void
CNNSSizeToCGSize(CGSize * dst, const NSSize * src)
{
	dst->width = src->width ; dst->height = src->height ;
}

static inline void
CNNSRectToCGRect(CGRect * dst, const NSRect * src)
{
	CNNSPointToCGPoint(&(dst->origin), &(src->origin)) ;
	CNNSSizeToCGSize(&(dst->size), &(src->size)) ;
}

#undef CNColor

#endif /* !defined(TARGET_OS_IPHONE) */


