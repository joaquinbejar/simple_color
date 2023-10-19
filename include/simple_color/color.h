//
// Created by Joaquin Bejar Garcia on 19/10/23.
//

#ifndef SIMPLE_COLOR_COLOR_H
#define SIMPLE_COLOR_COLOR_H

#include <string>

namespace simple_color {

    static const char Normal[] = {0x1b, '[', '0', ';', '3', '9', 'm', 0};
    static const char Red[] = {0x1b, '[', '1', ';', '3', '1', 'm', 0};
    static const char Green[] = {0x1b, '[', '1', ';', '3', '2', 'm', 0};
    static const char Yellow[] = {0x1b, '[', '1', ';', '3', '3', 'm', 0};
    static const char Blue[] = {0x1b, '[', '1', ';', '3', '4', 'm', 0};
    static const char Magenta[] = {0x1b, '[', '1', ';', '3', '5', 'm', 0};
    static const char Cyan[] = {0x1b, '[', '1', ';', '3', '6', 'm', 0};
    static const char White[] = {0x1b, '[', '1', ';', '3', '7', 'm', 0};
    static const char BRed[] = {0x1b, '[', '1', ';', '9', '1', 'm', 0};
    static const char BGreen[] = {0x1b, '[', '1', ';', '9', '2', 'm', 0};
    static const char BYellow[] = {0x1b, '[', '1', ';', '9', '3', 'm', 0};
    static const char BBlue[] = {0x1b, '[', '1', ';', '9', '4', 'm', 0};
    static const char BMagenta[] = {0x1b, '[', '1', ';', '9', '5', 'm', 0};
    static const char BCyan[] = {0x1b, '[', '1', ';', '9', '6', 'm', 0};
    static const char BWhite[] = {0x1b, '[', '1', ';', '9', '7', 'm', 0};

    static const std::string sNormal = std::string(Normal);
    static const std::string sRed = std::string(Red);
    static const std::string sGreen = std::string(Green);
    static const std::string sYellow = std::string(Yellow);
    static const std::string sBlue = std::string(Blue);
    static const std::string sMagenta = std::string(Magenta);
    static const std::string sCyan = std::string(Cyan);
    static const std::string sWhite = std::string(White);
    static const std::string sBRed = std::string(BRed);
    static const std::string sBGreen = std::string(BGreen);
    static const std::string sBYellow = std::string(BYellow);
    static const std::string sBBlue = std::string(BBlue);
    static const std::string sBMagenta = std::string(BMagenta);
    static const std::string sBCyan = std::string(BCyan);
    static const std::string sBWhite = std::string(BWhite);

    std::string give_color(const std::string &color, const std::string &str);
}

#endif //SIMPLE_COLOR_COLOR_H
