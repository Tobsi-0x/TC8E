cmake_minimum_required(VERSION 3.17)
project(TC8E)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lmingw32")
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

include_directories(${PROJECT_SOURCE_DIR}/include/SDL2)
link_directories(${PROJECT_SOURCE_DIR}/lib/SDL2)

source_group(include\\ImGUI FILES ${IncludeImGUI})

set(SOURCE_FILES Src/main.cpp Src/WindowRender.cpp Src/WindowRender.h)

add_executable(TC8E ${SOURCE_FILES} )


target_link_libraries(${PROJECT_NAME} SDL2main SDL2 )