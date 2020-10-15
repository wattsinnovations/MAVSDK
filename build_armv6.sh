#!/bin/bash
dockcross-linux-armv6 cmake -DENABLE_MAVLINK_PASSTHROUGH=1 -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=install -DDEPS_INSTALL_PATH=install -DBUILD_SHARED_LIBS=OFF -Bbuild/linux-armv6 -S.
dockcross-linux-armv6 cmake --build build/linux-armv6 -j 8 --target install
