project(Engine CXX)

add_library(Engine STATIC Engine.cpp)
target_include_directories(Engine PUBLIC ${PROJECT_SOURCE_DIR})
set_target_properties(Engine PROPERTIES CXX_STANDARD 17)
target_link_libraries(Engine Render Framework Platform)