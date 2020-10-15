#!/bin/bash
dockcross-linux-armv6 cmake -DBUILD_TESTS=OFF -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=install -DDEPS_INSTALL_PATH=install -DBUILD_SHARED_LIBS=OFF -Bbuild/linux-armv6 -S.
dockcross-linux-armv6 cmake --build build/linux-armv6 -j 8 --target install
