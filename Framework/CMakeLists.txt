project(Framework CXX)

add_library(Framework STATIC Framework.cpp)
set_target_properties(Framework PROPERTIES CXX_STANDARD 17)
target_link_libraries(Framework Render Platform)