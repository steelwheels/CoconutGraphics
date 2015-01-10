/**
 * @file	CNGraphicsType.h
 * @brief	Basic data type definition
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#ifndef CNGRAPHICSTYPE_H
#define CNGRAPHICSTYPE_H

#import <TargetConditionals.h>
#if TARGET_OS_IPHONE
#	import <UIKit/UIKit.h>
#else
#	import <AppKit/AppKit.h>
#endif
#import <CoreGraphics/CoreGraphics.h>

struct CNRGB {
	CGFloat		red ;
	CGFloat		green ;
	CGFloat		blue ;
	CGFloat		alpha ;
} ;

#endif	/* CNGRAPHICSTYPE_H */

