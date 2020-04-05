cmake_minimum_required(VERSION 2.8.9)

# set project name
project(hello_boost)

# set sources
set (SOURCES main.cpp)

# set boost
set(BOOST_ROOT "$ENV{ThirdPart}/boost")
set(Boost_INCLUDE_DIR "${BOOST_ROOT}/include")
set(Boost_LIBRARY_DIR "${BOOST_ROOT}/libs")
set(Boost_USE_STATIC_LIBS ON)
find_package(Boost REQUIRED filesystem)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})