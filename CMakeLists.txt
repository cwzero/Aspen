cmake_minimum_required(VERSION 3.7 FATAL_ERROR)
project(Aspen CXX)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${Aspen_SOURCE_DIR}/cmake")

set(BIN_DIR ${Aspen_SOURCE_DIR}/bin)

if (${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU" OR ${CMAKE_CXX_COMPILER_ID} STREQUAL "Clang")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -std=c++11")
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_DEBUG} -g")
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_RELEASE} -O2")
elseif (${CMAKE_CXX_COMPILER_ID} STREQUAL "MSVC")
	if (CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
		string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
	else()
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
	endif()
endif()

include_directories(${Aspen_SOURCE_DIR})

add_subdirectory(App)
add_subdirectory(Driver)
add_subdirectory(Engine)
add_subdirectory(Framework)
add_subdirectory(Game)
add_subdirectory(Platform)
add_subdirectory(Render)