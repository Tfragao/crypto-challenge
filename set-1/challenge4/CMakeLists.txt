cmake_minimum_required(VERSION 3.26.3)
project(crypto-challenge)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  main
  main.c
  ../commons/helpers.c 
  ../commons/defs.h
)
target_link_libraries(
  main
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(main)

