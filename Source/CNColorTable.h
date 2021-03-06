/**
 * @file	CNColorTable.h
 * @brief	Define CNColorTable class
 * @par Copyright
 *   Copyright (C) 2014 Steel Wheels Project
 * @par Reference
 *   <a href="http://lowlife.jp/yasusii/static/color_chart.html">RGB Color Chart</a>
 */

#import "CNGraphicsType.h"

@interface CNColorTable : NSObject

@property (readonly, nonatomic) struct CNRGB snow ;
@property (readonly, nonatomic) struct CNRGB ghostWhite ;
@property (readonly, nonatomic) struct CNRGB whiteSmoke ;
@property (readonly, nonatomic) struct CNRGB gainsboro ;
@property (readonly, nonatomic) struct CNRGB floralWhite ;
@property (readonly, nonatomic) struct CNRGB oldLace ;
@property (readonly, nonatomic) struct CNRGB linen ;
@property (readonly, nonatomic) struct CNRGB antiqueWhite ;
@property (readonly, nonatomic) struct CNRGB papayaWhip ;
@property (readonly, nonatomic) struct CNRGB blanchedAlmond ;
@property (readonly, nonatomic) struct CNRGB bisque ;
@property (readonly, nonatomic) struct CNRGB peachPuff ;
@property (readonly, nonatomic) struct CNRGB navajoWhite ;
@property (readonly, nonatomic) struct CNRGB moccasin ;
@property (readonly, nonatomic) struct CNRGB cornsilk ;
@property (readonly, nonatomic) struct CNRGB ivory ;
@property (readonly, nonatomic) struct CNRGB lemonChiffon ;
@property (readonly, nonatomic) struct CNRGB seashell ;
@property (readonly, nonatomic) struct CNRGB honeydew ;
@property (readonly, nonatomic) struct CNRGB mintCream ;
@property (readonly, nonatomic) struct CNRGB azure ;
@property (readonly, nonatomic) struct CNRGB aliceBlue ;
@property (readonly, nonatomic) struct CNRGB lavender ;
@property (readonly, nonatomic) struct CNRGB lavenderBlush ;
@property (readonly, nonatomic) struct CNRGB mistyRose ;
@property (readonly, nonatomic) struct CNRGB white ;
@property (readonly, nonatomic) struct CNRGB black ;
@property (readonly, nonatomic) struct CNRGB darkSlateGray ;
@property (readonly, nonatomic) struct CNRGB dimGray ;
@property (readonly, nonatomic) struct CNRGB slateGray ;
@property (readonly, nonatomic) struct CNRGB lightSlateGray ;
@property (readonly, nonatomic) struct CNRGB gray ;
@property (readonly, nonatomic) struct CNRGB lightGray ;
@property (readonly, nonatomic) struct CNRGB midnightBlue ;
@property (readonly, nonatomic) struct CNRGB navy ;
@property (readonly, nonatomic) struct CNRGB navyBlue ;
@property (readonly, nonatomic) struct CNRGB cornflowerBlue ;
@property (readonly, nonatomic) struct CNRGB darkSlateBlue ;
@property (readonly, nonatomic) struct CNRGB slateBlue ;
@property (readonly, nonatomic) struct CNRGB mediumSlateBlue ;
@property (readonly, nonatomic) struct CNRGB lightSlateBlue ;
@property (readonly, nonatomic) struct CNRGB mediumBlue ;
@property (readonly, nonatomic) struct CNRGB royalBlue ;
@property (readonly, nonatomic) struct CNRGB blue ;
@property (readonly, nonatomic) struct CNRGB dodgerBlue ;
@property (readonly, nonatomic) struct CNRGB deepSkyBlue ;
@property (readonly, nonatomic) struct CNRGB skyBlue ;
@property (readonly, nonatomic) struct CNRGB lightSkyBlue ;
@property (readonly, nonatomic) struct CNRGB steelBlue ;
@property (readonly, nonatomic) struct CNRGB lightSteelBlue ;
@property (readonly, nonatomic) struct CNRGB lightBlue ;
@property (readonly, nonatomic) struct CNRGB powderBlue ;
@property (readonly, nonatomic) struct CNRGB paleTurquoise ;
@property (readonly, nonatomic) struct CNRGB darkTurquoise ;
@property (readonly, nonatomic) struct CNRGB mediumTurquoise ;
@property (readonly, nonatomic) struct CNRGB turquoise ;
@property (readonly, nonatomic) struct CNRGB cyan ;
@property (readonly, nonatomic) struct CNRGB lightCyan ;
@property (readonly, nonatomic) struct CNRGB cadetBlue ;
@property (readonly, nonatomic) struct CNRGB mediumAquamarine ;
@property (readonly, nonatomic) struct CNRGB aquamarine ;
@property (readonly, nonatomic) struct CNRGB darkGreen ;
@property (readonly, nonatomic) struct CNRGB darkOliveGreen ;
@property (readonly, nonatomic) struct CNRGB darkSeaGreen ;
@property (readonly, nonatomic) struct CNRGB seaGreen ;
@property (readonly, nonatomic) struct CNRGB mediumSeaGreen ;
@property (readonly, nonatomic) struct CNRGB lightSeaGreen ;
@property (readonly, nonatomic) struct CNRGB paleGreen ;
@property (readonly, nonatomic) struct CNRGB springGreen ;
@property (readonly, nonatomic) struct CNRGB lawnGreen ;
@property (readonly, nonatomic) struct CNRGB green ;
@property (readonly, nonatomic) struct CNRGB chartreuse ;
@property (readonly, nonatomic) struct CNRGB mediumSpringGreen ;
@property (readonly, nonatomic) struct CNRGB greenYellow ;
@property (readonly, nonatomic) struct CNRGB limeGreen ;
@property (readonly, nonatomic) struct CNRGB yellowGreen ;
@property (readonly, nonatomic) struct CNRGB forestGreen ;
@property (readonly, nonatomic) struct CNRGB oliveDrab ;
@property (readonly, nonatomic) struct CNRGB darkKhaki ;
@property (readonly, nonatomic) struct CNRGB khaki ;
@property (readonly, nonatomic) struct CNRGB paleGoldenrod ;
@property (readonly, nonatomic) struct CNRGB lightGoldenrodYellow ;
@property (readonly, nonatomic) struct CNRGB lightYellow ;
@property (readonly, nonatomic) struct CNRGB yellow ;
@property (readonly, nonatomic) struct CNRGB gold ;
@property (readonly, nonatomic) struct CNRGB lightGoldenrod ;
@property (readonly, nonatomic) struct CNRGB goldenrod ;
@property (readonly, nonatomic) struct CNRGB darkGoldenrod ;
@property (readonly, nonatomic) struct CNRGB rosyBrown ;
@property (readonly, nonatomic) struct CNRGB indianRed ;
@property (readonly, nonatomic) struct CNRGB saddleBrown ;
@property (readonly, nonatomic) struct CNRGB sienna ;
@property (readonly, nonatomic) struct CNRGB peru ;
@property (readonly, nonatomic) struct CNRGB burlywood ;
@property (readonly, nonatomic) struct CNRGB beige ;
@property (readonly, nonatomic) struct CNRGB wheat ;
@property (readonly, nonatomic) struct CNRGB sandyBrown ;
@property (readonly, nonatomic) struct CNRGB tan ;
@property (readonly, nonatomic) struct CNRGB chocolate ;
@property (readonly, nonatomic) struct CNRGB firebrick ;
@property (readonly, nonatomic) struct CNRGB brown ;
@property (readonly, nonatomic) struct CNRGB darkSalmon ;
@property (readonly, nonatomic) struct CNRGB salmon ;
@property (readonly, nonatomic) struct CNRGB lightSalmon ;
@property (readonly, nonatomic) struct CNRGB orange ;
@property (readonly, nonatomic) struct CNRGB darkOrange ;
@property (readonly, nonatomic) struct CNRGB coral ;
@property (readonly, nonatomic) struct CNRGB lightCoral ;
@property (readonly, nonatomic) struct CNRGB tomato ;
@property (readonly, nonatomic) struct CNRGB orangeRed ;
@property (readonly, nonatomic) struct CNRGB red ;
@property (readonly, nonatomic) struct CNRGB hotPink ;
@property (readonly, nonatomic) struct CNRGB deepPink ;
@property (readonly, nonatomic) struct CNRGB pink ;
@property (readonly, nonatomic) struct CNRGB lightPink ;
@property (readonly, nonatomic) struct CNRGB paleVioletRed ;
@property (readonly, nonatomic) struct CNRGB maroon ;
@property (readonly, nonatomic) struct CNRGB mediumVioletRed ;
@property (readonly, nonatomic) struct CNRGB violetRed ;
@property (readonly, nonatomic) struct CNRGB magenta ;
@property (readonly, nonatomic) struct CNRGB violet ;
@property (readonly, nonatomic) struct CNRGB plum ;
@property (readonly, nonatomic) struct CNRGB orchid ;
@property (readonly, nonatomic) struct CNRGB mediumOrchid ;
@property (readonly, nonatomic) struct CNRGB darkOrchid ;
@property (readonly, nonatomic) struct CNRGB darkViolet ;
@property (readonly, nonatomic) struct CNRGB blueViolet ;
@property (readonly, nonatomic) struct CNRGB purple ;
@property (readonly, nonatomic) struct CNRGB mediumPurple ;
@property (readonly, nonatomic) struct CNRGB thistle ;
@property (readonly, nonatomic) struct CNRGB snow1 ;
@property (readonly, nonatomic) struct CNRGB snow2 ;
@property (readonly, nonatomic) struct CNRGB snow3 ;
@property (readonly, nonatomic) struct CNRGB snow4 ;
@property (readonly, nonatomic) struct CNRGB seashell1 ;
@property (readonly, nonatomic) struct CNRGB seashell2 ;
@property (readonly, nonatomic) struct CNRGB seashell3 ;
@property (readonly, nonatomic) struct CNRGB seashell4 ;
@property (readonly, nonatomic) struct CNRGB antiqueWhite1 ;
@property (readonly, nonatomic) struct CNRGB antiqueWhite2 ;
@property (readonly, nonatomic) struct CNRGB antiqueWhite3 ;
@property (readonly, nonatomic) struct CNRGB antiqueWhite4 ;
@property (readonly, nonatomic) struct CNRGB bisque1 ;
@property (readonly, nonatomic) struct CNRGB bisque2 ;
@property (readonly, nonatomic) struct CNRGB bisque3 ;
@property (readonly, nonatomic) struct CNRGB bisque4 ;
@property (readonly, nonatomic) struct CNRGB peachPuff1 ;
@property (readonly, nonatomic) struct CNRGB peachPuff2 ;
@property (readonly, nonatomic) struct CNRGB peachPuff3 ;
@property (readonly, nonatomic) struct CNRGB peachPuff4 ;
@property (readonly, nonatomic) struct CNRGB navajoWhite1 ;
@property (readonly, nonatomic) struct CNRGB navajoWhite2 ;
@property (readonly, nonatomic) struct CNRGB navajoWhite3 ;
@property (readonly, nonatomic) struct CNRGB navajoWhite4 ;
@property (readonly, nonatomic) struct CNRGB lemonChiffon1 ;
@property (readonly, nonatomic) struct CNRGB lemonChiffon2 ;
@property (readonly, nonatomic) struct CNRGB lemonChiffon3 ;
@property (readonly, nonatomic) struct CNRGB lemonChiffon4 ;
@property (readonly, nonatomic) struct CNRGB cornsilk1 ;
@property (readonly, nonatomic) struct CNRGB cornsilk2 ;
@property (readonly, nonatomic) struct CNRGB cornsilk3 ;
@property (readonly, nonatomic) struct CNRGB cornsilk4 ;
@property (readonly, nonatomic) struct CNRGB ivory1 ;
@property (readonly, nonatomic) struct CNRGB ivory2 ;
@property (readonly, nonatomic) struct CNRGB ivory3 ;
@property (readonly, nonatomic) struct CNRGB ivory4 ;
@property (readonly, nonatomic) struct CNRGB honeydew1 ;
@property (readonly, nonatomic) struct CNRGB honeydew2 ;
@property (readonly, nonatomic) struct CNRGB honeydew3 ;
@property (readonly, nonatomic) struct CNRGB honeydew4 ;
@property (readonly, nonatomic) struct CNRGB lavenderBlush1 ;
@property (readonly, nonatomic) struct CNRGB lavenderBlush2 ;
@property (readonly, nonatomic) struct CNRGB lavenderBlush3 ;
@property (readonly, nonatomic) struct CNRGB lavenderBlush4 ;
@property (readonly, nonatomic) struct CNRGB mistyRose1 ;
@property (readonly, nonatomic) struct CNRGB mistyRose2 ;
@property (readonly, nonatomic) struct CNRGB mistyRose3 ;
@property (readonly, nonatomic) struct CNRGB mistyRose4 ;
@property (readonly, nonatomic) struct CNRGB azure1 ;
@property (readonly, nonatomic) struct CNRGB azure2 ;
@property (readonly, nonatomic) struct CNRGB azure3 ;
@property (readonly, nonatomic) struct CNRGB azure4 ;
@property (readonly, nonatomic) struct CNRGB slateBlue1 ;
@property (readonly, nonatomic) struct CNRGB slateBlue2 ;
@property (readonly, nonatomic) struct CNRGB slateBlue3 ;
@property (readonly, nonatomic) struct CNRGB slateBlue4 ;
@property (readonly, nonatomic) struct CNRGB royalBlue1 ;
@property (readonly, nonatomic) struct CNRGB royalBlue2 ;
@property (readonly, nonatomic) struct CNRGB royalBlue3 ;
@property (readonly, nonatomic) struct CNRGB royalBlue4 ;
@property (readonly, nonatomic) struct CNRGB blue1 ;
@property (readonly, nonatomic) struct CNRGB blue2 ;
@property (readonly, nonatomic) struct CNRGB blue3 ;
@property (readonly, nonatomic) struct CNRGB blue4 ;
@property (readonly, nonatomic) struct CNRGB dodgerBlue1 ;
@property (readonly, nonatomic) struct CNRGB dodgerBlue2 ;
@property (readonly, nonatomic) struct CNRGB dodgerBlue3 ;
@property (readonly, nonatomic) struct CNRGB dodgerBlue4 ;
@property (readonly, nonatomic) struct CNRGB steelBlue1 ;
@property (readonly, nonatomic) struct CNRGB steelBlue2 ;
@property (readonly, nonatomic) struct CNRGB steelBlue3 ;
@property (readonly, nonatomic) struct CNRGB steelBlue4 ;
@property (readonly, nonatomic) struct CNRGB deepSkyBlue1 ;
@property (readonly, nonatomic) struct CNRGB deepSkyBlue2 ;
@property (readonly, nonatomic) struct CNRGB deepSkyBlue3 ;
@property (readonly, nonatomic) struct CNRGB deepSkyBlue4 ;
@property (readonly, nonatomic) struct CNRGB skyBlue1 ;
@property (readonly, nonatomic) struct CNRGB skyBlue2 ;
@property (readonly, nonatomic) struct CNRGB skyBlue3 ;
@property (readonly, nonatomic) struct CNRGB skyBlue4 ;
@property (readonly, nonatomic) struct CNRGB lightSkyBlue1 ;
@property (readonly, nonatomic) struct CNRGB lightSkyBlue2 ;
@property (readonly, nonatomic) struct CNRGB lightSkyBlue3 ;
@property (readonly, nonatomic) struct CNRGB lightSkyBlue4 ;
@property (readonly, nonatomic) struct CNRGB slateGray1 ;
@property (readonly, nonatomic) struct CNRGB slateGray2 ;
@property (readonly, nonatomic) struct CNRGB slateGray3 ;
@property (readonly, nonatomic) struct CNRGB slateGray4 ;
@property (readonly, nonatomic) struct CNRGB lightSteelBlue1 ;
@property (readonly, nonatomic) struct CNRGB lightSteelBlue2 ;
@property (readonly, nonatomic) struct CNRGB lightSteelBlue3 ;
@property (readonly, nonatomic) struct CNRGB lightSteelBlue4 ;
@property (readonly, nonatomic) struct CNRGB lightBlue1 ;
@property (readonly, nonatomic) struct CNRGB lightBlue2 ;
@property (readonly, nonatomic) struct CNRGB lightBlue3 ;
@property (readonly, nonatomic) struct CNRGB lightBlue4 ;
@property (readonly, nonatomic) struct CNRGB lightCyan1 ;
@property (readonly, nonatomic) struct CNRGB lightCyan2 ;
@property (readonly, nonatomic) struct CNRGB lightCyan3 ;
@property (readonly, nonatomic) struct CNRGB lightCyan4 ;
@property (readonly, nonatomic) struct CNRGB paleTurquoise1 ;
@property (readonly, nonatomic) struct CNRGB paleTurquoise2 ;
@property (readonly, nonatomic) struct CNRGB paleTurquoise3 ;
@property (readonly, nonatomic) struct CNRGB paleTurquoise4 ;
@property (readonly, nonatomic) struct CNRGB cadetBlue1 ;
@property (readonly, nonatomic) struct CNRGB cadetBlue2 ;
@property (readonly, nonatomic) struct CNRGB cadetBlue3 ;
@property (readonly, nonatomic) struct CNRGB cadetBlue4 ;
@property (readonly, nonatomic) struct CNRGB turquoise1 ;
@property (readonly, nonatomic) struct CNRGB turquoise2 ;
@property (readonly, nonatomic) struct CNRGB turquoise3 ;
@property (readonly, nonatomic) struct CNRGB turquoise4 ;
@property (readonly, nonatomic) struct CNRGB cyan1 ;
@property (readonly, nonatomic) struct CNRGB cyan2 ;
@property (readonly, nonatomic) struct CNRGB cyan3 ;
@property (readonly, nonatomic) struct CNRGB cyan4 ;
@property (readonly, nonatomic) struct CNRGB darkSlateGray1 ;
@property (readonly, nonatomic) struct CNRGB darkSlateGray2 ;
@property (readonly, nonatomic) struct CNRGB darkSlateGray3 ;
@property (readonly, nonatomic) struct CNRGB darkSlateGray4 ;
@property (readonly, nonatomic) struct CNRGB aquamarine1 ;
@property (readonly, nonatomic) struct CNRGB aquamarine2 ;
@property (readonly, nonatomic) struct CNRGB aquamarine3 ;
@property (readonly, nonatomic) struct CNRGB aquamarine4 ;
@property (readonly, nonatomic) struct CNRGB darkSeaGreen1 ;
@property (readonly, nonatomic) struct CNRGB darkSeaGreen2 ;
@property (readonly, nonatomic) struct CNRGB darkSeaGreen3 ;
@property (readonly, nonatomic) struct CNRGB darkSeaGreen4 ;
@property (readonly, nonatomic) struct CNRGB seaGreen1 ;
@property (readonly, nonatomic) struct CNRGB seaGreen2 ;
@property (readonly, nonatomic) struct CNRGB seaGreen3 ;
@property (readonly, nonatomic) struct CNRGB seaGreen4 ;
@property (readonly, nonatomic) struct CNRGB paleGreen1 ;
@property (readonly, nonatomic) struct CNRGB paleGreen2 ;
@property (readonly, nonatomic) struct CNRGB paleGreen3 ;
@property (readonly, nonatomic) struct CNRGB paleGreen4 ;
@property (readonly, nonatomic) struct CNRGB springGreen1 ;
@property (readonly, nonatomic) struct CNRGB springGreen2 ;
@property (readonly, nonatomic) struct CNRGB springGreen3 ;
@property (readonly, nonatomic) struct CNRGB springGreen4 ;
@property (readonly, nonatomic) struct CNRGB green1 ;
@property (readonly, nonatomic) struct CNRGB green2 ;
@property (readonly, nonatomic) struct CNRGB green3 ;
@property (readonly, nonatomic) struct CNRGB green4 ;
@property (readonly, nonatomic) struct CNRGB chartreuse1 ;
@property (readonly, nonatomic) struct CNRGB chartreuse2 ;
@property (readonly, nonatomic) struct CNRGB chartreuse3 ;
@property (readonly, nonatomic) struct CNRGB chartreuse4 ;
@property (readonly, nonatomic) struct CNRGB oliveDrab1 ;
@property (readonly, nonatomic) struct CNRGB oliveDrab2 ;
@property (readonly, nonatomic) struct CNRGB oliveDrab3 ;
@property (readonly, nonatomic) struct CNRGB oliveDrab4 ;
@property (readonly, nonatomic) struct CNRGB darkOliveGreen1 ;
@property (readonly, nonatomic) struct CNRGB darkOliveGreen2 ;
@property (readonly, nonatomic) struct CNRGB darkOliveGreen3 ;
@property (readonly, nonatomic) struct CNRGB darkOliveGreen4 ;
@property (readonly, nonatomic) struct CNRGB khaki1 ;
@property (readonly, nonatomic) struct CNRGB khaki2 ;
@property (readonly, nonatomic) struct CNRGB khaki3 ;
@property (readonly, nonatomic) struct CNRGB khaki4 ;
@property (readonly, nonatomic) struct CNRGB lightGoldenrod1 ;
@property (readonly, nonatomic) struct CNRGB lightGoldenrod2 ;
@property (readonly, nonatomic) struct CNRGB lightGoldenrod3 ;
@property (readonly, nonatomic) struct CNRGB lightGoldenrod4 ;
@property (readonly, nonatomic) struct CNRGB lightYellow1 ;
@property (readonly, nonatomic) struct CNRGB lightYellow2 ;
@property (readonly, nonatomic) struct CNRGB lightYellow3 ;
@property (readonly, nonatomic) struct CNRGB lightYellow4 ;
@property (readonly, nonatomic) struct CNRGB yellow1 ;
@property (readonly, nonatomic) struct CNRGB yellow2 ;
@property (readonly, nonatomic) struct CNRGB yellow3 ;
@property (readonly, nonatomic) struct CNRGB yellow4 ;
@property (readonly, nonatomic) struct CNRGB gold1 ;
@property (readonly, nonatomic) struct CNRGB gold2 ;
@property (readonly, nonatomic) struct CNRGB gold3 ;
@property (readonly, nonatomic) struct CNRGB gold4 ;
@property (readonly, nonatomic) struct CNRGB goldenrod1 ;
@property (readonly, nonatomic) struct CNRGB goldenrod2 ;
@property (readonly, nonatomic) struct CNRGB goldenrod3 ;
@property (readonly, nonatomic) struct CNRGB goldenrod4 ;
@property (readonly, nonatomic) struct CNRGB darkGoldenrod1 ;
@property (readonly, nonatomic) struct CNRGB darkGoldenrod2 ;
@property (readonly, nonatomic) struct CNRGB darkGoldenrod3 ;
@property (readonly, nonatomic) struct CNRGB darkGoldenrod4 ;
@property (readonly, nonatomic) struct CNRGB rosyBrown1 ;
@property (readonly, nonatomic) struct CNRGB rosyBrown2 ;
@property (readonly, nonatomic) struct CNRGB rosyBrown3 ;
@property (readonly, nonatomic) struct CNRGB rosyBrown4 ;
@property (readonly, nonatomic) struct CNRGB indianRed1 ;
@property (readonly, nonatomic) struct CNRGB indianRed2 ;
@property (readonly, nonatomic) struct CNRGB indianRed3 ;
@property (readonly, nonatomic) struct CNRGB indianRed4 ;
@property (readonly, nonatomic) struct CNRGB sienna1 ;
@property (readonly, nonatomic) struct CNRGB sienna2 ;
@property (readonly, nonatomic) struct CNRGB sienna3 ;
@property (readonly, nonatomic) struct CNRGB sienna4 ;
@property (readonly, nonatomic) struct CNRGB burlywood1 ;
@property (readonly, nonatomic) struct CNRGB burlywood2 ;
@property (readonly, nonatomic) struct CNRGB burlywood3 ;
@property (readonly, nonatomic) struct CNRGB burlywood4 ;
@property (readonly, nonatomic) struct CNRGB wheat1 ;
@property (readonly, nonatomic) struct CNRGB wheat2 ;
@property (readonly, nonatomic) struct CNRGB wheat3 ;
@property (readonly, nonatomic) struct CNRGB wheat4 ;
@property (readonly, nonatomic) struct CNRGB tan1 ;
@property (readonly, nonatomic) struct CNRGB tan2 ;
@property (readonly, nonatomic) struct CNRGB tan3 ;
@property (readonly, nonatomic) struct CNRGB tan4 ;
@property (readonly, nonatomic) struct CNRGB chocolate1 ;
@property (readonly, nonatomic) struct CNRGB chocolate2 ;
@property (readonly, nonatomic) struct CNRGB chocolate3 ;
@property (readonly, nonatomic) struct CNRGB chocolate4 ;
@property (readonly, nonatomic) struct CNRGB firebrick1 ;
@property (readonly, nonatomic) struct CNRGB firebrick2 ;
@property (readonly, nonatomic) struct CNRGB firebrick3 ;
@property (readonly, nonatomic) struct CNRGB firebrick4 ;
@property (readonly, nonatomic) struct CNRGB brown1 ;
@property (readonly, nonatomic) struct CNRGB brown2 ;
@property (readonly, nonatomic) struct CNRGB brown3 ;
@property (readonly, nonatomic) struct CNRGB brown4 ;
@property (readonly, nonatomic) struct CNRGB salmon1 ;
@property (readonly, nonatomic) struct CNRGB salmon2 ;
@property (readonly, nonatomic) struct CNRGB salmon3 ;
@property (readonly, nonatomic) struct CNRGB salmon4 ;
@property (readonly, nonatomic) struct CNRGB lightSalmon1 ;
@property (readonly, nonatomic) struct CNRGB lightSalmon2 ;
@property (readonly, nonatomic) struct CNRGB lightSalmon3 ;
@property (readonly, nonatomic) struct CNRGB lightSalmon4 ;
@property (readonly, nonatomic) struct CNRGB orange1 ;
@property (readonly, nonatomic) struct CNRGB orange2 ;
@property (readonly, nonatomic) struct CNRGB orange3 ;
@property (readonly, nonatomic) struct CNRGB orange4 ;
@property (readonly, nonatomic) struct CNRGB darkOrange1 ;
@property (readonly, nonatomic) struct CNRGB darkOrange2 ;
@property (readonly, nonatomic) struct CNRGB darkOrange3 ;
@property (readonly, nonatomic) struct CNRGB darkOrange4 ;
@property (readonly, nonatomic) struct CNRGB coral1 ;
@property (readonly, nonatomic) struct CNRGB coral2 ;
@property (readonly, nonatomic) struct CNRGB coral3 ;
@property (readonly, nonatomic) struct CNRGB coral4 ;
@property (readonly, nonatomic) struct CNRGB tomato1 ;
@property (readonly, nonatomic) struct CNRGB tomato2 ;
@property (readonly, nonatomic) struct CNRGB tomato3 ;
@property (readonly, nonatomic) struct CNRGB tomato4 ;
@property (readonly, nonatomic) struct CNRGB orangeRed1 ;
@property (readonly, nonatomic) struct CNRGB orangeRed2 ;
@property (readonly, nonatomic) struct CNRGB orangeRed3 ;
@property (readonly, nonatomic) struct CNRGB orangeRed4 ;
@property (readonly, nonatomic) struct CNRGB red1 ;
@property (readonly, nonatomic) struct CNRGB red2 ;
@property (readonly, nonatomic) struct CNRGB red3 ;
@property (readonly, nonatomic) struct CNRGB red4 ;
@property (readonly, nonatomic) struct CNRGB deepPink1 ;
@property (readonly, nonatomic) struct CNRGB deepPink2 ;
@property (readonly, nonatomic) struct CNRGB deepPink3 ;
@property (readonly, nonatomic) struct CNRGB deepPink4 ;
@property (readonly, nonatomic) struct CNRGB hotPink1 ;
@property (readonly, nonatomic) struct CNRGB hotPink2 ;
@property (readonly, nonatomic) struct CNRGB hotPink3 ;
@property (readonly, nonatomic) struct CNRGB hotPink4 ;
@property (readonly, nonatomic) struct CNRGB pink1 ;
@property (readonly, nonatomic) struct CNRGB pink2 ;
@property (readonly, nonatomic) struct CNRGB pink3 ;
@property (readonly, nonatomic) struct CNRGB pink4 ;
@property (readonly, nonatomic) struct CNRGB lightPink1 ;
@property (readonly, nonatomic) struct CNRGB lightPink2 ;
@property (readonly, nonatomic) struct CNRGB lightPink3 ;
@property (readonly, nonatomic) struct CNRGB lightPink4 ;
@property (readonly, nonatomic) struct CNRGB paleVioletRed1 ;
@property (readonly, nonatomic) struct CNRGB paleVioletRed2 ;
@property (readonly, nonatomic) struct CNRGB paleVioletRed3 ;
@property (readonly, nonatomic) struct CNRGB paleVioletRed4 ;
@property (readonly, nonatomic) struct CNRGB maroon1 ;
@property (readonly, nonatomic) struct CNRGB maroon2 ;
@property (readonly, nonatomic) struct CNRGB maroon3 ;
@property (readonly, nonatomic) struct CNRGB maroon4 ;
@property (readonly, nonatomic) struct CNRGB violetRed1 ;
@property (readonly, nonatomic) struct CNRGB violetRed2 ;
@property (readonly, nonatomic) struct CNRGB violetRed3 ;
@property (readonly, nonatomic) struct CNRGB violetRed4 ;
@property (readonly, nonatomic) struct CNRGB magenta1 ;
@property (readonly, nonatomic) struct CNRGB magenta2 ;
@property (readonly, nonatomic) struct CNRGB magenta3 ;
@property (readonly, nonatomic) struct CNRGB magenta4 ;
@property (readonly, nonatomic) struct CNRGB orchid1 ;
@property (readonly, nonatomic) struct CNRGB orchid2 ;
@property (readonly, nonatomic) struct CNRGB orchid3 ;
@property (readonly, nonatomic) struct CNRGB orchid4 ;
@property (readonly, nonatomic) struct CNRGB plum1 ;
@property (readonly, nonatomic) struct CNRGB plum2 ;
@property (readonly, nonatomic) struct CNRGB plum3 ;
@property (readonly, nonatomic) struct CNRGB plum4 ;
@property (readonly, nonatomic) struct CNRGB mediumOrchid1 ;
@property (readonly, nonatomic) struct CNRGB mediumOrchid2 ;
@property (readonly, nonatomic) struct CNRGB mediumOrchid3 ;
@property (readonly, nonatomic) struct CNRGB mediumOrchid4 ;
@property (readonly, nonatomic) struct CNRGB darkOrchid1 ;
@property (readonly, nonatomic) struct CNRGB darkOrchid2 ;
@property (readonly, nonatomic) struct CNRGB darkOrchid3 ;
@property (readonly, nonatomic) struct CNRGB darkOrchid4 ;
@property (readonly, nonatomic) struct CNRGB purple1 ;
@property (readonly, nonatomic) struct CNRGB purple2 ;
@property (readonly, nonatomic) struct CNRGB purple3 ;
@property (readonly, nonatomic) struct CNRGB purple4 ;
@property (readonly, nonatomic) struct CNRGB mediumPurple1 ;
@property (readonly, nonatomic) struct CNRGB mediumPurple2 ;
@property (readonly, nonatomic) struct CNRGB mediumPurple3 ;
@property (readonly, nonatomic) struct CNRGB mediumPurple4 ;
@property (readonly, nonatomic) struct CNRGB thistle1 ;
@property (readonly, nonatomic) struct CNRGB thistle2 ;
@property (readonly, nonatomic) struct CNRGB thistle3 ;
@property (readonly, nonatomic) struct CNRGB thistle4 ;
@property (readonly, nonatomic) struct CNRGB gray0 ;
@property (readonly, nonatomic) struct CNRGB gray1 ;
@property (readonly, nonatomic) struct CNRGB gray2 ;
@property (readonly, nonatomic) struct CNRGB gray3 ;
@property (readonly, nonatomic) struct CNRGB gray4 ;
@property (readonly, nonatomic) struct CNRGB gray5 ;
@property (readonly, nonatomic) struct CNRGB gray6 ;
@property (readonly, nonatomic) struct CNRGB gray7 ;
@property (readonly, nonatomic) struct CNRGB gray8 ;
@property (readonly, nonatomic) struct CNRGB gray9 ;
@property (readonly, nonatomic) struct CNRGB gray10 ;
@property (readonly, nonatomic) struct CNRGB gray11 ;
@property (readonly, nonatomic) struct CNRGB gray12 ;
@property (readonly, nonatomic) struct CNRGB gray13 ;
@property (readonly, nonatomic) struct CNRGB gray14 ;
@property (readonly, nonatomic) struct CNRGB gray15 ;
@property (readonly, nonatomic) struct CNRGB gray16 ;
@property (readonly, nonatomic) struct CNRGB gray17 ;
@property (readonly, nonatomic) struct CNRGB gray18 ;
@property (readonly, nonatomic) struct CNRGB gray19 ;
@property (readonly, nonatomic) struct CNRGB gray20 ;
@property (readonly, nonatomic) struct CNRGB gray21 ;
@property (readonly, nonatomic) struct CNRGB gray22 ;
@property (readonly, nonatomic) struct CNRGB gray23 ;
@property (readonly, nonatomic) struct CNRGB gray24 ;
@property (readonly, nonatomic) struct CNRGB gray25 ;
@property (readonly, nonatomic) struct CNRGB gray26 ;
@property (readonly, nonatomic) struct CNRGB gray27 ;
@property (readonly, nonatomic) struct CNRGB gray28 ;
@property (readonly, nonatomic) struct CNRGB gray29 ;
@property (readonly, nonatomic) struct CNRGB gray30 ;
@property (readonly, nonatomic) struct CNRGB gray31 ;
@property (readonly, nonatomic) struct CNRGB gray32 ;
@property (readonly, nonatomic) struct CNRGB gray33 ;
@property (readonly, nonatomic) struct CNRGB gray34 ;
@property (readonly, nonatomic) struct CNRGB gray35 ;
@property (readonly, nonatomic) struct CNRGB gray36 ;
@property (readonly, nonatomic) struct CNRGB gray37 ;
@property (readonly, nonatomic) struct CNRGB gray38 ;
@property (readonly, nonatomic) struct CNRGB gray39 ;
@property (readonly, nonatomic) struct CNRGB gray40 ;
@property (readonly, nonatomic) struct CNRGB gray41 ;
@property (readonly, nonatomic) struct CNRGB gray42 ;
@property (readonly, nonatomic) struct CNRGB gray43 ;
@property (readonly, nonatomic) struct CNRGB gray44 ;
@property (readonly, nonatomic) struct CNRGB gray45 ;
@property (readonly, nonatomic) struct CNRGB gray46 ;
@property (readonly, nonatomic) struct CNRGB gray47 ;
@property (readonly, nonatomic) struct CNRGB gray48 ;
@property (readonly, nonatomic) struct CNRGB gray49 ;
@property (readonly, nonatomic) struct CNRGB gray50 ;
@property (readonly, nonatomic) struct CNRGB gray51 ;
@property (readonly, nonatomic) struct CNRGB gray52 ;
@property (readonly, nonatomic) struct CNRGB gray53 ;
@property (readonly, nonatomic) struct CNRGB gray54 ;
@property (readonly, nonatomic) struct CNRGB gray55 ;
@property (readonly, nonatomic) struct CNRGB gray56 ;
@property (readonly, nonatomic) struct CNRGB gray57 ;
@property (readonly, nonatomic) struct CNRGB gray58 ;
@property (readonly, nonatomic) struct CNRGB gray59 ;
@property (readonly, nonatomic) struct CNRGB gray60 ;
@property (readonly, nonatomic) struct CNRGB gray61 ;
@property (readonly, nonatomic) struct CNRGB gray62 ;
@property (readonly, nonatomic) struct CNRGB gray63 ;
@property (readonly, nonatomic) struct CNRGB gray64 ;
@property (readonly, nonatomic) struct CNRGB gray65 ;
@property (readonly, nonatomic) struct CNRGB gray66 ;
@property (readonly, nonatomic) struct CNRGB gray67 ;
@property (readonly, nonatomic) struct CNRGB gray68 ;
@property (readonly, nonatomic) struct CNRGB gray69 ;
@property (readonly, nonatomic) struct CNRGB gray70 ;
@property (readonly, nonatomic) struct CNRGB gray71 ;
@property (readonly, nonatomic) struct CNRGB gray72 ;
@property (readonly, nonatomic) struct CNRGB gray73 ;
@property (readonly, nonatomic) struct CNRGB gray74 ;
@property (readonly, nonatomic) struct CNRGB gray75 ;
@property (readonly, nonatomic) struct CNRGB gray76 ;
@property (readonly, nonatomic) struct CNRGB gray77 ;
@property (readonly, nonatomic) struct CNRGB gray78 ;
@property (readonly, nonatomic) struct CNRGB gray79 ;
@property (readonly, nonatomic) struct CNRGB gray80 ;
@property (readonly, nonatomic) struct CNRGB gray81 ;
@property (readonly, nonatomic) struct CNRGB gray82 ;
@property (readonly, nonatomic) struct CNRGB gray83 ;
@property (readonly, nonatomic) struct CNRGB gray84 ;
@property (readonly, nonatomic) struct CNRGB gray85 ;
@property (readonly, nonatomic) struct CNRGB gray86 ;
@property (readonly, nonatomic) struct CNRGB gray87 ;
@property (readonly, nonatomic) struct CNRGB gray88 ;
@property (readonly, nonatomic) struct CNRGB gray89 ;
@property (readonly, nonatomic) struct CNRGB gray90 ;
@property (readonly, nonatomic) struct CNRGB gray91 ;
@property (readonly, nonatomic) struct CNRGB gray92 ;
@property (readonly, nonatomic) struct CNRGB gray93 ;
@property (readonly, nonatomic) struct CNRGB gray94 ;
@property (readonly, nonatomic) struct CNRGB gray95 ;
@property (readonly, nonatomic) struct CNRGB gray96 ;
@property (readonly, nonatomic) struct CNRGB gray97 ;
@property (readonly, nonatomic) struct CNRGB gray98 ;
@property (readonly, nonatomic) struct CNRGB gray99 ;
@property (readonly, nonatomic) struct CNRGB gray100 ;
@property (readonly, nonatomic) struct CNRGB darkGray ;
@property (readonly, nonatomic) struct CNRGB darkBlue ;
@property (readonly, nonatomic) struct CNRGB darkCyan ;
@property (readonly, nonatomic) struct CNRGB darkMagenta ;
@property (readonly, nonatomic) struct CNRGB darkRed ;
@property (readonly, nonatomic) struct CNRGB lightGreen ;

+ (CNColorTable *) defaultColorTable ;

- (instancetype) init ;

@end

#undef KCColor

