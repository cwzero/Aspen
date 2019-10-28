project(Platform CXX)

add_library(Platform STATIC Platform.cpp)
target_include_directories(Platform PUBLIC ${PROJECT_SOURCE_DIR})
set_target_properties(Platform PROPERTIES CXX_STANDARD 17)