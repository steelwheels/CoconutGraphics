/**
 * @file	UTColorTable.m
 * @brief	Unit test for CNColorTable class
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import "UnitTest.h"

static void initColorTable(CNColorTable * dst) ;
static void printColorTable(CNColorTable * src) ;

void
UTColorTable(void)
{
	CNColorTable * table = [[CNColorTable alloc] initWithCount: 10] ;
	initColorTable(table) ;
	printColorTable(table) ;
}

static void
initColorTable(CNColorTable * dst)
{
	NSUInteger	i, count = dst.count ;
	struct CNRGB *	rgbptr = dst.rgbArray ;
	struct CNRGB black = {
		.r = 0.0,
		.g = 0.0,
		.b = 0.0
	} ;
	for(i=0 ; i<count ; i++, rgbptr++){
		*rgbptr = black ;
	}
}

static void
printColorTable(CNColorTable * src)
{
	puts("[ColorTable]") ;
	printf(" count : %tu\n", src.count) ;
	
	NSUInteger		i, count = src.count ;
	const struct CNRGB *	rgbptr = src.rgbArray ;
	for(i=0 ; i<count ; i++, rgbptr++){
		double r = rgbptr->r ;
		double g = rgbptr->g ;
		double b = rgbptr->b ;
		printf("  {%lf, %lf, %lf}\n", r, g, b) ;
	}
}