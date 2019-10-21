project(App CXX)

add_library(App STATIC App.cpp)
target_include_directories(App PUBLIC ${PROJECT_SOURCE_DIR})
set_target_properties(App PROPERTIES CXX_STANDARD 17)
target_link_libraries(App Driver Engine Framework Platform)