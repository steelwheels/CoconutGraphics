/**
 * @file	CNColorNameTable.h
 * @brief	Define CNColorNameTable class
 * @par Copyright
 *   Copyright (C) 2015 Steel Wheels Project
 */

#import "CNColorNameTable.h"
#import "CNColorTable.h"

static CNColorNameTable *	s_color_name_table ;

@interface CNRGBObject : NSObject
@property (assign, nonatomic) struct CNRGB rgb ;
- (instancetype) initWithRGB: (struct CNRGB) rgb ;
@end

@implementation CNRGBObject
@synthesize rgb ;
- (instancetype) initWithRGB: (struct CNRGB) inrgb
{
	if((self = [super init]) != nil){
		rgb = inrgb ;
	}
	return self ;
}
@end

static void
addAllColors(NSMutableDictionary * nametable) ;

@implementation CNColorNameTable

+ (void) initialize
{
	static dispatch_once_t once;
	dispatch_once( &once, ^{
		s_color_name_table = [[CNColorNameTable alloc] init] ;
	});
}

+ (CNColorNameTable *) sharedColorNameTable
{
	return s_color_name_table ;
}

- (instancetype) init
{
	if((self = [super init]) != nil){
		colorTable = [[NSMutableDictionary alloc] initWithCapacity: 256] ;
		addAllColors(colorTable) ;
	}
	return self ;
}

- (BOOL) getColor: (struct CNRGB *) dst byName: (NSString *) name
{
	CNRGBObject * obj = [colorTable objectForKey: name] ;
	if(obj != nil){
		*dst = obj.rgb ;
		return YES ;
	} else {
		return NO ;
	}
}

@end

static void
addAllColors(NSMutableDictionary * nametable)
{
	CNColorTable * ctable = [CNColorTable defaultColorTable] ;
	
#define ADD_COLOR(COLNAME) { \
		NSString * colname = [[NSString alloc] initWithUTF8String: #COLNAME] ; \
		CNRGBObject * rgbobj = [[CNRGBObject alloc] initWithRGB: ctable.COLNAME] ; \
		[nametable setObject: rgbobj forKey: colname] ; \
	}

	ADD_COLOR(snow) ;
	ADD_COLOR(ghostWhite) ;
	ADD_COLOR(whiteSmoke) ;
	ADD_COLOR(gainsboro) ;
	ADD_COLOR(floralWhite) ;
	ADD_COLOR(oldLace) ;
	ADD_COLOR(linen) ;
	ADD_COLOR(antiqueWhite) ;
	ADD_COLOR(papayaWhip) ;
	ADD_COLOR(blanchedAlmond) ;
	ADD_COLOR(bisque) ;
	ADD_COLOR(peachPuff) ;
	ADD_COLOR(navajoWhite) ;
	ADD_COLOR(moccasin) ;
	ADD_COLOR(cornsilk) ;
	ADD_COLOR(ivory) ;
	ADD_COLOR(lemonChiffon) ;
	ADD_COLOR(seashell) ;
	ADD_COLOR(honeydew) ;
	ADD_COLOR(mintCream) ;
	ADD_COLOR(azure) ;
	ADD_COLOR(aliceBlue) ;
	ADD_COLOR(lavender) ;
	ADD_COLOR(lavenderBlush) ;
	ADD_COLOR(mistyRose) ;
	ADD_COLOR(white) ;
	ADD_COLOR(black) ;
	ADD_COLOR(darkSlateGray) ;
	ADD_COLOR(dimGray) ;
	ADD_COLOR(slateGray) ;
	ADD_COLOR(lightSlateGray) ;
	ADD_COLOR(gray) ;
	ADD_COLOR(lightGray) ;
	ADD_COLOR(midnightBlue) ;
	ADD_COLOR(navy) ;
	ADD_COLOR(navyBlue) ;
	ADD_COLOR(cornflowerBlue) ;
	ADD_COLOR(darkSlateBlue) ;
	ADD_COLOR(slateBlue) ;
	ADD_COLOR(mediumSlateBlue) ;
	ADD_COLOR(lightSlateBlue) ;
	ADD_COLOR(mediumBlue) ;
	ADD_COLOR(royalBlue) ;
	ADD_COLOR(blue) ;
	ADD_COLOR(dodgerBlue) ;
	ADD_COLOR(deepSkyBlue) ;
	ADD_COLOR(skyBlue) ;
	ADD_COLOR(lightSkyBlue) ;
	ADD_COLOR(steelBlue) ;
	ADD_COLOR(lightSteelBlue) ;
	ADD_COLOR(lightBlue) ;
	ADD_COLOR(powderBlue) ;
	ADD_COLOR(paleTurquoise) ;
	ADD_COLOR(darkTurquoise) ;
	ADD_COLOR(mediumTurquoise) ;
	ADD_COLOR(turquoise) ;
	ADD_COLOR(cyan) ;
	ADD_COLOR(lightCyan) ;
	ADD_COLOR(cadetBlue) ;
	ADD_COLOR(mediumAquamarine) ;
	ADD_COLOR(aquamarine) ;
	ADD_COLOR(darkGreen) ;
	ADD_COLOR(darkOliveGreen) ;
	ADD_COLOR(darkSeaGreen) ;
	ADD_COLOR(seaGreen) ;
	ADD_COLOR(mediumSeaGreen) ;
	ADD_COLOR(lightSeaGreen) ;
	ADD_COLOR(paleGreen) ;
	ADD_COLOR(springGreen) ;
	ADD_COLOR(lawnGreen) ;
	ADD_COLOR(green) ;
	ADD_COLOR(chartreuse) ;
	ADD_COLOR(mediumSpringGreen) ;
	ADD_COLOR(greenYellow) ;
	ADD_COLOR(limeGreen) ;
	ADD_COLOR(yellowGreen) ;
	ADD_COLOR(forestGreen) ;
	ADD_COLOR(oliveDrab) ;
	ADD_COLOR(darkKhaki) ;
	ADD_COLOR(khaki) ;
	ADD_COLOR(paleGoldenrod) ;
	ADD_COLOR(lightGoldenrodYellow) ;
	ADD_COLOR(lightYellow) ;
	ADD_COLOR(yellow) ;
	ADD_COLOR(gold) ;
	ADD_COLOR(lightGoldenrod) ;
	ADD_COLOR(goldenrod) ;
	ADD_COLOR(darkGoldenrod) ;
	ADD_COLOR(rosyBrown) ;
	ADD_COLOR(indianRed) ;
	ADD_COLOR(saddleBrown) ;
	ADD_COLOR(sienna) ;
	ADD_COLOR(peru) ;
	ADD_COLOR(burlywood) ;
	ADD_COLOR(beige) ;
	ADD_COLOR(wheat) ;
	ADD_COLOR(sandyBrown) ;
	ADD_COLOR(tan) ;
	ADD_COLOR(chocolate) ;
	ADD_COLOR(firebrick) ;
	ADD_COLOR(brown) ;
	ADD_COLOR(darkSalmon) ;
	ADD_COLOR(salmon) ;
	ADD_COLOR(lightSalmon) ;
	ADD_COLOR(orange) ;
	ADD_COLOR(darkOrange) ;
	ADD_COLOR(coral) ;
	ADD_COLOR(lightCoral) ;
	ADD_COLOR(tomato) ;
	ADD_COLOR(orangeRed) ;
	ADD_COLOR(red) ;
	ADD_COLOR(hotPink) ;
	ADD_COLOR(deepPink) ;
	ADD_COLOR(pink) ;
	ADD_COLOR(lightPink) ;
	ADD_COLOR(paleVioletRed) ;
	ADD_COLOR(maroon) ;
	ADD_COLOR(mediumVioletRed) ;
	ADD_COLOR(violetRed) ;
	ADD_COLOR(magenta) ;
	ADD_COLOR(violet) ;
	ADD_COLOR(plum) ;
	ADD_COLOR(orchid) ;
	ADD_COLOR(mediumOrchid) ;
	ADD_COLOR(darkOrchid) ;
	ADD_COLOR(darkViolet) ;
	ADD_COLOR(blueViolet) ;
	ADD_COLOR(purple) ;
	ADD_COLOR(mediumPurple) ;
	ADD_COLOR(thistle) ;
	ADD_COLOR(snow1) ;
	ADD_COLOR(snow2) ;
	ADD_COLOR(snow3) ;
	ADD_COLOR(snow4) ;
	ADD_COLOR(seashell1) ;
	ADD_COLOR(seashell2) ;
	ADD_COLOR(seashell3) ;
	ADD_COLOR(seashell4) ;
	ADD_COLOR(antiqueWhite1) ;
	ADD_COLOR(antiqueWhite2) ;
	ADD_COLOR(antiqueWhite3) ;
	ADD_COLOR(antiqueWhite4) ;
	ADD_COLOR(bisque1) ;
	ADD_COLOR(bisque2) ;
	ADD_COLOR(bisque3) ;
	ADD_COLOR(bisque4) ;
	ADD_COLOR(peachPuff1) ;
	ADD_COLOR(peachPuff2) ;
	ADD_COLOR(peachPuff3) ;
	ADD_COLOR(peachPuff4) ;
	ADD_COLOR(navajoWhite1) ;
	ADD_COLOR(navajoWhite2) ;
	ADD_COLOR(navajoWhite3) ;
	ADD_COLOR(navajoWhite4) ;
	ADD_COLOR(lemonChiffon1) ;
	ADD_COLOR(lemonChiffon2) ;
	ADD_COLOR(lemonChiffon3) ;
	ADD_COLOR(lemonChiffon4) ;
	ADD_COLOR(cornsilk1) ;
	ADD_COLOR(cornsilk2) ;
	ADD_COLOR(cornsilk3) ;
	ADD_COLOR(cornsilk4) ;
	ADD_COLOR(ivory1) ;
	ADD_COLOR(ivory2) ;
	ADD_COLOR(ivory3) ;
	ADD_COLOR(ivory4) ;
	ADD_COLOR(honeydew1) ;
	ADD_COLOR(honeydew2) ;
	ADD_COLOR(honeydew3) ;
	ADD_COLOR(honeydew4) ;
	ADD_COLOR(lavenderBlush1) ;
	ADD_COLOR(lavenderBlush2) ;
	ADD_COLOR(lavenderBlush3) ;
	ADD_COLOR(lavenderBlush4) ;
	ADD_COLOR(mistyRose1) ;
	ADD_COLOR(mistyRose2) ;
	ADD_COLOR(mistyRose3) ;
	ADD_COLOR(mistyRose4) ;
	ADD_COLOR(azure1) ;
	ADD_COLOR(azure2) ;
	ADD_COLOR(azure3) ;
	ADD_COLOR(azure4) ;
	ADD_COLOR(slateBlue1) ;
	ADD_COLOR(slateBlue2) ;
	ADD_COLOR(slateBlue3) ;
	ADD_COLOR(slateBlue4) ;
	ADD_COLOR(royalBlue1) ;
	ADD_COLOR(royalBlue2) ;
	ADD_COLOR(royalBlue3) ;
	ADD_COLOR(royalBlue4) ;
	ADD_COLOR(blue1) ;
	ADD_COLOR(blue2) ;
	ADD_COLOR(blue3) ;
	ADD_COLOR(blue4) ;
	ADD_COLOR(dodgerBlue1) ;
	ADD_COLOR(dodgerBlue2) ;
	ADD_COLOR(dodgerBlue3) ;
	ADD_COLOR(dodgerBlue4) ;
	ADD_COLOR(steelBlue1) ;
	ADD_COLOR(steelBlue2) ;
	ADD_COLOR(steelBlue3) ;
	ADD_COLOR(steelBlue4) ;
	ADD_COLOR(deepSkyBlue1) ;
	ADD_COLOR(deepSkyBlue2) ;
	ADD_COLOR(deepSkyBlue3) ;
	ADD_COLOR(deepSkyBlue4) ;
	ADD_COLOR(skyBlue1) ;
	ADD_COLOR(skyBlue2) ;
	ADD_COLOR(skyBlue3) ;
	ADD_COLOR(skyBlue4) ;
	ADD_COLOR(lightSkyBlue1) ;
	ADD_COLOR(lightSkyBlue2) ;
	ADD_COLOR(lightSkyBlue3) ;
	ADD_COLOR(lightSkyBlue4) ;
	ADD_COLOR(slateGray1) ;
	ADD_COLOR(slateGray2) ;
	ADD_COLOR(slateGray3) ;
	ADD_COLOR(slateGray4) ;
	ADD_COLOR(lightSteelBlue1) ;
	ADD_COLOR(lightSteelBlue2) ;
	ADD_COLOR(lightSteelBlue3) ;
	ADD_COLOR(lightSteelBlue4) ;
	ADD_COLOR(lightBlue1) ;
	ADD_COLOR(lightBlue2) ;
	ADD_COLOR(lightBlue3) ;
	ADD_COLOR(lightBlue4) ;
	ADD_COLOR(lightCyan1) ;
	ADD_COLOR(lightCyan2) ;
	ADD_COLOR(lightCyan3) ;
	ADD_COLOR(lightCyan4) ;
	ADD_COLOR(paleTurquoise1) ;
	ADD_COLOR(paleTurquoise2) ;
	ADD_COLOR(paleTurquoise3) ;
	ADD_COLOR(paleTurquoise4) ;
	ADD_COLOR(cadetBlue1) ;
	ADD_COLOR(cadetBlue2) ;
	ADD_COLOR(cadetBlue3) ;
	ADD_COLOR(cadetBlue4) ;
	ADD_COLOR(turquoise1) ;
	ADD_COLOR(turquoise2) ;
	ADD_COLOR(turquoise3) ;
	ADD_COLOR(turquoise4) ;
	ADD_COLOR(cyan1) ;
	ADD_COLOR(cyan2) ;
	ADD_COLOR(cyan3) ;
	ADD_COLOR(cyan4) ;
	ADD_COLOR(darkSlateGray1) ;
	ADD_COLOR(darkSlateGray2) ;
	ADD_COLOR(darkSlateGray3) ;
	ADD_COLOR(darkSlateGray4) ;
	ADD_COLOR(aquamarine1) ;
	ADD_COLOR(aquamarine2) ;
	ADD_COLOR(aquamarine3) ;
	ADD_COLOR(aquamarine4) ;
	ADD_COLOR(darkSeaGreen1) ;
	ADD_COLOR(darkSeaGreen2) ;
	ADD_COLOR(darkSeaGreen3) ;
	ADD_COLOR(darkSeaGreen4) ;
	ADD_COLOR(seaGreen1) ;
	ADD_COLOR(seaGreen2) ;
	ADD_COLOR(seaGreen3) ;
	ADD_COLOR(seaGreen4) ;
	ADD_COLOR(paleGreen1) ;
	ADD_COLOR(paleGreen2) ;
	ADD_COLOR(paleGreen3) ;
	ADD_COLOR(paleGreen4) ;
	ADD_COLOR(springGreen1) ;
	ADD_COLOR(springGreen2) ;
	ADD_COLOR(springGreen3) ;
	ADD_COLOR(springGreen4) ;
	ADD_COLOR(green1) ;
	ADD_COLOR(green2) ;
	ADD_COLOR(green3) ;
	ADD_COLOR(green4) ;
	ADD_COLOR(chartreuse1) ;
	ADD_COLOR(chartreuse2) ;
	ADD_COLOR(chartreuse3) ;
	ADD_COLOR(chartreuse4) ;
	ADD_COLOR(oliveDrab1) ;
	ADD_COLOR(oliveDrab2) ;
	ADD_COLOR(oliveDrab3) ;
	ADD_COLOR(oliveDrab4) ;
	ADD_COLOR(darkOliveGreen1) ;
	ADD_COLOR(darkOliveGreen2) ;
	ADD_COLOR(darkOliveGreen3) ;
	ADD_COLOR(darkOliveGreen4) ;
	ADD_COLOR(khaki1) ;
	ADD_COLOR(khaki2) ;
	ADD_COLOR(khaki3) ;
	ADD_COLOR(khaki4) ;
	ADD_COLOR(lightGoldenrod1) ;
	ADD_COLOR(lightGoldenrod2) ;
	ADD_COLOR(lightGoldenrod3) ;
	ADD_COLOR(lightGoldenrod4) ;
	ADD_COLOR(lightYellow1) ;
	ADD_COLOR(lightYellow2) ;
	ADD_COLOR(lightYellow3) ;
	ADD_COLOR(lightYellow4) ;
	ADD_COLOR(yellow1) ;
	ADD_COLOR(yellow2) ;
	ADD_COLOR(yellow3) ;
	ADD_COLOR(yellow4) ;
	ADD_COLOR(gold1) ;
	ADD_COLOR(gold2) ;
	ADD_COLOR(gold3) ;
	ADD_COLOR(gold4) ;
	ADD_COLOR(goldenrod1) ;
	ADD_COLOR(goldenrod2) ;
	ADD_COLOR(goldenrod3) ;
	ADD_COLOR(goldenrod4) ;
	ADD_COLOR(darkGoldenrod1) ;
	ADD_COLOR(darkGoldenrod2) ;
	ADD_COLOR(darkGoldenrod3) ;
	ADD_COLOR(darkGoldenrod4) ;
	ADD_COLOR(rosyBrown1) ;
	ADD_COLOR(rosyBrown2) ;
	ADD_COLOR(rosyBrown3) ;
	ADD_COLOR(rosyBrown4) ;
	ADD_COLOR(indianRed1) ;
	ADD_COLOR(indianRed2) ;
	ADD_COLOR(indianRed3) ;
	ADD_COLOR(indianRed4) ;
	ADD_COLOR(sienna1) ;
	ADD_COLOR(sienna2) ;
	ADD_COLOR(sienna3) ;
	ADD_COLOR(sienna4) ;
	ADD_COLOR(burlywood1) ;
	ADD_COLOR(burlywood2) ;
	ADD_COLOR(burlywood3) ;
	ADD_COLOR(burlywood4) ;
	ADD_COLOR(wheat1) ;
	ADD_COLOR(wheat2) ;
	ADD_COLOR(wheat3) ;
	ADD_COLOR(wheat4) ;
	ADD_COLOR(tan1) ;
	ADD_COLOR(tan2) ;
	ADD_COLOR(tan3) ;
	ADD_COLOR(tan4) ;
	ADD_COLOR(chocolate1) ;
	ADD_COLOR(chocolate2) ;
	ADD_COLOR(chocolate3) ;
	ADD_COLOR(chocolate4) ;
	ADD_COLOR(firebrick1) ;
	ADD_COLOR(firebrick2) ;
	ADD_COLOR(firebrick3) ;
	ADD_COLOR(firebrick4) ;
	ADD_COLOR(brown1) ;
	ADD_COLOR(brown2) ;
	ADD_COLOR(brown3) ;
	ADD_COLOR(brown4) ;
	ADD_COLOR(salmon1) ;
	ADD_COLOR(salmon2) ;
	ADD_COLOR(salmon3) ;
	ADD_COLOR(salmon4) ;
	ADD_COLOR(lightSalmon1) ;
	ADD_COLOR(lightSalmon2) ;
	ADD_COLOR(lightSalmon3) ;
	ADD_COLOR(lightSalmon4) ;
	ADD_COLOR(orange1) ;
	ADD_COLOR(orange2) ;
	ADD_COLOR(orange3) ;
	ADD_COLOR(orange4) ;
	ADD_COLOR(darkOrange1) ;
	ADD_COLOR(darkOrange2) ;
	ADD_COLOR(darkOrange3) ;
	ADD_COLOR(darkOrange4) ;
	ADD_COLOR(coral1) ;
	ADD_COLOR(coral2) ;
	ADD_COLOR(coral3) ;
	ADD_COLOR(coral4) ;
	ADD_COLOR(tomato1) ;
	ADD_COLOR(tomato2) ;
	ADD_COLOR(tomato3) ;
	ADD_COLOR(tomato4) ;
	ADD_COLOR(orangeRed1) ;
	ADD_COLOR(orangeRed2) ;
	ADD_COLOR(orangeRed3) ;
	ADD_COLOR(orangeRed4) ;
	ADD_COLOR(red1) ;
	ADD_COLOR(red2) ;
	ADD_COLOR(red3) ;
	ADD_COLOR(red4) ;
	ADD_COLOR(deepPink1) ;
	ADD_COLOR(deepPink2) ;
	ADD_COLOR(deepPink3) ;
	ADD_COLOR(deepPink4) ;
	ADD_COLOR(hotPink1) ;
	ADD_COLOR(hotPink2) ;
	ADD_COLOR(hotPink3) ;
	ADD_COLOR(hotPink4) ;
	ADD_COLOR(pink1) ;
	ADD_COLOR(pink2) ;
	ADD_COLOR(pink3) ;
	ADD_COLOR(pink4) ;
	ADD_COLOR(lightPink1) ;
	ADD_COLOR(lightPink2) ;
	ADD_COLOR(lightPink3) ;
	ADD_COLOR(lightPink4) ;
	ADD_COLOR(paleVioletRed1) ;
	ADD_COLOR(paleVioletRed2) ;
	ADD_COLOR(paleVioletRed3) ;
	ADD_COLOR(paleVioletRed4) ;
	ADD_COLOR(maroon1) ;
	ADD_COLOR(maroon2) ;
	ADD_COLOR(maroon3) ;
	ADD_COLOR(maroon4) ;
	ADD_COLOR(violetRed1) ;
	ADD_COLOR(violetRed2) ;
	ADD_COLOR(violetRed3) ;
	ADD_COLOR(violetRed4) ;
	ADD_COLOR(magenta1) ;
	ADD_COLOR(magenta2) ;
	ADD_COLOR(magenta3) ;
	ADD_COLOR(magenta4) ;
	ADD_COLOR(orchid1) ;
	ADD_COLOR(orchid2) ;
	ADD_COLOR(orchid3) ;
	ADD_COLOR(orchid4) ;
	ADD_COLOR(plum1) ;
	ADD_COLOR(plum2) ;
	ADD_COLOR(plum3) ;
	ADD_COLOR(plum4) ;
	ADD_COLOR(mediumOrchid1) ;
	ADD_COLOR(mediumOrchid2) ;
	ADD_COLOR(mediumOrchid3) ;
	ADD_COLOR(mediumOrchid4) ;
	ADD_COLOR(darkOrchid1) ;
	ADD_COLOR(darkOrchid2) ;
	ADD_COLOR(darkOrchid3) ;
	ADD_COLOR(darkOrchid4) ;
	ADD_COLOR(purple1) ;
	ADD_COLOR(purple2) ;
	ADD_COLOR(purple3) ;
	ADD_COLOR(purple4) ;
	ADD_COLOR(mediumPurple1) ;
	ADD_COLOR(mediumPurple2) ;
	ADD_COLOR(mediumPurple3) ;
	ADD_COLOR(mediumPurple4) ;
	ADD_COLOR(thistle1) ;
	ADD_COLOR(thistle2) ;
	ADD_COLOR(thistle3) ;
	ADD_COLOR(thistle4) ;
	ADD_COLOR(gray0) ;
	ADD_COLOR(gray1) ;
	ADD_COLOR(gray2) ;
	ADD_COLOR(gray3) ;
	ADD_COLOR(gray4) ;
	ADD_COLOR(gray5) ;
	ADD_COLOR(gray6) ;
	ADD_COLOR(gray7) ;
	ADD_COLOR(gray8) ;
	ADD_COLOR(gray9) ;
	ADD_COLOR(gray10) ;
	ADD_COLOR(gray11) ;
	ADD_COLOR(gray12) ;
	ADD_COLOR(gray13) ;
	ADD_COLOR(gray14) ;
	ADD_COLOR(gray15) ;
	ADD_COLOR(gray16) ;
	ADD_COLOR(gray17) ;
	ADD_COLOR(gray18) ;
	ADD_COLOR(gray19) ;
	ADD_COLOR(gray20) ;
	ADD_COLOR(gray21) ;
	ADD_COLOR(gray22) ;
	ADD_COLOR(gray23) ;
	ADD_COLOR(gray24) ;
	ADD_COLOR(gray25) ;
	ADD_COLOR(gray26) ;
	ADD_COLOR(gray27) ;
	ADD_COLOR(gray28) ;
	ADD_COLOR(gray29) ;
	ADD_COLOR(gray30) ;
	ADD_COLOR(gray31) ;
	ADD_COLOR(gray32) ;
	ADD_COLOR(gray33) ;
	ADD_COLOR(gray34) ;
	ADD_COLOR(gray35) ;
	ADD_COLOR(gray36) ;
	ADD_COLOR(gray37) ;
	ADD_COLOR(gray38) ;
	ADD_COLOR(gray39) ;
	ADD_COLOR(gray40) ;
	ADD_COLOR(gray41) ;
	ADD_COLOR(gray42) ;
	ADD_COLOR(gray43) ;
	ADD_COLOR(gray44) ;
	ADD_COLOR(gray45) ;
	ADD_COLOR(gray46) ;
	ADD_COLOR(gray47) ;
	ADD_COLOR(gray48) ;
	ADD_COLOR(gray49) ;
	ADD_COLOR(gray50) ;
	ADD_COLOR(gray51) ;
	ADD_COLOR(gray52) ;
	ADD_COLOR(gray53) ;
	ADD_COLOR(gray54) ;
	ADD_COLOR(gray55) ;
	ADD_COLOR(gray56) ;
	ADD_COLOR(gray57) ;
	ADD_COLOR(gray58) ;
	ADD_COLOR(gray59) ;
	ADD_COLOR(gray60) ;
	ADD_COLOR(gray61) ;
	ADD_COLOR(gray62) ;
	ADD_COLOR(gray63) ;
	ADD_COLOR(gray64) ;
	ADD_COLOR(gray65) ;
	ADD_COLOR(gray66) ;
	ADD_COLOR(gray67) ;
	ADD_COLOR(gray68) ;
	ADD_COLOR(gray69) ;
	ADD_COLOR(gray70) ;
	ADD_COLOR(gray71) ;
	ADD_COLOR(gray72) ;
	ADD_COLOR(gray73) ;
	ADD_COLOR(gray74) ;
	ADD_COLOR(gray75) ;
	ADD_COLOR(gray76) ;
	ADD_COLOR(gray77) ;
	ADD_COLOR(gray78) ;
	ADD_COLOR(gray79) ;
	ADD_COLOR(gray80) ;
	ADD_COLOR(gray81) ;
	ADD_COLOR(gray82) ;
	ADD_COLOR(gray83) ;
	ADD_COLOR(gray84) ;
	ADD_COLOR(gray85) ;
	ADD_COLOR(gray86) ;
	ADD_COLOR(gray87) ;
	ADD_COLOR(gray88) ;
	ADD_COLOR(gray89) ;
	ADD_COLOR(gray90) ;
	ADD_COLOR(gray91) ;
	ADD_COLOR(gray92) ;
	ADD_COLOR(gray93) ;
	ADD_COLOR(gray94) ;
	ADD_COLOR(gray95) ;
	ADD_COLOR(gray96) ;
	ADD_COLOR(gray97) ;
	ADD_COLOR(gray98) ;
	ADD_COLOR(gray99) ;
	ADD_COLOR(gray100) ;
	ADD_COLOR(darkGray) ;
	ADD_COLOR(darkBlue) ;
	ADD_COLOR(darkCyan) ;
	ADD_COLOR(darkMagenta) ;
	ADD_COLOR(darkRed) ;
	ADD_COLOR(lightGreen) ;
}


