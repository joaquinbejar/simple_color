//
// Created by Joaquin Bejar Garcia on 19/10/23.
//

#include <catch2/catch_test_macros.hpp>
#include <simple_color/color.h>
#include <iostream>



using namespace simple_color;


TEST_CASE("Test give_color function", "[give_color]") {

    SECTION("Orange and bright orange should work") {

        std::cout << give_color(Colors::DARKORANGE, "DARKORANGE") << std::endl;
        std::cout << give_color(Colors::ORANGE1, "ORANGE1") << std::endl;
        std::cout << give_color(Colors::ORANGE2, "ORANGE2") << std::endl;
    }
}
