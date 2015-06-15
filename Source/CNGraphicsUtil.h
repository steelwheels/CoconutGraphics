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

/**
 * @brief Compare context of CGSize objects
 */
static inline BOOL
CNIsSameSize(CGSize * s0, CGSize * s1)
{
	return (s0->width == s1->width) && (s0->height == s0->width) ;
}

static inline CGPoint
CNRectGetCenter(CGRect src)
{
	CGFloat x = src.origin.x + (src.size.width  / 2.0) ;
	CGFloat y = src.origin.y + (src.size.height / 2.0) ;
	return CGPointMake(x, y) ;
}

#if defined(TARGET_OS_IPHONE)
static inline CGPoint
CNMiddlePoint(CGPoint p0, CGPoint p1)
{
	CGPoint result = {
		.x = (p0.x + p1.x) / 2.0,
		.y = (p0.y + p1.y) / 2.0
	} ;
	return result ;
}
#else
static inline NSPoint
CNMiddlePoint(NSPoint p0, NSPoint p1)
{
	NSPoint result = {
		.x = (p0.x + p1.x) / 2.0,
		.y = (p0.y + p1.y) / 2.0
	} ;
	return result ;
}
#endif

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


