# A generic X container: a virtual display with VNC and noVNC, plus the toolchain a recompiled port needs.
#
# Why this exists. `Containerfile` runs the emulator under a supervisor that owns its tty, which is right for
# Tsugaru and wrong for anything else. This image owns nothing: it starts a display, two viewers and then runs
# whatever command it is given, so a project mount can be built and watched from a browser on another machine.
#
# WHY ALMALINUX 9 AND NOT A DEBIAN. The floor is glibc 2.34 (tools/glibcfloor.js, docs/port-structure.md), and a
# binary records the glibc version of every symbol it imports, so the BASE decides what the release can run on.
# Measured 2026-11-10: Debian bullseye is 2.31, bookworm 2.36, trixie 2.41, Ubuntu 22.04 2.35. Alma 9 is 2.34,
# exactly the floor, and unlike bullseye it is supported until 2032 and not archived.
#
# Why not bullseye, which was tried first. It builds, at 2.31 and below the floor, but its gcc is 10.2 and the kit
# uses std::chrono::clock_cast, which libstdc++ only gained in gcc 11. The failure is one line in
# fmtownskit/runtime/towns_dos.cpp, measured, and it is a compiler-version fact rather than a code fact. Alma 9
# ships gcc 11.
#
# SDL comes from source, not from the distribution: tools/sdl-from-source.sh builds the pinned release statically, so
# the base only has to supply a compiler and the headers SDL links against.
FROM almalinux:9

# EPEL carries what RHEL's own repositories dropped: x11vnc, xdotool, noVNC and its websockify. Everything else is
# AppStream.
RUN dnf install -y epel-release && dnf install -y \
        xorg-x11-server-Xvfb x11vnc novnc python3-websockify xorg-x11-xauth xdotool ImageMagick \
        gcc-c++ gcc make cmake pkgconf-pkg-config \
        gcc-toolset-13 \
        libX11-devel libXext-devel libXi-devel libXrandr-devel libXScrnSaver-devel libXcursor-devel \
        libXfixes-devel libXtst-devel libXinerama-devel libXrender-devel \
        wayland-devel libxkbcommon-devel wayland-protocols-devel \
        alsa-lib-devel pulseaudio-libs-devel pipewire-devel systemd-devel \
        python3 nodejs ca-certificates xz tar diffutils \
        ccache \
    && dnf clean all

COPY x-entry.sh /usr/local/bin/x-entry.sh
RUN chmod 0755 /usr/local/bin/x-entry.sh

# gcc 11 IS NOT ENOUGH, measured: its libstdc++ has no std::chrono::clock_cast, which the kit uses, and the
# build stops on one line of fmtownskit/runtime/towns_dos.cpp. Alma 9 ships gcc 11 in the base and gcc 13 as
# gcc-toolset-13, which is the combination this base was chosen for: glibc 2.34 with a compiler new enough for the
# C++20 the kit actually uses. The toolset goes first on PATH so cmake finds it without any flags.
ENV PATH=/opt/rh/gcc-toolset-13/root/usr/bin:$PATH \
    DISPLAY=:99 \
    RESOLUTION=1024x768x24

EXPOSE 6080 5900
ENTRYPOINT ["/usr/local/bin/x-entry.sh"]
