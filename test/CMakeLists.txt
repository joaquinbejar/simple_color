
add_executable(test_simple_color test_simple_color.cpp)
target_include_directories(test_simple_color
        PRIVATE
        ${SIMPLE_COLOR_INCLUDE}
)

target_link_libraries(test_simple_color PRIVATE Catch2::Catch2WithMain)
target_link_libraries(test_simple_color PRIVATE simple_color)
