/**
 * @file	UTBitmap.m
 * @brief	Unit test for CNBitmap class
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import "UnitTest.h"

static void initBitmap(CNBitmap * dst) ;
static void printBitmap(CNBitmap * src) ;

void
UTBitmap(void)
{
	CNBitmap * bitmap = [[CNBitmap alloc] initWithWidth: 4 withHeiht: 8] ;
	initBitmap(bitmap) ;
	printBitmap(bitmap) ;
}

static void
initBitmap(CNBitmap * dst)
{
	NSUInteger width  = dst.width ;
	NSUInteger height = dst.height ;
	NSUInteger x, y ;
	CNColorIndex * indexptr = dst.indexTable ;
	for(y=0 ; y<height ; y++){
		for(x=0 ; x<width ; x++, indexptr++){
			*indexptr = (x << 16) | y ;
		}
	}
}

static void
printBitmap(CNBitmap * src)
{
	puts("[Bitmap]") ;
	printf(" width=%tu, height=%tu\n", src.width, src.height) ;
	NSUInteger width  = src.width ;
	NSUInteger height = src.height ;
	NSUInteger x, y ;
	CNColorIndex * indexptr = src.indexTable ;
	for(y=0 ; y<height ; y++){
		for(x=0 ; x<width ; x++, indexptr++){
			unsigned int index = *indexptr ;
			printf("%08x ", index) ;
		}
		putc('\n', stdout) ;
	}
}