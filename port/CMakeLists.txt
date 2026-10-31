cmake_minimum_required(VERSION 3.20)
project(u2port CXX)
set(CMAKE_CXX_STANDARD 20)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# fmtownskit's runtime. The kit is a git submodule pinned to a published upstream commit, with this project's
# MP support applied as patches/fmtownskit-mp-support.patch, so the pin plus the patch series is the whole truth.
# checkout under references/ and can be overridden with -DFMT_RUNTIME=...
set(FMT_RUNTIME ${CMAKE_CURRENT_SOURCE_DIR}/../fmtownskit/runtime CACHE PATH "fmtownskit's runtime/")
# The recompiler's output: python -m fmtownskit.recomp --out <dir> --exp game=stripped@0x0 ...
# It defaults to this repository's committed module, which is what makes a plain `cmake -S port -B build` a complete
# build with no recompile and no game file. Point it elsewhere to build against a fresh recompilation.
set(RECOMP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../module CACHE PATH "the recompiler's output")

if(NOT EXISTS ${FMT_RUNTIME}/towns.cmake)
  message(FATAL_ERROR "no fmtownskit runtime at ${FMT_RUNTIME}. Run git submodule update --init fmtownskit, or pass -DFMT_RUNTIME=.")
endif()
if(NOT EXISTS ${RECOMP_DIR}/modules.cpp)
  message(FATAL_ERROR "no recompiler output at ${RECOMP_DIR}. The committed module lives in module/ next to this directory; pass -DRECOMP_DIR=<dir> holding p_game_*.cpp and modules.cpp.")
endif()

include(${FMT_RUNTIME}/towns.cmake)

# -DU2_TRACE=ON builds a binary that can write an instruction trace (U2_TRACE_FILE), for comparing the
# port's sequence against the machine's control-flow capture. Off by default because it costs a call per
# instruction and makes the emitted code slower.
option(U2_TRACE "record execution for differential debugging" OFF)
if(U2_TRACE)
  add_compile_definitions(X86_TRACE_ON)
  message(STATUS "u2port: instruction tracing on")
endif()

file(GLOB RECOMP_SRC ${RECOMP_DIR}/p_*.cpp)
add_library(game_recomp STATIC ${RECOMP_SRC})
target_include_directories(game_recomp PUBLIC ${FMT_RUNTIME})
target_compile_options(game_recomp PRIVATE -Wno-unused-label -Wno-unused-variable)

add_executable(u2port main.cpp ${RECOMP_DIR}/modules.cpp)
target_link_libraries(u2port game_recomp fmt_towns)
if(TARGET fmt_towns_sdl)
  target_link_libraries(u2port fmt_towns_sdl)
endif()

# Which SDL the kit found, said out loud because the release artefact's portability depends on the answer. The kit
# prefers SDL3::SDL3-static when the config package provides it, which is what tools/sdl-from-source.sh builds.
if(TARGET SDL3::SDL3-static)
  message(STATUS "u2port: SDL3 static archive, no libSDL3 runtime dependency")
elseif(TARGET SDL3::SDL3)
  message(STATUS "u2port: SDL3 shared library, the binary needs libSDL3 installed")
else()
  message(STATUS "u2port: no SDL3 found, built without the window front-end")
endif()

# A release binary is unpacked wherever the reader puts it, so anything it loads from beside its own file has to be
# found by relative path rather than by an absolute build directory. $ORIGIN is the binary's own directory, and
# SDL3/ beside it is where a build that ships loadable backends would put them.
set_target_properties(u2port PROPERTIES
  BUILD_RPATH "$ORIGIN:$ORIGIN/SDL3"
  INSTALL_RPATH "$ORIGIN:$ORIGIN/SDL3")
