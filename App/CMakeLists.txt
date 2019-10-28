project(App CXX)

add_library(App STATIC App.cpp)
set_target_properties(App PROPERTIES CXX_STANDARD 17)
target_include_directories(App PUBLIC ${PROJECT_SOURCE_DIR})
target_link_libraries(App Driver Render Engine Framework Platform)