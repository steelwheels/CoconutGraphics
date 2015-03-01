/**
 * @file	CoconutGraphics.h
 * @brief	Top header file for CoconutGraphics
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import <Foundation/Foundation.h>
#if TARGET_OS_IPHONE

#else /* TARGET_OS_IPHONE */
	//! Project version number for CoconutGraphics.
	FOUNDATION_EXPORT double CoconutGraphicsVersionNumber;
	//! Project version string for CoconutGraphics.
	FOUNDATION_EXPORT const unsigned char CoconutGraphicsVersionString[];
#endif /* TARGET_OS_IPHONE */

// In this header, you should import all the public headers of your framework using statements like #import <CoconutGraphics/PublicHeader.h>
#import "CNGraphicsType.h"
#import "CNGraphicsFunc.h"
#import "CNCircle.h"
#import "CNGraphicsMacro.h"
#import "CNBitmap.h"
#import "CNColorTable.h"
#import "CNColorIndexTable.h"
#import "CNGraphicsUtil.h"
#import "CNDebugUtil.h"




