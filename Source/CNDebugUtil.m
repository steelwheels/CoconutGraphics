/**
 * @file	CNDebugUtil.m
 * @brief	Define utility functions for debugging
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import "CNDebugUtil.h"

void
CNPrintPoint(CGPoint src)
{
	printf("(x=%.2lf, y=%.2lf)", src.x, src.y) ;
}

void
CNPrintSize(CGSize src)
{
	printf("(w=%.2lf, h=%.2lf)", src.width, src.height) ;
}

void
CNPrintRect(CGRect src)
{
	fputs("(", stdout) ;
	CNPrintPoint(src.origin) ;
	CNPrintSize(src.size) ;
	fputs(")", stdout) ;
}



