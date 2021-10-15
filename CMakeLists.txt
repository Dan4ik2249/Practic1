cmake_minimum_required (VERSION 3.1)

project(Practic1)
add_library(Practic1 SHARED src/logic.c src/trigonometry.c src/piecewise.c src/inside.c)
add_executable(Practic1.tests tests/logic.tests.cpp tests/trigonometry.tests.cpp tests/piecewise.tests.cpp tests/inside.tests.cpp)
target_link_libraries(Practic1.tests Practic1 gtest gtest_main pthread)
