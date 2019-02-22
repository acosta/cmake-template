# Minimum CMake's version
cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

# Project's name
project(cmake_template)

# Find Boost library on the system and its timer component
find_package( Boost COMPONENTS timer REQUIRED )

# Subfolders to be inspected by CMake
add_subdirectory(src)
