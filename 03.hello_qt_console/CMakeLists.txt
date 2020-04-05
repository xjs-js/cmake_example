cmake_minimum_required(VERSION 2.8.9)

# set project name
project(hello_qt_console)

# set sources
set (SOURCES main.cpp)

# set QT
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Core REQUIRED)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} Qt5::Core)