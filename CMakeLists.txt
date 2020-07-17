cmake_minimum_required(VERSION 3.5)

project(workshop-examples LANGUAGES CXX)

add_subdirectory(libs/Catch2)

enable_testing()
add_subdirectory(day1)
