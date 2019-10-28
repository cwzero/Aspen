project(Framework CXX)

add_library(Framework STATIC Framework.cpp)
target_include_directories(Framework PUBLIC ${PROJECT_SOURCE_DIR})
set_target_properties(Framework PROPERTIES CXX_STANDARD 17)
target_link_libraries(Framework Render Platform)