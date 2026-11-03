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

# Compiles the shadows with a deliberate error, so tools/shadow-diff.py can prove its comparison has teeth. Never on
# for a real build: a gate that has never been watched failing is a comment, and this is how it is watched.
option(U2_SHADOW_WRONG "compile the native shadows with a deliberate error" OFF)
if(U2_SHADOW_WRONG)
  add_compile_definitions(U2_SHADOW_WRONG)
  message(STATUS "u2port: native shadows are DELIBERATELY WRONG, for gate testing only")
endif()

# The module list is port/modules.cpp rather than ${RECOMP_DIR}/modules.cpp on purpose. x86_lookup_cs() walks the
# list in order and takes the FIRST module with a function at an address, so a hand-written replacement shadows
# the recompiled function only if its module comes first. The recompiler writes ${RECOMP_DIR}/modules.cpp from the
# modules it compiled and its order is the recompiler's, so the port owns the list. See port/native_shadows.h.
file(GLOB RECOMP_SRC ${RECOMP_DIR}/p_*.cpp)
add_library(game_recomp STATIC ${RECOMP_SRC})
target_include_directories(game_recomp PUBLIC ${FMT_RUNTIME})
target_compile_options(game_recomp PRIVATE -Wno-unused-label -Wno-unused-variable)

# The glyph ROM, embedded so the port does not need it beside the binary. Generated into the build directory from the
# committed file, so git does not carry a second copy of the data: assets/font-rom/FMT_FNT.ROM stays the source of truth
# and this is a build product like any other. tools/embed.js refuses the extensions that would make it a way to bake
# game media in.
set(EMBEDDED_FONT_ROM ${CMAKE_CURRENT_BINARY_DIR}/embedded_font_rom.cpp)
add_custom_command(
  OUTPUT ${EMBEDDED_FONT_ROM}
  COMMAND node ${CMAKE_CURRENT_SOURCE_DIR}/../tools/embed.js
          ${CMAKE_CURRENT_SOURCE_DIR}/../assets/font-rom/FMT_FNT.ROM
          ${EMBEDDED_FONT_ROM} g_embedded_font_rom
  DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/../assets/font-rom/FMT_FNT.ROM
          ${CMAKE_CURRENT_SOURCE_DIR}/../tools/embed.js
  COMMENT "embedding the glyph ROM")

# The licence texts, embedded for the same reason and with a sharper edge. SDL3 and fmtownskit are linked statically into
# this binary, and both of their licences require the notice to travel with the copy. Shipping them as files beside the
# binary works until somebody copies only the binary, which is exactly what a single-file release invites. Embedded, the
# notice cannot be separated from the thing it applies to, and `u2port --licences` prints it. Same generator, so there is
# one way of turning a file into a compiled-in array rather than two.
set(EMBEDDED_LICENCES "")
foreach(pair "LICENSE:g_licence_mit" "fmtownskit/LICENSE:g_licence_fmtownskit" "LICENSE.SDL3:g_licence_sdl3"
             "assets/font-rom/README.md:g_licence_font_rom")
  string(REPLACE ":" ";" parts "${pair}")
  list(GET parts 0 licence_file)
  list(GET parts 1 licence_symbol)
  set(out ${CMAKE_CURRENT_BINARY_DIR}/licence_${licence_symbol}.cpp)
  add_custom_command(
    OUTPUT ${out}
    COMMAND node ${CMAKE_CURRENT_SOURCE_DIR}/../tools/embed.js
            ${CMAKE_CURRENT_SOURCE_DIR}/../${licence_file}
            ${out} ${licence_symbol}
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/../${licence_file}
            ${CMAKE_CURRENT_SOURCE_DIR}/../tools/embed.js
    COMMENT "embedding ${licence_file}")
  list(APPEND EMBEDDED_LICENCES ${out})
endforeach()

add_executable(u2port main.cpp modules.cpp native_shadows.cpp ${EMBEDDED_FONT_ROM} ${EMBEDDED_LICENCES})
# The no-game CI check generates its module from 4 KB of zero fill, so the functions the native shadows name do not
# exist there and the table cannot name them. Shadows are game-specific by construction, so that build compiles an
# empty manifest instead of the real one. It is an option rather than a guess at the module's contents because the
# check is meant to prove one thing, that the port links with no game present, and to fail for its own reasons.
option(U2_SYNTHETIC_MODULE "build against a module generated from zero fill, with no native shadows" OFF)
if(U2_SYNTHETIC_MODULE)
  target_compile_definitions(u2port PRIVATE U2_NO_SHADOWS)
endif()
# RECOMP_DIR is on the include path for p_game_funcs.h, which native_shadows.cpp needs to name the recompiled
# twin when U2_SHADOW_OFF gives the baseline. It is a generated header, but the module is always linked, so the
# symbol always exists; tools/portcheck.js asserts the address is still declared there.
target_include_directories(u2port PRIVATE ${RECOMP_DIR})
target_link_libraries(u2port game_recomp fmt_towns)

# A WINDOWS BUILD HAS TO CARRY ITS RUNTIME, because mingw's would otherwise be two DLLs nobody has. The first cross
# build imported libgcc_s_seh-1.dll and libstdc++-6.dll, which is the same defect as a binary that needs libSDL3: it
# looks self-contained and is not. Static linking here matches what SDL already does on every platform, so the
# artefact is one file.
if(WIN32 AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  target_link_options(u2port PRIVATE -static -static-libgcc -static-libstdc++)
endif()
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
