project(Render CXX)

add_library(Render STATIC Render.cpp)
set_target_properties(Render PROPERTIES CXX_STANDARD 17)
target_link_libraries(Render Platform)