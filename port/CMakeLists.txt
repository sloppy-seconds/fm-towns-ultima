# 3.18, not 3.20, because the release builds on Debian bullseye, which ships 3.18.4, and the portability floor is
# decided by the base image rather than by this file (docs/port-structure.md). Nothing here uses a feature newer than
# 3.13: add_custom_command, target_link_options and target_compile_definitions are all that it takes.
cmake_minimum_required(VERSION 3.18)
# THE EXECUTABLE IS NAMED AFTER THE TITLE IT RUNS (docs/recompile-ultima3-plan.md, item U3-6a, and
# docs/port-structure.md). Seven titles are in scope and the module is compiled in, so one binary per title is the
# shape, which means the names have to differ: two releases, two play.sh trees, or one folder holding both
# binaries collide otherwise. The name is the title's id from tools/games.js, so `u1`, `u2`, `u3`, `british`,
# `u1demo`. The default is `u2` because Ultima II is the title every existing doc, gate and route was measured on.
# The RELEASE ASSET keeps its long name (dist/u2port-linux-x86_64): that name says what the file is to somebody who
# downloads it, and tools/checkall.js asserts it, so renaming the executable deliberately does not move it.
set(PORT_TARGET u2 CACHE STRING "name of the executable this build produces")
# WHICH PROGRAM THE BINARY RUNS, because the module compiled into it is one title's code and nothing else. The port asks
# the disc image for this name when it finds no executable beside itself, so a binary that says ENCHANT.EXP while holding
# EXODUS.EXP's module runs Ultima II's entry address against code that never contained it: measured on jarvis, it stops at
# `no recompiled function at 000C:101a20`. Set together with PORT_TARGET by tools/game-build.sh from tools/games.js.
set(PORT_PROGRAM "ENCHANT.EXP" CACHE STRING "the .EXP inside the disc image that this binary runs")
# WHAT THE WINDOW'S TITLE BAR SAYS. The kit appends the CPU rate, so the rest is the title's own name. It defaults to the
# executable's name rather than to a fixed string, because the failure this replaced was one hard-coded Ultima II title
# in every binary, and a default that cannot be the same for two titles makes that failure impossible rather than
# merely fixed. tools/games.js `window` supplies the short name where a build passes this.
set(PORT_TITLE "${PORT_PROGRAM}" CACHE STRING "the window title bar's text, before the kit appends the CPU rate")
# THE SPEED THE BINARY STARTS AT, as a percentage of the FM Towns clock. 100 is the machine's own speed and is the
# default here so that a build path nobody updated runs at the speed everything was measured at. tools/games.js
# `cpuRate` supplies the title's own value, and the three demos use 20: their narration scrolls faster than it can be
# read, and they end the run on any key press, so the kit's F5 cannot be used on them. --cpu-rate=N still overrides.
set(PORT_CPU_RATE 100 CACHE STRING "the percentage of the FM Towns clock this binary starts at")
project(${PORT_TARGET} CXX)
set(CMAKE_CXX_STANDARD 20)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# CCACHE, WHEN IT IS THERE. Every one of the seven titles compiles its own copy of the 302-file shared TBIOS module,
# because cmake compiles per target and there is no object reuse between them, so three demos are about 933 translation
# units of large generated C++. Measured 2026-11-13: four minutes per title. A cache turns a repeat build into a relink.
# It is used only when the launcher is found, so a host without ccache builds exactly as before, and -DPORT_NO_CCACHE=ON
# opts out where a cache would hide a change.
#
# CCACHE_DIR IS THE CALLER'S JOB, and this is the trap that cost an hour: setting it here only affects the *configure*
# process, while the launcher runs under `cmake --build`, which inherits the environment of whatever invoked it. In a
# `podman run --rm` the default is /root/.ccache, which is discarded with the container, so the cache is written every
# run and never read. The build scripts export CCACHE_DIR=$ROOT/build/.ccache, inside the tree, and the container mounts
# the tree, so the cache survives.
option(PORT_NO_CCACHE "build without ccache even if it is installed" OFF)
if(NOT PORT_NO_CCACHE)
  find_program(CCACHE_PROGRAM ccache)
  if(CCACHE_PROGRAM)
    set(CMAKE_CXX_COMPILER_LAUNCHER "${CCACHE_PROGRAM}")
    message(STATUS "${PORT_TARGET}: ccache at ${CCACHE_PROGRAM}, cache in $ENV{CCACHE_DIR} (export CCACHE_DIR to keep it)")
  endif()
endif()

# fmtownskit's runtime. The kit is a git submodule pinned to a published upstream commit, with this project's
# MP support applied as patches/fmtownskit-mp-support.patch, so the pin plus the patch series is the whole truth.
# checkout under references/ and can be overridden with -DFMT_RUNTIME=...
set(FMT_RUNTIME ${CMAKE_CURRENT_SOURCE_DIR}/../fmtownskit/runtime CACHE PATH "fmtownskit's runtime/")
# The recompiler's output: python -m fmtownskit.recomp --out <dir> --exp game=stripped@0x0 ...
# It defaults to this repository's committed module, which is what makes a plain `cmake -S port -B build` a complete
# build with no recompile and no game file. Point it elsewhere to build against a fresh recompilation.
#
# THE MODULE IS TWO DIRECTORIES, because the TBIOS half is the same program for every title and is 84 MB. It is
# committed once under module/tbios and shared, while each title's own code lives in module/<id>. A recompilation writes
# both halves into one directory, so RECOMP_DIR works alone when TBIOS_DIR is not given, and the glob below removes the
# duplicates that would otherwise be listed twice.
set(RECOMP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../module/u2 CACHE PATH "the recompiler's output for this title's game module")
set(TBIOS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../module/tbios CACHE PATH "the shared TBIOS module, the same for every title")

if(NOT EXISTS ${FMT_RUNTIME}/towns.cmake)
  message(FATAL_ERROR "no fmtownskit runtime at ${FMT_RUNTIME}. Run git submodule update --init fmtownskit, or pass -DFMT_RUNTIME=.")
endif()
if(NOT EXISTS ${RECOMP_DIR}/modules.cpp)
  message(FATAL_ERROR "no game module at ${RECOMP_DIR}. The committed modules live under module/<id>/ next to this directory; pass -DRECOMP_DIR=<dir> holding p_game_*.cpp and modules.cpp.")
endif()
if(NOT EXISTS ${TBIOS_DIR}/p_tbios_funcs.h)
  message(FATAL_ERROR "no TBIOS module at ${TBIOS_DIR}. It is committed once at module/tbios/, or pass -DTBIOS_DIR=<dir> holding p_tbios_*.cpp.")
endif()

include(${FMT_RUNTIME}/towns.cmake)

# -DU2_TRACE=ON builds a binary that can write an instruction trace (U2_TRACE_FILE), for comparing the
# port's sequence against the machine's control-flow capture. Off by default because it costs a call per
# instruction and makes the emitted code slower.
option(U2_TRACE "record execution for differential debugging" OFF)
if(U2_TRACE)
  add_compile_definitions(X86_TRACE_ON)
  message(STATUS "${PORT_TARGET}: instruction tracing on")
endif()

# Compiles the shadows with a deliberate error, so tools/shadow-diff.py can prove its comparison has teeth. Never on
# for a real build: a gate that has never been watched failing is a comment, and this is how it is watched.
option(U2_SHADOW_WRONG "compile the native shadows with a deliberate error" OFF)
if(U2_SHADOW_WRONG)
  add_compile_definitions(U2_SHADOW_WRONG)
  message(STATUS "${PORT_TARGET}: native shadows are DELIBERATELY WRONG, for gate testing only")
endif()

# The module list is port/modules.cpp rather than ${RECOMP_DIR}/modules.cpp on purpose. x86_lookup_cs() walks the
# list in order and takes the FIRST module with a function at an address, so a hand-written replacement shadows
# the recompiled function only if its module comes first. The recompiler writes ${RECOMP_DIR}/modules.cpp from the
# modules it compiled and its order is the recompiler's, so the port owns the list. See port/native_shadows.h.
file(GLOB RECOMP_SRC ${RECOMP_DIR}/p_*.cpp ${TBIOS_DIR}/p_*.cpp)
# A recompilation writes the game and TBIOS halves into one directory, so the two globs return the same files when
# TBIOS_DIR is not given. CMake refuses a source listed twice for one target, and this removes that case rather than
# relying on the caller to know which directories to pass.
list(REMOVE_DUPLICATES RECOMP_SRC)
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
# notice cannot be separated from the thing it applies to, and `<binary> --licences` prints it. Same generator, so there is
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

add_executable(${PORT_TARGET} main.cpp modules.cpp native_shadows.cpp ${EMBEDDED_FONT_ROM} ${EMBEDDED_LICENCES})
target_compile_definitions(${PORT_TARGET} PRIVATE "PORT_PROGRAM=\"${PORT_PROGRAM}\"")
target_compile_definitions(${PORT_TARGET} PRIVATE "PORT_TITLE=\"${PORT_TITLE}\"")
target_compile_definitions(${PORT_TARGET} PRIVATE PORT_CPU_RATE=${PORT_CPU_RATE})
message(STATUS "${PORT_TARGET}: runs \\${PORT_PROGRAM} from the disc image, window titled \"${PORT_TITLE}\", CPU rate ${PORT_CPU_RATE}%")
# The no-game CI check generates its module from 4 KB of zero fill, so the functions the native shadows name do not
# exist there and the table cannot name them. Shadows are game-specific by construction, so that build compiles an
# empty manifest instead of the real one. It is an option rather than a guess at the module's contents because the
# check is meant to prove one thing, that the port links with no game present, and to fail for its own reasons.
option(U2_SYNTHETIC_MODULE "build against a module generated from zero fill, with no native shadows" OFF)
if(U2_SYNTHETIC_MODULE)
  target_compile_definitions(${PORT_TARGET} PRIVATE U2_NO_SHADOWS)
endif()
# A MODULE FROM ANOTHER TITLE. port/native_shadows.cpp is a list of replacements for named routines of
# ENCHANT.EXP, so every entry names a function that exists in that module and in no other. Against a module
# recompiled from EXODUS.EXP the compile stops at the first `f_000e6858 is not a member of p_game`, which is the
# gate doing its job. This option is how a second title builds with an empty shadow manifest rather than by
# deleting the file, and tools/u3-build.sh sets it.
option(U2_FOREIGN_MODULE "the module is not ENCHANT.EXP, so U2's native shadows do not apply" OFF)
if(U2_FOREIGN_MODULE)
  target_compile_definitions(${PORT_TARGET} PRIVATE U2_NO_SHADOWS)
  message(STATUS "${PORT_TARGET}: module is from another title, native shadows disabled")
endif()
# RECOMP_DIR is on the include path for p_game_funcs.h, which native_shadows.cpp needs to name the recompiled
# twin when U2_SHADOW_OFF gives the baseline. It is a generated header, but the module is always linked, so the
# symbol always exists; tools/portcheck.js asserts the address is still declared there.
# Both, because p_game_funcs.h is what the native shadows name their recompiled twins by and p_tbios_funcs.h is the
# other half's; a build from two directories needs both on the include path.
target_include_directories(${PORT_TARGET} PRIVATE ${RECOMP_DIR} ${TBIOS_DIR})
target_link_libraries(${PORT_TARGET} game_recomp fmt_towns)

# A WINDOWS BUILD HAS TO CARRY ITS RUNTIME, because mingw's would otherwise be two DLLs nobody has. The first cross
# build imported libgcc_s_seh-1.dll and libstdc++-6.dll, which is the same defect as a binary that needs libSDL3: it
# looks self-contained and is not. Static linking here matches what SDL already does on every platform, so the
# artefact is one file.
#
# --no-insert-timestamp BECAUSE A DIGEST HAS TO MEAN SOMETHING. mingw writes the build time into the PE header, so two
# builds of identical source differ in sha256 and a published digest describes one build rather than the code. Measured
# 2026-11-12: two Windows builds of the same tree produced f4a764f4… and bf42537d… before this flag existed. With it the
# header's timestamp is zero and the same source should produce the same bytes, which is the property the Linux binaries
# already have.
if(WIN32 AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  target_link_options(${PORT_TARGET} PRIVATE -static -static-libgcc -static-libstdc++ -Wl,--no-insert-timestamp)
endif()

# THE C++ RUNTIME ON LINUX, and it is an option rather than unconditional because the static archive is not installed
# everywhere. libstdc++ is the other library with a version floor of its own: this binary asked for GLIBCXX_3.4.31,
# which is gcc 13's, before this existed. Linking it statically moves those symbols into the binary and leaves glibc
# as the only floor, which is what tools/glibcfloor.js then checks. Fedora and Bazzite do not ship libstdc++.a in the
# default toolchain (it is the libstdc++-static package), so a host build with this off still links and is simply not
# shippable; the release build turns it on, and tools/release-package.sh refuses a binary that carries GLIBCXX_ needs.
option(PORT_STATIC_CXX "link libstdc++ and libgcc statically, so glibc is the only version floor" OFF)
if(PORT_STATIC_CXX AND NOT WIN32 AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  target_link_options(${PORT_TARGET} PRIVATE -static-libgcc -static-libstdc++)
  message(STATUS "${PORT_TARGET}: libstdc++ and libgcc linked statically")
endif()
if(TARGET fmt_towns_sdl)
  target_link_libraries(${PORT_TARGET} fmt_towns_sdl)
endif()

# STATIC SDL3 IS THE DEFAULT AND A SHARED ONE IS A BUILD ERROR. A binary that needs libSDL3 from the distro is not
# portable: Ubuntu 24.04 has no libsdl3-dev at all, and a reader who copies one file expects one file to work. So a
# configure that finds only the shared library stops here and names the fix, rather than producing something that
# runs on this machine and nowhere else. tools/sdl-from-source.sh builds the pinned upstream release as libSDL3.a,
# and every build script passes its prefix. -DPORT_ALLOW_SHARED_SDL=ON exists for one case: a CI link check inside a
# container that has a shared SDL3 and is not producing anything anybody runs.
option(PORT_ALLOW_SHARED_SDL "link the system SDL3 instead of the pinned static archive (nothing you ship)" OFF)

# Which SDL the kit found, said out loud because the artefact's portability depends on the answer.
if(TARGET SDL3::SDL3-static)
  message(STATUS "${PORT_TARGET}: SDL3 static archive, no libSDL3 runtime dependency")
elseif(TARGET SDL3::SDL3)
  if(PORT_ALLOW_SHARED_SDL)
    message(WARNING "${PORT_TARGET}: linking the SHARED SDL3, so this binary needs libSDL3 installed. Not shippable.")
  else()
    message(FATAL_ERROR
      "only a shared SDL3 was found, and every build links the pinned static archive by default.\n"
      "  build it once:   tools/sdl-from-source.sh            (prints the prefix, takes a few minutes)\n"
      "  then configure:  -DCMAKE_PREFIX_PATH=<that prefix>\n"
      "  or set SDL3_PREFIX in tools/port-build.sh / tools/game-build.sh, which do this for you.\n"
      "  a link-only CI check may pass -DPORT_ALLOW_SHARED_SDL=ON.")
  endif()
else()
  message(STATUS "${PORT_TARGET}: no SDL3 found, built without the window front-end")
endif()

# A release binary is unpacked wherever the reader puts it, so anything it loads from beside its own file has to be
# found by relative path rather than by an absolute build directory. $ORIGIN is the binary's own directory, and
# SDL3/ beside it is where a build that ships loadable backends would put them.
set_target_properties(${PORT_TARGET} PROPERTIES
  BUILD_RPATH "$ORIGIN:$ORIGIN/SDL3"
  INSTALL_RPATH "$ORIGIN:$ORIGIN/SDL3")
