//
// Created by Joaquin Bejar Garcia on 19/10/23.
//

#include "simple_color/color.h"

namespace simple_color {

    std::map<Colors, std::string> color_map = {
            {Colors::AQUA, Aqua},
            {Colors::AQUAMARINE1, Aquamarine1},
            {Colors::AQUAMARINE1A, Aquamarine1a},
            {Colors::AQUAMARINE3, Aquamarine3},
            {Colors::BLACK, Black},
            {Colors::BLUE1, Blue1},
            {Colors::BLUE3, Blue3},
            {Colors::BLUE3A, Blue3a},
            {Colors::BLUEVIOLET, BlueViolet},
            {Colors::BLUE, Blue},
            {Colors::CADETBLUE, CadetBlue},
            {Colors::CADETBLUEA, CadetBluea},
            {Colors::CHARTREUSE1, Chartreuse1},
            {Colors::CHARTREUSE2, Chartreuse2},
            {Colors::CHARTREUSE2A, Chartreuse2a},
            {Colors::CHARTREUSE3, Chartreuse3},
            {Colors::CHARTREUSE3A, Chartreuse3a},
            {Colors::CHARTREUSE4, Chartreuse4},
            {Colors::CORNFLOWERBLUE, CornflowerBlue},
            {Colors::CORNSILK1, Cornsilk1},
            {Colors::CYAN1, Cyan1},
            {Colors::CYAN2, Cyan2},
            {Colors::CYAN, Cyan},
            {Colors::DARKBLUE, DarkBlue},
            {Colors::DARKCYAN, DarkCyan},
            {Colors::DARKGOLDENROD, DarkGoldenrod},
            {Colors::DARKGREEN, DarkGreen},
            {Colors::DARKKHAKI, DarkKhaki},
            {Colors::DARKMAGENTA, DarkMagenta},
            {Colors::DARKMAGENTAA, DarkMagentaa},
            {Colors::DARKOLIVEGREEN1, DarkOliveGreen1},
            {Colors::DARKOLIVEGREEN1A, DarkOliveGreen1a},
            {Colors::DARKOLIVEGREEN2, DarkOliveGreen2},
            {Colors::DARKOLIVEGREEN3, DarkOliveGreen3},
            {Colors::DARKOLIVEGREEN3A, DarkOliveGreen3a},
            {Colors::DARKOLIVEGREEN3B, DarkOliveGreen3b},
            {Colors::DARKORANGE3, DarkOrange3},
            {Colors::DARKORANGE3A, DarkOrange3a},
            {Colors::DARKORANGE, DarkOrange},
            {Colors::DARKRED, DarkRed},
            {Colors::DARKREDA, DarkReda},
            {Colors::DARKSEAGREEN1, DarkSeaGreen1},
            {Colors::DARKSEAGREEN1A, DarkSeaGreen1a},
            {Colors::DARKSEAGREEN2, DarkSeaGreen2},
            {Colors::DARKSEAGREEN2A, DarkSeaGreen2a},
            {Colors::DARKSEAGREEN3, DarkSeaGreen3},
            {Colors::DARKSEAGREEN3A, DarkSeaGreen3a},
            {Colors::DARKSEAGREEN4, DarkSeaGreen4},
            {Colors::DARKSEAGREEN4A, DarkSeaGreen4a},
            {Colors::DARKSEAGREEN, DarkSeaGreen},
            {Colors::DARKSLATEGRAY1, DarkSlateGray1},
            {Colors::DARKSLATEGRAY2, DarkSlateGray2},
            {Colors::DARKSLATEGRAY3, DarkSlateGray3},
            {Colors::DARKTURQUOISE, DarkTurquoise},
            {Colors::DARKVIOLET, DarkViolet},
            {Colors::DARKVIOLETA, DarkVioleta},
            {Colors::DEEPPINK1, DeepPink1},
            {Colors::DEEPPINK1A, DeepPink1a},
            {Colors::DEEPPINK2, DeepPink2},
            {Colors::DEEPPINK3, DeepPink3},
            {Colors::DEEPPINK3A, DeepPink3a},
            {Colors::DEEPPINK4, DeepPink4},
            {Colors::DEEPPINK4A, DeepPink4a},
            {Colors::DEEPPINK4B, DeepPink4b},
            {Colors::DEEPSKYBLUE1, DeepSkyBlue1},
            {Colors::DEEPSKYBLUE2, DeepSkyBlue2},
            {Colors::DEEPSKYBLUE3, DeepSkyBlue3},
            {Colors::DEEPSKYBLUE3A, DeepSkyBlue3a},
            {Colors::DEEPSKYBLUE4, DeepSkyBlue4},
            {Colors::DEEPSKYBLUE4A, DeepSkyBlue4a},
            {Colors::DEEPSKYBLUE4B, DeepSkyBlue4b},
            {Colors::DODGERBLUE1, DodgerBlue1},
            {Colors::DODGERBLUE2, DodgerBlue2},
            {Colors::DODGERBLUE3, DodgerBlue3},
            {Colors::FUCHSIA, Fuchsia},
            {Colors::GOLD1, Gold1},
            {Colors::GOLD3, Gold3},
            {Colors::GOLD3A, Gold3a},
            {Colors::GREEN1, Green1},
            {Colors::GREEN3, Green3},
            {Colors::GREEN3A, Green3a},
            {Colors::GREEN4, Green4},
            {Colors::GREENYELLOW, GreenYellow},
            {Colors::GREEN, Green},
            {Colors::GREY0, Grey0},
            {Colors::GREY100, Grey100},
            {Colors::GREY11, Grey11},
            {Colors::GREY15, Grey15},
            {Colors::GREY19, Grey19},
            {Colors::GREY23, Grey23},
            {Colors::GREY27, Grey27},
            {Colors::GREY30, Grey30},
            {Colors::GREY35, Grey35},
            {Colors::GREY37, Grey37},
            {Colors::GREY39, Grey39},
            {Colors::GREY3, Grey3},
            {Colors::GREY42, Grey42},
            {Colors::GREY46, Grey46},
            {Colors::GREY50, Grey50},
            {Colors::GREY53, Grey53},
            {Colors::GREY54, Grey54},
            {Colors::GREY58, Grey58},
            {Colors::GREY62, Grey62},
            {Colors::GREY63, Grey63},
            {Colors::GREY66, Grey66},
            {Colors::GREY69, Grey69},
            {Colors::GREY70, Grey70},
            {Colors::GREY74, Grey74},
            {Colors::GREY78, Grey78},
            {Colors::GREY7, Grey7},
            {Colors::GREY82, Grey82},
            {Colors::GREY84, Grey84},
            {Colors::GREY85, Grey85},
            {Colors::GREY89, Grey89},
            {Colors::GREY93, Grey93},
            {Colors::GREY, Grey},
            {Colors::HONEYDEW2, Honeydew2},
            {Colors::HOTPINK2, HotPink2},
            {Colors::HOTPINK3, HotPink3},
            {Colors::HOTPINK3A, HotPink3a},
            {Colors::HOTPINK, HotPink},
            {Colors::HOTPINKA, HotPinka},
            {Colors::INDIANRED1, IndianRed1},
            {Colors::INDIANRED1A, IndianRed1a},
            {Colors::INDIANRED, IndianRed},
            {Colors::INDIANREDA, IndianReda},
            {Colors::KHAKI1, Khaki1},
            {Colors::KHAKI3, Khaki3},
            {Colors::LIGHTCORAL, LightCoral},
            {Colors::LIGHTCYAN1, LightCyan1},
            {Colors::LIGHTCYAN3, LightCyan3},
            {Colors::LIGHTGOLDENROD1, LightGoldenrod1},
            {Colors::LIGHTGOLDENROD2, LightGoldenrod2},
            {Colors::LIGHTGOLDENROD2A, LightGoldenrod2a},
            {Colors::LIGHTGOLDENROD2B, LightGoldenrod2b},
            {Colors::LIGHTGOLDENROD3, LightGoldenrod3},
            {Colors::LIGHTGREEN, LightGreen},
            {Colors::LIGHTGREENA, LightGreena},
            {Colors::LIGHTPINK1, LightPink1},
            {Colors::LIGHTPINK3, LightPink3},
            {Colors::LIGHTPINK4, LightPink4},
            {Colors::LIGHTSALMON1, LightSalmon1},
            {Colors::LIGHTSALMON3, LightSalmon3},
            {Colors::LIGHTSALMON3A, LightSalmon3a},
            {Colors::LIGHTSEAGREEN, LightSeaGreen},
            {Colors::LIGHTSKYBLUE1, LightSkyBlue1},
            {Colors::LIGHTSKYBLUE3, LightSkyBlue3},
            {Colors::LIGHTSKYBLUE3A, LightSkyBlue3a},
            {Colors::LIGHTSLATEBLUE, LightSlateBlue},
            {Colors::LIGHTSLATEGREY, LightSlateGrey},
            {Colors::LIGHTSTEELBLUE1, LightSteelBlue1},
            {Colors::LIGHTSTEELBLUE3, LightSteelBlue3},
            {Colors::LIGHTSTEELBLUE, LightSteelBlue},
            {Colors::LIGHTYELLOW, LightYellow},
            {Colors::LIME, Lime},
            {Colors::MAGENTA, Magenta},
            {Colors::MAGENTA1, Magenta1},
            {Colors::MAGENTA2, Magenta2},
            {Colors::MAGENTA3, Magenta3},
            {Colors::MAGENTA3A, Magenta3a},
            {Colors::MAGENTA3B, Magenta3b},
            {Colors::MAROON, Maroon},
            {Colors::MEDIUMORCHID1, MediumOrchid1},
            {Colors::MEDIUMORCHID1A, MediumOrchid1a},
            {Colors::MEDIUMORCHID3, MediumOrchid3},
            {Colors::MEDIUMORCHID, MediumOrchid},
            {Colors::MEDIUMPURPLE1, MediumPurple1},
            {Colors::MEDIUMPURPLE2, MediumPurple2},
            {Colors::MEDIUMPURPLE2A, MediumPurple2a},
            {Colors::MEDIUMPURPLE3, MediumPurple3},
            {Colors::MEDIUMPURPLE3A, MediumPurple3a},
            {Colors::MEDIUMPURPLE4, MediumPurple4},
            {Colors::MEDIUMPURPLE, MediumPurple},
            {Colors::MEDIUMSPRINGGREEN, MediumSpringGreen},
            {Colors::MEDIUMTURQUOISE, MediumTurquoise},
            {Colors::MEDIUMVIOLETRED, MediumVioletRed},
            {Colors::MISTYROSE1, MistyRose1},
            {Colors::MISTYROSE3, MistyRose3},
            {Colors::NAVAJOWHITE1, NavajoWhite1},
            {Colors::NAVAJOWHITE3, NavajoWhite3},
            {Colors::NAVYBLUE, NavyBlue},
            {Colors::NAVY, Navy},
            {Colors::OLIVE, Olive},
            {Colors::ORANGE, Orange},
            {Colors::ORANGE1, Orange1},
            {Colors::ORANGE2, Orange2},
            {Colors::ORANGE3, Orange3},
            {Colors::ORANGERED1, OrangeRed1},
            {Colors::ORCHID1, Orchid1},
            {Colors::ORCHID2, Orchid2},
            {Colors::ORCHID, Orchid},
            {Colors::PALEGREEN1, PaleGreen1},
            {Colors::PALEGREEN1A, PaleGreen1a},
            {Colors::PALEGREEN3, PaleGreen3},
            {Colors::PALEGREEN3A, PaleGreen3a},
            {Colors::PALETURQUOISE1, PaleTurquoise1},
            {Colors::PALETURQUOISE4, PaleTurquoise4},
            {Colors::PALEVIOLETRED1, PaleVioletRed1},
            {Colors::PINK1, Pink1},
            {Colors::PINK3, Pink3},
            {Colors::PLUM1, Plum1},
            {Colors::PLUM2, Plum2},
            {Colors::PLUM3, Plum3},
            {Colors::PLUM4, Plum4},
            {Colors::PURPLE3, Purple3},
            {Colors::PURPLE4, Purple4},
            {Colors::PURPLE4A, Purple4a},
            {Colors::PURPLE, Purple},
            {Colors::PURPLEA, Purplea},
            {Colors::PURPLEB, Purpleb},
            {Colors::RED1, Red1},
            {Colors::RED3, Red3},
            {Colors::RED3A, Red3a},
            {Colors::RED, Red},
            {Colors::ROSYBROWN, RosyBrown},
            {Colors::ROYALBLUE1, RoyalBlue1},
            {Colors::SALMON1, Salmon1},
            {Colors::SANDYBROWN, SandyBrown},
            {Colors::SEAGREEN1, SeaGreen1},
            {Colors::SEAGREEN1A, SeaGreen1a},
            {Colors::SEAGREEN2, SeaGreen2},
            {Colors::SEAGREEN3, SeaGreen3},
            {Colors::SILVER, Silver},
            {Colors::SKYBLUE1, SkyBlue1},
            {Colors::SKYBLUE2, SkyBlue2},
            {Colors::SKYBLUE3, SkyBlue3},
            {Colors::SLATEBLUE1, SlateBlue1},
            {Colors::SLATEBLUE3, SlateBlue3},
            {Colors::SLATEBLUE3A, SlateBlue3a},
            {Colors::SPRINGGREEN1, SpringGreen1},
            {Colors::SPRINGGREEN2, SpringGreen2},
            {Colors::SPRINGGREEN2A, SpringGreen2a},
            {Colors::SPRINGGREEN3, SpringGreen3},
            {Colors::SPRINGGREEN3A, SpringGreen3a},
            {Colors::SPRINGGREEN4, SpringGreen4},
            {Colors::STEELBLUE1, SteelBlue1},
            {Colors::STEELBLUE1A, SteelBlue1a},
            {Colors::STEELBLUE3, SteelBlue3},
            {Colors::STEELBLUE, SteelBlue},
            {Colors::TAN, Tan},
            {Colors::TEAL, Teal},
            {Colors::THISTLE1, Thistle1},
            {Colors::THISTLE3, Thistle3},
            {Colors::TURQUOISE2, Turquoise2},
            {Colors::TURQUOISE4, Turquoise4},
            {Colors::VIOLET, Violet},
            {Colors::WHEAT1, Wheat1},
            {Colors::WHEAT4, Wheat4},
            {Colors::WHITE, White},
            {Colors::YELLOW1, Yellow1},
            {Colors::YELLOW2, Yellow2},
            {Colors::YELLOW3, Yellow3},
            {Colors::YELLOW3A, Yellow3a},
            {Colors::YELLOW4, Yellow4},
            {Colors::YELLOW4A, Yellow4a},
            {Colors::YELLOW, Yellow}
    };

//    std::string give_color(const Colors &color, const std::string &str) {
//        auto it = color_map.find(color);
//        if (it != color_map.end()) {
//            return it->second + str + Normal;
//        } else {
//            return str;
//        }
//    }

    std::string give_color(const Colors &color, const std::string &str, bool blink) {
        auto it = color_map.find(color);
        if (it != color_map.end()) {
            std::string blink_sequence = blink ? "\033[5m" : "";
            return blink_sequence + it->second + str + "\033[0m";
        } else {
            return str;
        }
    }



}