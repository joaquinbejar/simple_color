//
// Created by Joaquin Bejar Garcia on 19/10/23.
//

#include "simple_color/color.h"

namespace simple_color {
    std::string give_color( const std::string &color, const std::string &str) {
        if (color == "red") {
            return sRed + str + sNormal;
        } else if (color == "green") {
            return sGreen + str + sNormal;
        } else if (color == "yellow") {
            return sYellow + str + sNormal;
        } else if (color == "blue") {
            return sBlue + str + sNormal;
        } else if (color == "magenta") {
            return sMagenta + str + sNormal;
        } else if (color == "cyan") {
            return sCyan + str + sNormal;
        } else if (color == "white") {
            return sWhite + str + sNormal;
        } else if (color == "bred") {
            return sBRed + str + sNormal;
        } else if (color == "bgreen") {
            return sBGreen + str + sNormal;
        } else if (color == "byellow") {
            return sBYellow + str + sNormal;
        } else if (color == "bblue") {
            return sBBlue + str + sNormal;
        } else if (color == "bmagenta") {
            return sBMagenta + str + sNormal;
        } else if (color == "bcyan") {
            return sBCyan + str + sNormal;
        } else if (color == "bwhite") {
            return sBWhite + str + sNormal;
        } else {
            return str;
        }
    }
}