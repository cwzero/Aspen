cmake_minimum_required(VERSION 3.7 FATAL_ERROR)
project(Aspen CXX)

include_directories(Include)

add_subdirectory(App)
add_subdirectory(Driver)
add_subdirectory(Engine)
add_subdirectory(Framework)
add_subdirectory(Game)
add_subdirectory(Platform)
add_subdirectory(Render)