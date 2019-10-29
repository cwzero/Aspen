project(Game CXX)

add_library(Game STATIC Game.cpp)
set_target_properties(Game PROPERTIES CXX_STANDARD 17)
target_link_libraries(Game Driver Engine Framework Platform)