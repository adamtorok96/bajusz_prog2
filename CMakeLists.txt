cmake_minimum_required(VERSION 3.7)
project(bajusz)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Dijcsomag.cpp Ugyfel.cpp Ember.cpp)
add_executable(bajusz ${SOURCE_FILES})