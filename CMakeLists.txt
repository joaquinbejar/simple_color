cmake_minimum_required(VERSION 3.17)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(simple_color)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake;${CMAKE_MODULE_PATH}")
set(SIMPLE_COLOR_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/include")
if (CMAKE_DEBUG)
    message(STATUS "simple_color SIMPLE_COLOR_INCLUDE ${SIMPLE_COLOR_INCLUDE}")
endif ()
add_library(simple_color STATIC src/color.cpp)
target_include_directories(simple_color PUBLIC ${SIMPLE_COLOR_INCLUDE})

install(TARGETS simple_color DESTINATION lib)
install(DIRECTORY include/ DESTINATION include)

option(NO_SIMPLE_COLOR_TESTS "simple_color Disable Current tests" OFF)

if (NOT NO_SIMPLE_COLOR_TESTS)
    include(FetchContent)
    FetchContent_Declare(Catch2
            GIT_REPOSITORY https://github.com/catchorg/Catch2.git
            GIT_TAG v3.4.0
    )
    FETCHCONTENT_GETPROPERTIES(Catch2)
    FETCHCONTENT_MAKEAVAILABLE(Catch2)

    add_subdirectory(test)
endif ()