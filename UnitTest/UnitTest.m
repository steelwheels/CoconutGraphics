/**
 * @file	UnitTest.m
 * @brief	Header file for unit test
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 */

#import "UnitTest.h"

static void printTitle(const char * title) ;

int main(int argc, const char * argv[]) {
	(void) argc ; (void) argv ;
	@autoreleasepool {
		printTitle("CNColorTable") ;	UTColorTable() ;
		printTitle("CNBitmap") ;	UTBitmap() ;
	}
    return 0;
}

static void printLine(void) ;

static void
printTitle(const char * title)
{
	printLine() ;
	printf("* %s\n", title) ;
	printLine() ;
}

static void
printLine(void)
{
	unsigned int i ;
	for(i=0 ; i<80 ; i++){
		putc('*', stdout) ;
	}
	putc('\n', stdout) ;
}