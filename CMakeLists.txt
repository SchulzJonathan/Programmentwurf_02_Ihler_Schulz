# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)
# define the project name
project(project02 VERSION 1.0 LANGUAGES CXX)

# define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(-Wall -Wextra -pedantic)

# Making the library
add_library(developer STATIC src/developer.cpp)
target_include_directories(developer PUBLIC include)

# add executable
add_executable(project02_developers src/main.cpp)
target_include_directories(project02_developers PUBLIC include)
target_link_libraries(project02_developers PRIVATE developer)

# enable the testing
enable_testing()
# check if we have gtest
find_package(GTest REQUIRED)
# include the gtest CMake stuff
include(GoogleTest)
# create a test executable
add_executable(developer_tests test/test_developer.cpp)
# link the gtest libraries
target_link_libraries(developer_tests PRIVATE GTest::GTest GTest::Main)
# link the library we want to test
target_link_libraries(developer_tests PRIVATE developer)
# add the include directories
target_include_directories(developer_tests PUBLIC include)
# discover and add tests to the test list
gtest_discover_tests(developer_tests)