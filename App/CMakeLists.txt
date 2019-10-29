project(App CXX)

add_library(App STATIC App.cpp)
set_target_properties(App PROPERTIES CXX_STANDARD 17)
target_link_libraries(App Driver Render Engine Framework Platform)