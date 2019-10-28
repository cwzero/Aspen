project(Driver CXX)

add_library(Driver STATIC Driver.cpp)
target_include_directories(Driver PUBLIC ${PROJECT_SOURCE_DIR})
set_target_properties(Driver PROPERTIES CXX_STANDARD 17)
target_link_libraries(Driver Render Engine Framework Platform)