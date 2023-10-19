//
// Created by Joaquin Bejar Garcia on 19/10/23.
//

#include "simple_color/color.h"

namespace simple_color {

    std::unordered_map<std::string, std::string> color_map = {
            {"red",      sRed},
            {"green",    sGreen},
            {"yellow",   sYellow},
            {"blue",     sBlue},
            {"magenta",  sMagenta},
            {"cyan",     sCyan},
            {"white",    sWhite},
            {"bred",     sBRed},
            {"bgreen",   sBGreen},
            {"byellow",  sBYellow},
            {"bblue",    sBBlue},
            {"bmagenta", sBMagenta},
            {"bcyan",    sBCyan},
            {"bwhite",   sBWhite},
    };

    std::string give_color(const std::string &color, const std::string &str) {
        auto it = color_map.find(color);
        if (it != color_map.end()) {
            return it->second + str + sNormal;
        } else {
            return str;
        }
    }


}