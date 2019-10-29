project(Game CXX)

add_executable(Game Game.cpp Main.cpp)
set_target_properties(Game PROPERTIES CXX_STANDARD 17)
target_link_libraries(Game App Driver Render Engine Framework Platform)