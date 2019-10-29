project(Driver CXX)

add_library(Driver STATIC Driver.cpp)
set_target_properties(Driver PROPERTIES CXX_STANDARD 17)
target_link_libraries(Driver Engine Framework Platform)