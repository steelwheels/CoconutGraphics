/**
 * @file	UTColorNameTable.m
 * @brief	Unit test for CNColorNameTable class
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import "UnitTest.h"

static void testColor(CNColorNameTable * ntable, const char * colname) ;

void
UTColorNameTable(void)
{
	CNColorNameTable * ntable = [CNColorNameTable sharedColorNameTable] ;
	
	testColor(ntable, "white") ;
	testColor(ntable, "red") ;
	testColor(ntable, "green") ;
	testColor(ntable, "blue") ;
	testColor(ntable, "banana") ;
}

static void
testColor(CNColorNameTable * ntable, const char * colname)
{
	printf("\"%s\" -> ", colname) ;
	
	NSString *	colstr = [[NSString alloc] initWithUTF8String: colname] ;
	struct CNRGB	rgb ;
	if([ntable getColor: &rgb byName: colstr]){
		printf("{r:%lf, r:%lf, b:%lf, a:%lf}\n", rgb.red, rgb.green, rgb.blue, rgb.alpha) ;
	} else {
		puts("not found") ;
	}
}
