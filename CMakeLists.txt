cmake_minimum_required(VERSION 3.10)

# set the project name
project(loginProject)

# ---------------------------------------------- QT stuff ------------------------------
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# this will look for headers in the current directory
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(QT6 CONFIG REQUIRED COMPONENTS Widgets)
# ------------------------------------------- end QT stuff ----------------------------------
# add the executable
add_executable(loginProject main.cpp)

# link QT
target_link_libraries(loginProject QT6::Widgets)