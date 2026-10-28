# A generic X container: a virtual display with VNC and noVNC, plus the toolchain a recompiled port needs.
#
# Why this exists. `Containerfile` runs the emulator under a supervisor that owns its tty, which is right for
# Tsugaru and wrong for anything else. This image owns nothing: it starts a display, two viewers and then runs
# whatever command it is given, so a project mount can be built and watched from a browser on another machine.
#
# Why Debian trixie and not the Ubuntu 24.04 the emulator image uses. The port links SDL3, and 24.04 has no
# libsdl3-dev (checked: no candidate). trixie has 3.2.10, so this image can compile the port itself rather than
# depend on a host build, which matters because a binary built on the host needs a newer glibc (2.43 there) than
# any of these bases ship.
FROM debian:trixie-slim

ENV DEBIAN_FRONTEND=noninteractive

# The display and its viewers, the toolchain, and the two tools worth having inside: xdotool to type into the
# guest and ImageMagick to capture the virtual screen for evidence.
RUN apt-get update && apt-get install -y --no-install-recommends \
        xvfb x11vnc novnc websockify xauth xdotool imagemagick \
        cmake g++ make pkg-config libsdl3-dev \
        python3 python3-venv ca-certificates \
    && rm -rf /var/lib/apt/lists/*

COPY x-entry.sh /usr/local/bin/x-entry.sh
RUN chmod 0755 /usr/local/bin/x-entry.sh

ENV DISPLAY=:99 \
    RESOLUTION=1024x768x24

EXPOSE 6080 5900
ENTRYPOINT ["/usr/local/bin/x-entry.sh"]
