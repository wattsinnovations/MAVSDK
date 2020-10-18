#!/bin/bash
raspberry-armv6-container cmake -DBUILD_TESTS=OFF -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=install -DDEPS_INSTALL_PATH=install -DBUILD_SHARED_LIBS=OFF -Bbuild/linux-armv6 -S.
raspberry-armv6-container cmake --build build/linux-armv6 -j 10 --target install
