/**
 * @file	CNDebugUtil.h
 * @brief	Define utility functions for debugging
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import <TargetConditionals.h>
#if TARGET_OS_IPHONE
#	import <UIKit/UIKit.h>
#else
#	import <AppKit/AppKit.h>
#endif

void
CNPrintPoint(CGPoint src) ;

void
CNPrintSize(CGSize src) ;

void
CNPrintRect(CGRect src) ;
