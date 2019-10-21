project(Engine CXX)

add_library(Engine STATIC Engine.cpp)
set_target_properties(Engine PROPERTIES CXX_STANDARD 17)
target_link_libraries(Engine Framework Platform)