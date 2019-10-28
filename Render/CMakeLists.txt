project(Render CXX)

add_library(Render STATIC Render.cpp)
target_include_directories(Render PUBLIC ${PROJECT_SOURCE_DIR})
set_target_properties(Render PROPERTIES CXX_STANDARD 17)
target_link_libraries(Render Platform)

find_package(assimp REQUIRED)
link_directories(${assimp_LIBRARY_DIRS})
include_directories(${assimp_INCLUDE_DIRS})
target_link_libraries(Platform ${assimp_LIBRARIES})

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})