project(Platform CXX)

add_library(Platform STATIC System.cpp Platform.cpp)
set_target_properties(Platform PROPERTIES CXX_STANDARD 17)