cmake_minimum_required(VERSION 3.20)
project(u2port CXX)
set(CMAKE_CXX_STANDARD 20)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# fmtownskit's runtime. The kit is a clone of a branch, not a submodule here, so this points at the
# checkout under references/ and can be overridden with -DFMT_RUNTIME=...
set(FMT_RUNTIME ${CMAKE_CURRENT_SOURCE_DIR}/../references/vs-sr-dev/fmtownskit/runtime CACHE PATH "fmtownskit's runtime/")
# The recompiler's output: python -m fmtownskit.recomp --out <dir> --exp game=stripped@0x0 ...
set(RECOMP_DIR "" CACHE PATH "the recompiler's output")

if(NOT EXISTS ${FMT_RUNTIME}/towns.cmake)
  message(FATAL_ERROR "no fmtownskit runtime at ${FMT_RUNTIME}. Clone https://github.com/vs-sr-dev/fmtownskit on the mp-support branch, or pass -DFMT_RUNTIME=.")
endif()
if(NOT EXISTS ${RECOMP_DIR}/modules.cpp)
  message(FATAL_ERROR "no recompiler output at ${RECOMP_DIR}. Pass -DRECOMP_DIR=<dir> holding p_game_*.cpp and modules.cpp.")
endif()

include(${FMT_RUNTIME}/towns.cmake)

file(GLOB RECOMP_SRC ${RECOMP_DIR}/p_*.cpp)
add_library(game_recomp STATIC ${RECOMP_SRC})
target_include_directories(game_recomp PUBLIC ${FMT_RUNTIME})
target_compile_options(game_recomp PRIVATE -Wno-unused-label -Wno-unused-variable)

add_executable(u2port main.cpp ${RECOMP_DIR}/modules.cpp)
target_link_libraries(u2port game_recomp fmt_towns)
if(TARGET fmt_towns_sdl)
  target_link_libraries(u2port fmt_towns_sdl)
endif()
