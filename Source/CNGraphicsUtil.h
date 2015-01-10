/**
 * @file	CNGraphicsUtil.h
 * @brief	Define CNGraphicsUtil class
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import <Foundation/Foundation.h>

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

#endif /* !defined(TARGET_OS_IPHONE) */


